#include "sub.h" 
int sub_47C427()
{
    int j; // [esp+0h] [ebp-554h]
    DWORD NumberOfBytesRead; // [esp+4h] [ebp-550h] BYREF
    HANDLE hFile; // [esp+8h] [ebp-54Ch]
    _DWORD Buffer[256]; // [esp+Ch] [ebp-548h] BYREF
    int i; // [esp+40Ch] [ebp-148h]
    int v6; // [esp+410h] [ebp-144h]
    int v7[15]; // [esp+414h] [ebp-140h] BYREF
    CHAR FileName[260]; // [esp+450h] [ebp-104h] BYREF

    v6 = 1;
    sub_49DB90(v7);
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = -1;
    v7[4] = -1;
    v7[5] = 1;
    v7[9] = 0;
    v7[0] = -1;
    v7[14] = (int)&unk_4B9290;
    if (!sub_49DA45((_DWORD*)byte_4BDC60, aGraphicCharsel_0, (int)v7))
        return 0;
    v6 = 0;
    dword_4B9234 = v7[0];
    for (i = 0; i < 8; ++i)
    {
        wsprintfA(FileName, "Graphic\\%02dpPalette.bin", i + 1);
        hFile = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
        if (hFile != (HANDLE)-1)
        {
            for (j = 0; j < 256; ++j)
                ReadFile(hFile, &Buffer[j], 3u, (LPDWORD)&NumberOfBytesRead, 0);
            CloseHandle(hFile);
        }
        sub_4A0AE7((void*)(8 * i + 4952656), (int)Buffer, 256);
        sub_4A0AE7((void*)(8 * i + 4952720), (int)Buffer, 256);
    }
    return 1;
}
