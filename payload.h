
#define PAYLOAD_SIZE 808

char PAYLOAD[] = {
  /* 0000 */ "\x81\xec\xb0\x00\x00\x00"                     /* sub esp, 0xb0                    */
  /* 0006 */ "\x53"                                         /* push ebx                         */
  /* 0007 */ "\x55"                                         /* push ebp                         */
  /* 0008 */ "\x33\xdb"                                     /* xor ebx, ebx                     */
  /* 000A */ "\xc7\x44\x24\x70\x47\x65\x74\x50"             /* mov dword [esp+0x70], 0x50746547 */
  /* 0012 */ "\x83\xbc\x24\xc0\x00\x00\x00\x10"             /* cmp dword [esp+0xc0], 0x10       */
  /* 001A */ "\xba\x65\x48\x61\x6e"                         /* mov edx, 0x6e614865              */
  /* 001F */ "\x6a\x65"                                     /* push 0x65                        */
  /* 0021 */ "\xb9\x61\x67\x61\x74"                         /* mov ecx, 0x74616761              */
  /* 0026 */ "\xc7\x44\x24\x78\x72\x6f\x63\x41"             /* mov dword [esp+0x78], 0x41636f72 */
  /* 002E */ "\x58"                                         /* pop eax                          */
  /* 002F */ "\xbd\x65\x6c\x33\x32"                         /* mov ebp, 0x32336c65              */
  /* 0034 */ "\xc7\x44\x24\x78\x64\x64\x72\x65"             /* mov dword [esp+0x78], 0x65726464 */
  /* 003C */ "\xc7\x44\x24\x7c\x73\x73\x00\x00"             /* mov dword [esp+0x7c], 0x7373     */
  /* 0044 */ "\xc7\x84\x24\x90\x00\x00\x00\x47\x65\x74\x4d" /* mov dword [esp+0x90], 0x4d746547 */
  /* 004F */ "\xc7\x84\x24\x94\x00\x00\x00\x6f\x64\x75\x6c" /* mov dword [esp+0x94], 0x6c75646f */
  /* 005A */ "\x89\x94\x24\x98\x00\x00\x00"                 /* mov [esp+0x98], edx              */
  /* 0061 */ "\xc7\x84\x24\x9c\x00\x00\x00\x64\x6c\x65\x41" /* mov dword [esp+0x9c], 0x41656c64 */
  /* 006C */ "\x89\x9c\x24\xa0\x00\x00\x00"                 /* mov [esp+0xa0], ebx              */
  /* 0073 */ "\xc7\x44\x24\x1c\x6b\x65\x72\x6e"             /* mov dword [esp+0x1c], 0x6e72656b */
  /* 007B */ "\x89\x6c\x24\x20"                             /* mov [esp+0x20], ebp              */
  /* 007F */ "\x89\x5c\x24\x24"                             /* mov [esp+0x24], ebx              */
  /* 0083 */ "\xc7\x44\x24\x14\x75\x73\x65\x72"             /* mov dword [esp+0x14], 0x72657375 */
  /* 008B */ "\xc7\x44\x24\x18\x33\x32\x00\x00"             /* mov dword [esp+0x18], 0x3233     */
  /* 0093 */ "\xc7\x44\x24\x4c\x4d\x65\x73\x73"             /* mov dword [esp+0x4c], 0x7373654d */
  /* 009B */ "\xc7\x44\x24\x50\x61\x67\x65\x42"             /* mov dword [esp+0x50], 0x42656761 */
  /* 00A3 */ "\xc7\x44\x24\x54\x6f\x78\x41\x00"             /* mov dword [esp+0x54], 0x41786f   */
  /* 00AB */ "\xc7\x84\x24\x80\x00\x00\x00\x48\x65\x6c\x6c" /* mov dword [esp+0x80], 0x6c6c6548 */
  /* 00B6 */ "\xc7\x84\x24\x84\x00\x00\x00\x6f\x2c\x20\x57" /* mov dword [esp+0x84], 0x57202c6f */
  /* 00C1 */ "\xc7\x84\x24\x88\x00\x00\x00\x6f\x72\x6c\x64" /* mov dword [esp+0x88], 0x646c726f */
  /* 00CC */ "\xc7\x84\x24\x8c\x00\x00\x00\x21\x00\x00\x00" /* mov dword [esp+0x8c], 0x21       */
  /* 00D7 */ "\xc7\x44\x24\x64\x50\x52\x4f\x50"             /* mov dword [esp+0x64], 0x504f5250 */
  /* 00DF */ "\x89\x4c\x24\x68"                             /* mov [esp+0x68], ecx              */
  /* 00E3 */ "\x89\x44\x24\x6c"                             /* mov [esp+0x6c], eax              */
  /* 00E7 */ "\xc7\x44\x24\x58\x70\x72\x6f\x70"             /* mov dword [esp+0x58], 0x706f7270 */
  /* 00EF */ "\x89\x4c\x24\x5c"                             /* mov [esp+0x5c], ecx              */
  /* 00F3 */ "\x89\x44\x24\x60"                             /* mov [esp+0x60], eax              */
  /* 00F7 */ "\xc7\x44\x24\x34\x53\x65\x74\x45"             /* mov dword [esp+0x34], 0x45746553 */
  /* 00FF */ "\xc7\x44\x24\x38\x76\x65\x6e\x74"             /* mov dword [esp+0x38], 0x746e6576 */
  /* 0107 */ "\x89\x5c\x24\x3c"                             /* mov [esp+0x3c], ebx              */
  /* 010B */ "\xc7\x44\x24\x28\x4f\x70\x65\x6e"             /* mov dword [esp+0x28], 0x6e65704f */
  /* 0113 */ "\xc7\x44\x24\x2c\x45\x76\x65\x6e"             /* mov dword [esp+0x2c], 0x6e657645 */
  /* 011B */ "\xc7\x44\x24\x30\x74\x41\x00\x00"             /* mov dword [esp+0x30], 0x4174     */
  /* 0123 */ "\xc7\x44\x24\x40\x43\x6c\x6f\x73"             /* mov dword [esp+0x40], 0x736f6c43 */
  /* 012B */ "\x89\x54\x24\x44"                             /* mov [esp+0x44], edx              */
  /* 012F */ "\xc7\x44\x24\x48\x64\x6c\x65\x00"             /* mov dword [esp+0x48], 0x656c64   */
  /* 0137 */ "\xc7\x84\x24\xa4\x00\x00\x00\x47\x65\x74\x44" /* mov dword [esp+0xa4], 0x44746547 */
  /* 0142 */ "\xc7\x84\x24\xa8\x00\x00\x00\x65\x73\x6b\x74" /* mov dword [esp+0xa8], 0x746b7365 */
  /* 014D */ "\xc7\x84\x24\xac\x00\x00\x00\x6f\x70\x57\x69" /* mov dword [esp+0xac], 0x6957706f */
  /* 0158 */ "\xc7\x84\x24\xb0\x00\x00\x00\x6e\x64\x6f\x77" /* mov dword [esp+0xb0], 0x776f646e */
  /* 0163 */ "\x89\x9c\x24\xb4\x00\x00\x00"                 /* mov [esp+0xb4], ebx              */
  /* 016A */ "\x0f\x85\x07\x01\x00\x00"                     /* jnz 0x277                        */
  /* 0170 */ "\x64\xa1\x30\x00\x00\x00"                     /* mov eax, [fs:0x30]               */
  /* 0176 */ "\x56"                                         /* push esi                         */
  /* 0177 */ "\x57"                                         /* push edi                         */
  /* 0178 */ "\x8b\x78\x08"                                 /* mov edi, [eax+0x8]               */
  /* 017B */ "\x8b\x47\x3c"                                 /* mov eax, [edi+0x3c]              */
  /* 017E */ "\x8b\xb4\x38\x80\x00\x00\x00"                 /* mov esi, [eax+edi+0x80]          */
  /* 0185 */ "\x03\xf7"                                     /* add esi, edi                     */
  /* 0187 */ "\x8b\x4e\x0c"                                 /* mov ecx, [esi+0xc]               */
  /* 018A */ "\x85\xc9"                                     /* test ecx, ecx                    */
  /* 018C */ "\x74\x29"                                     /* jz 0x1b7                         */
  /* 018E */ "\xba\x20\x20\x20\x20"                         /* mov edx, 0x20202020              */
  /* 0193 */ "\x8b\x04\x39"                                 /* mov eax, [ecx+edi]               */
  /* 0196 */ "\x0b\xc2"                                     /* or eax, edx                      */
  /* 0198 */ "\x3d\x6b\x65\x72\x6e"                         /* cmp eax, 0x6e72656b              */
  /* 019D */ "\x75\x0e"                                     /* jnz 0x1ad                        */
  /* 019F */ "\x8b\x44\x39\x04"                             /* mov eax, [ecx+edi+0x4]           */
  /* 01A3 */ "\x0b\xc2"                                     /* or eax, edx                      */
  /* 01A5 */ "\x3b\xc5"                                     /* cmp eax, ebp                     */
  /* 01A7 */ "\x0f\x84\xd7\x00\x00\x00"                     /* jz 0x284                         */
  /* 01AD */ "\x8b\x4e\x20"                                 /* mov ecx, [esi+0x20]              */
  /* 01B0 */ "\x83\xc6\x14"                                 /* add esi, 0x14                    */
  /* 01B3 */ "\x85\xc9"                                     /* test ecx, ecx                    */
  /* 01B5 */ "\x75\xdc"                                     /* jnz 0x193                        */
  /* 01B7 */ "\x8b\x5c\x24\x10"                             /* mov ebx, [esp+0x10]              */
  /* 01BB */ "\x8b\x74\x24\x10"                             /* mov esi, [esp+0x10]              */
  /* 01BF */ "\x85\xdb"                                     /* test ebx, ebx                    */
  /* 01C1 */ "\x0f\x84\xae\x00\x00\x00"                     /* jz 0x275                         */
  /* 01C7 */ "\x85\xf6"                                     /* test esi, esi                    */
  /* 01C9 */ "\x0f\x84\xa6\x00\x00\x00"                     /* jz 0x275                         */
  /* 01CF */ "\x8d\x44\x24\x1c"                             /* lea eax, [esp+0x1c]              */
  /* 01D3 */ "\x50"                                         /* push eax                         */
  /* 01D4 */ "\xff\xd3"                                     /* call ebx                         */
  /* 01D6 */ "\x8b\xe8"                                     /* mov ebp, eax                     */
  /* 01D8 */ "\x8d\x44\x24\x24"                             /* lea eax, [esp+0x24]              */
  /* 01DC */ "\x50"                                         /* push eax                         */
  /* 01DD */ "\xff\xd3"                                     /* call ebx                         */
  /* 01DF */ "\x8b\xf8"                                     /* mov edi, eax                     */
  /* 01E1 */ "\x85\xed"                                     /* test ebp, ebp                    */
  /* 01E3 */ "\x0f\x84\x8c\x00\x00\x00"                     /* jz 0x275                         */
  /* 01E9 */ "\x85\xff"                                     /* test edi, edi                    */
  /* 01EB */ "\x0f\x84\x84\x00\x00\x00"                     /* jz 0x275                         */
  /* 01F1 */ "\x8d\x44\x24\x30"                             /* lea eax, [esp+0x30]              */
  /* 01F5 */ "\x50"                                         /* push eax                         */
  /* 01F6 */ "\x57"                                         /* push edi                         */
  /* 01F7 */ "\xff\xd6"                                     /* call esi                         */
  /* 01F9 */ "\x89\x44\x24\x14"                             /* mov [esp+0x14], eax              */
  /* 01FD */ "\x8d\x44\x24\x3c"                             /* lea eax, [esp+0x3c]              */
  /* 0201 */ "\x50"                                         /* push eax                         */
  /* 0202 */ "\x57"                                         /* push edi                         */
  /* 0203 */ "\xff\xd6"                                     /* call esi                         */
  /* 0205 */ "\x8b\xd8"                                     /* mov ebx, eax                     */
  /* 0207 */ "\x8d\x44\x24\x48"                             /* lea eax, [esp+0x48]              */
  /* 020B */ "\x50"                                         /* push eax                         */
  /* 020C */ "\x57"                                         /* push edi                         */
  /* 020D */ "\xff\xd6"                                     /* call esi                         */
  /* 020F */ "\x8b\xf8"                                     /* mov edi, eax                     */
  /* 0211 */ "\x8d\x84\x24\xac\x00\x00\x00"                 /* lea eax, [esp+0xac]              */
  /* 0218 */ "\x50"                                         /* push eax                         */
  /* 0219 */ "\x55"                                         /* push ebp                         */
  /* 021A */ "\xff\xd6"                                     /* call esi                         */
  /* 021C */ "\x89\x44\x24\x18"                             /* mov [esp+0x18], eax              */
  /* 0220 */ "\x8d\x44\x24\x54"                             /* lea eax, [esp+0x54]              */
  /* 0224 */ "\x50"                                         /* push eax                         */
  /* 0225 */ "\x55"                                         /* push ebp                         */
  /* 0226 */ "\xff\xd6"                                     /* call esi                         */
  /* 0228 */ "\x8b\x4c\x24\x14"                             /* mov ecx, [esp+0x14]              */
  /* 022C */ "\x89\x44\x24\x10"                             /* mov [esp+0x10], eax              */
  /* 0230 */ "\x85\xc9"                                     /* test ecx, ecx                    */
  /* 0232 */ "\x74\x41"                                     /* jz 0x275                         */
  /* 0234 */ "\x85\xdb"                                     /* test ebx, ebx                    */
  /* 0236 */ "\x74\x3d"                                     /* jz 0x275                         */
  /* 0238 */ "\x85\xc0"                                     /* test eax, eax                    */
  /* 023A */ "\x74\x39"                                     /* jz 0x275                         */
  /* 023C */ "\x8b\x6c\x24\x18"                             /* mov ebp, [esp+0x18]              */
  /* 0240 */ "\x85\xed"                                     /* test ebp, ebp                    */
  /* 0242 */ "\x74\x31"                                     /* jz 0x275                         */
  /* 0244 */ "\x85\xff"                                     /* test edi, edi                    */
  /* 0246 */ "\x74\x2d"                                     /* jz 0x275                         */
  /* 0248 */ "\x8d\x44\x24\x60"                             /* lea eax, [esp+0x60]              */
  /* 024C */ "\x50"                                         /* push eax                         */
  /* 024D */ "\x6a\x01"                                     /* push 0x1                         */
  /* 024F */ "\x6a\x02"                                     /* push 0x2                         */
  /* 0251 */ "\xff\xd1"                                     /* call ecx                         */
  /* 0253 */ "\x8b\xf0"                                     /* mov esi, eax                     */
  /* 0255 */ "\x85\xf6"                                     /* test esi, esi                    */
  /* 0257 */ "\x74\x1c"                                     /* jz 0x275                         */
  /* 0259 */ "\x6a\x00"                                     /* push 0x0                         */
  /* 025B */ "\x8d\x44\x24\x70"                             /* lea eax, [esp+0x70]              */
  /* 025F */ "\x50"                                         /* push eax                         */
  /* 0260 */ "\x8d\x84\x24\x90\x00\x00\x00"                 /* lea eax, [esp+0x90]              */
  /* 0267 */ "\x50"                                         /* push eax                         */
  /* 0268 */ "\xff\xd5"                                     /* call ebp                         */
  /* 026A */ "\x50"                                         /* push eax                         */
  /* 026B */ "\xff\x54\x24\x20"                             /* call dword [esp+0x20]            */
  /* 026F */ "\x56"                                         /* push esi                         */
  /* 0270 */ "\xff\xd3"                                     /* call ebx                         */
  /* 0272 */ "\x56"                                         /* push esi                         */
  /* 0273 */ "\xff\xd7"                                     /* call edi                         */
  /* 0275 */ "\x5f"                                         /* pop edi                          */
  /* 0276 */ "\x5e"                                         /* pop esi                          */
  /* 0277 */ "\x5d"                                         /* pop ebp                          */
  /* 0278 */ "\x33\xc0"                                     /* xor eax, eax                     */
  /* 027A */ "\x5b"                                         /* pop ebx                          */
  /* 027B */ "\x81\xc4\xb0\x00\x00\x00"                     /* add esp, 0xb0                    */
  /* 0281 */ "\xc2\x18\x00"                                 /* ret 0x18                         */
  /* 0284 */ "\x8d\x84\x24\x98\x00\x00\x00"                 /* lea eax, [esp+0x98]              */
  /* 028B */ "\x50"                                         /* push eax                         */
  /* 028C */ "\x57"                                         /* push edi                         */
  /* 028D */ "\x56"                                         /* push esi                         */
  /* 028E */ "\xe8\x1b\x00\x00\x00"                         /* call 0x2ae                       */
  /* 0293 */ "\x8b\xd8"                                     /* mov ebx, eax                     */
  /* 0295 */ "\x8d\x84\x24\x84\x00\x00\x00"                 /* lea eax, [esp+0x84]              */
  /* 029C */ "\x50"                                         /* push eax                         */
  /* 029D */ "\x57"                                         /* push edi                         */
  /* 029E */ "\x56"                                         /* push esi                         */
  /* 029F */ "\xe8\x0a\x00\x00\x00"                         /* call 0x2ae                       */
  /* 02A4 */ "\x83\xc4\x18"                                 /* add esp, 0x18                    */
  /* 02A7 */ "\x8b\xf0"                                     /* mov esi, eax                     */
  /* 02A9 */ "\xe9\x11\xff\xff\xff"                         /* jmp 0x1bf                        */
  /* 02AE */ "\x8b\x4c\x24\x04"                             /* mov ecx, [esp+0x4]               */
  /* 02B2 */ "\x53"                                         /* push ebx                         */
  /* 02B3 */ "\x55"                                         /* push ebp                         */
  /* 02B4 */ "\x8b\x6c\x24\x10"                             /* mov ebp, [esp+0x10]              */
  /* 02B8 */ "\x8b\x19"                                     /* mov ebx, [ecx]                   */
  /* 02BA */ "\x03\xdd"                                     /* add ebx, ebp                     */
  /* 02BC */ "\x56"                                         /* push esi                         */
  /* 02BD */ "\x8b\x71\x10"                                 /* mov esi, [ecx+0x10]              */
  /* 02C0 */ "\x57"                                         /* push edi                         */
  /* 02C1 */ "\x8b\x03"                                     /* mov eax, [ebx]                   */
  /* 02C3 */ "\x33\xff"                                     /* xor edi, edi                     */
  /* 02C5 */ "\x03\xf5"                                     /* add esi, ebp                     */
  /* 02C7 */ "\x85\xc0"                                     /* test eax, eax                    */
  /* 02C9 */ "\x74\x29"                                     /* jz 0x2f4                         */
  /* 02CB */ "\x2b\xde"                                     /* sub ebx, esi                     */
  /* 02CD */ "\x85\xc0"                                     /* test eax, eax                    */
  /* 02CF */ "\x78\x15"                                     /* js 0x2e6                         */
  /* 02D1 */ "\x83\xc0\x02"                                 /* add eax, 0x2                     */
  /* 02D4 */ "\x03\xc5"                                     /* add eax, ebp                     */
  /* 02D6 */ "\x50"                                         /* push eax                         */
  /* 02D7 */ "\xff\x74\x24\x20"                             /* push dword [esp+0x20]            */
  /* 02DB */ "\xe8\x1b\x00\x00\x00"                         /* call 0x2fb                       */
  /* 02E0 */ "\x59"                                         /* pop ecx                          */
  /* 02E1 */ "\x59"                                         /* pop ecx                          */
  /* 02E2 */ "\x85\xc0"                                     /* test eax, eax                    */
  /* 02E4 */ "\x74\x0c"                                     /* jz 0x2f2                         */
  /* 02E6 */ "\x83\xc6\x04"                                 /* add esi, 0x4                     */
  /* 02E9 */ "\x8b\x04\x33"                                 /* mov eax, [ebx+esi]               */
  /* 02EC */ "\x85\xc0"                                     /* test eax, eax                    */
  /* 02EE */ "\x75\xdf"                                     /* jnz 0x2cf                        */
  /* 02F0 */ "\xeb\x02"                                     /* jmp 0x2f4                        */
  /* 02F2 */ "\x8b\x3e"                                     /* mov edi, [esi]                   */
  /* 02F4 */ "\x8b\xc7"                                     /* mov eax, edi                     */
  /* 02F6 */ "\x5f"                                         /* pop edi                          */
  /* 02F7 */ "\x5e"                                         /* pop esi                          */
  /* 02F8 */ "\x5d"                                         /* pop ebp                          */
  /* 02F9 */ "\x5b"                                         /* pop ebx                          */
  /* 02FA */ "\xc3"                                         /* ret                              */
  /* 02FB */ "\x8b\x44\x24\x08"                             /* mov eax, [esp+0x8]               */
  /* 02FF */ "\x56"                                         /* push esi                         */
  /* 0300 */ "\x8b\x74\x24\x08"                             /* mov esi, [esp+0x8]               */
  /* 0304 */ "\x8a\x16"                                     /* mov dl, [esi]                    */
  /* 0306 */ "\x84\xd2"                                     /* test dl, dl                      */
  /* 0308 */ "\x74\x14"                                     /* jz 0x31e                         */
  /* 030A */ "\x8a\xca"                                     /* mov cl, dl                       */
  /* 030C */ "\x2b\xf0"                                     /* sub esi, eax                     */
  /* 030E */ "\x8a\xd1"                                     /* mov dl, cl                       */
  /* 0310 */ "\x3a\x08"                                     /* cmp cl, [eax]                    */
  /* 0312 */ "\x75\x0a"                                     /* jnz 0x31e                        */
  /* 0314 */ "\x40"                                         /* inc eax                          */
  /* 0315 */ "\x8a\x0c\x06"                                 /* mov cl, [esi+eax]                */
  /* 0318 */ "\x8a\xd1"                                     /* mov dl, cl                       */
  /* 031A */ "\x84\xc9"                                     /* test cl, cl                      */
  /* 031C */ "\x75\xf0"                                     /* jnz 0x30e                        */
  /* 031E */ "\x0f\xb6\x08"                                 /* movzx ecx, byte [eax]            */
  /* 0321 */ "\x0f\xb6\xc2"                                 /* movzx eax, dl                    */
  /* 0324 */ "\x2b\xc1"                                     /* sub eax, ecx                     */
  /* 0326 */ "\x5e"                                         /* pop esi                          */
  /* 0327 */ "\xc3"                                         /* ret                              */
};