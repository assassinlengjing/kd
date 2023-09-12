#include "sub.h" 
int __cdecl sub_47846F(LPCSTR lpFileName, int a2)
{
    HANDLE hFile; // [esp+0h] [ebp-Ch]
    int i; // [esp+4h] [ebp-8h]
    DWORD NumberOfBytesRead; // [esp+8h] [ebp-4h] BYREF

    hFile = CreateFileA(lpFileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hFile == (HANDLE)-1)
        return 0;
    for (i = 0; i < 256; ++i)
        ReadFile(hFile, (LPVOID)(a2 + 4 * i), 3u, (LPDWORD)&NumberOfBytesRead, 0);
    CloseHandle(hFile);
    return 1;
}
