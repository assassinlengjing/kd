#include "sub.h" 
int __cdecl sub_476E46(int a1, void* a2)
{
    int i; // [esp+0h] [ebp-50Ch]
    DWORD NumberOfBytesRead; // [esp+4h] [ebp-508h] BYREF
    _DWORD Buffer[256]; // [esp+8h] [ebp-504h] BYREF
    HANDLE hFile; // [esp+408h] [ebp-104h]
    CHAR FileName[256]; // [esp+40Ch] [ebp-100h] BYREF

    wsprintfA(FileName, "Graphic\\%02dpPalette.bin", a1 + 1);
    hFile = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hFile != (HANDLE)-1)
    {
        for (i = 0; i < 256; ++i)
            ReadFile(hFile, &Buffer[i], 3u, (LPDWORD)&NumberOfBytesRead, 0);
        CloseHandle(hFile);
    }
    return sub_4A0AE7(a2, (int)Buffer, 256);
}