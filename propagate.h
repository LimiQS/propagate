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

#ifndef PROPAGATE_H
#define PROPAGATE_H

#define UNICODE

#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "payload.h"

#pragma comment(lib, "advapi32.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "shell32.lib")

typedef LRESULT (CALLBACK *SUBCLASSPROC)(
   HWND      hWnd,
   UINT      uMsg,
   WPARAM    wParam,
   LPARAM    lParam,
   UINT_PTR  uIdSubclass,
   DWORD_PTR dwRefData);

typedef struct _SUBCLASS_CALL {
  SUBCLASSPROC pfnSubclass;    // subclass procedure
  WPARAM       uIdSubclass;    // unique subclass identifier
  DWORD_PTR    dwRefData;      // optional ref data
} SUBCLASS_CALL, PSUBCLASS_CALL;

typedef struct _SUBCLASS_FRAME {
  UINT                    uCallIndex;   // index of next callback to call
  UINT                    uDeepestCall; // deepest uCallIndex on stack
  struct _SUBCLASS_FRAME  *pFramePrev;  // previous subclass frame pointer
  struct _SUBCLASS_HEADER *pHeader;     // header associated with this frame
} SUBCLASS_FRAME, PSUBCLASS_FRAME;

typedef struct _SUBCLASS_HEADER {
  UINT           uRefs;        // subclass count
  UINT           uAlloc;       // allocated subclass call nodes
  UINT           uCleanup;     // index of call node to clean up
  DWORD          dwThreadId;   // thread id of window we are hooking
  SUBCLASS_FRAME *pFrameCur;   // current subclass frame pointer
  SUBCLASS_CALL  CallArray[1]; // base of packed call node array
} SUBCLASS_HEADER, *PSUBCLASS_HEADER;

#endif