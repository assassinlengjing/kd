#include "sub.h" 
int __cdecl sub_47C25B(unsigned __int8 a1)
{
    int j; // [esp+0h] [ebp-554h]
    DWORD NumberOfBytesRead; // [esp+4h] [ebp-550h] BYREF
    HANDLE hFile; // [esp+8h] [ebp-54Ch]
    int v5[15]; // [esp+Ch] [ebp-548h] BYREF
    _DWORD Buffer[256]; // [esp+48h] [ebp-50Ch] BYREF
    int i; // [esp+448h] [ebp-10Ch]
    int v8; // [esp+44Ch] [ebp-108h]
    CHAR FileName[260]; // [esp+450h] [ebp-104h] BYREF

    v8 = 1;
    for (i = 0; i < (int)dword_4B93A0; ++i)
    {
        if (unknown_libname_17((_DWORD*)dword_4B93A4 + 6 * i))
        {
            sub_49DB90(v5);
            v5[1] = 0;
            v5[2] = 0;
            v5[3] = -1;
            v5[4] = -1;
            v5[5] = 1;
            v5[9] = 0;
            v5[0] = -1;
            wsprintfA(FileName, "Graphic\\%02dpPalette.bin", a1 + 1);
            hFile = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
            if (hFile != (HANDLE)-1)
            {
                for (j = 0; j < 256; ++j)
                    ReadFile(hFile, &Buffer[j], 3u, (LPDWORD)&NumberOfBytesRead, 0);
                v5[11] = (int)Buffer;
                CloseHandle(hFile);
            }
            sub_485DFD((int)dword_4B93A4 + 24 * i, (int)Buffer);
            if (!sub_49DA45((_DWORD*)byte_4BDC60, aGraphicCharsel, (int)v5))
                return 0;
            if (v8)
            {
                v8 = 0;
                dword_4B9234 = v5[0];
            }
        }
    }
    return 1;
}
