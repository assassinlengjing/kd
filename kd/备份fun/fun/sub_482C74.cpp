#include "sub.h" 
int sub_482C74(int thisx, LPCSTR lpFileName)
{
    HANDLE hFile; // [esp+8h] [ebp-8h]
    DWORD NumberOfBytesRead; // [esp+Ch] [ebp-4h] BYREF

    hFile = CreateFileA(lpFileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hFile == (HANDLE)-1)
        return 0;
    *(_DWORD*)(thisx + 4) = GetFileSize(hFile, 0);
    sub_482C42((void**)thisx);
    *(_DWORD*)thisx = (_DWORD)operator new(*(_DWORD*)(thisx + 4));
    ReadFile(hFile, *(LPVOID*)thisx, *(_DWORD*)(thisx + 4), (LPDWORD)&NumberOfBytesRead, 0);
    if (NumberOfBytesRead == *(_DWORD*)(thisx + 4))
    {
        CloseHandle(hFile);
        *(_DWORD*)(thisx + 8) = 0;
        *(_DWORD*)(thisx + 12) = 0;
        dword_4CA1D0 = 0;
        return 1;
    }
    else
    {
        sub_482C42((void**)thisx);
        return 0;
    }
}
