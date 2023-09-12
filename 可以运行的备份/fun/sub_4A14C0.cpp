#include "sub.h" 
int sub_4A14C0(_WORD* thisx, LPCSTR lpFileName)
{
    int v4; // [esp+Ch] [ebp-10h]
    HANDLE hFile; // [esp+10h] [ebp-Ch]
    int v6; // [esp+14h] [ebp-8h]
    DWORD NumberOfBytesRead; // [esp+18h] [ebp-4h] BYREF

    hFile = CreateFileA(lpFileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hFile == (HANDLE)-1)
        return 0;
    ReadFile(hFile, thisx, 0xEu, (LPDWORD)&NumberOfBytesRead, 0);
    if (NumberOfBytesRead != 14 || *thisx != 19778)
        return 0;
    ReadFile(hFile, thisx + 8, 0x28u, (LPDWORD)&NumberOfBytesRead, 0);
    if (NumberOfBytesRead != 40)
        return 0;
    if (thisx[15] != 8)
        return 0;
    if (*((_DWORD*)thisx + 8))
        return 0;
    v6 = *((_DWORD*)thisx + 12);
    if (!v6)
    {
        *((_DWORD*)thisx + 12) = 256;
        v6 = 256;
    }
    *((_DWORD*)thisx + 14) = (*((_DWORD*)thisx + 5) + 3) & 0xFFFFFFFC;
    if (!*((_DWORD*)thisx + 9))
    {
        v4 = *((_DWORD*)thisx + 6);
        if (v4 < 0)
            v4 = -v4;
        *((_DWORD*)thisx + 9) = v4 * *((_DWORD*)thisx + 14);
    }
    memset(thisx + 32, 0, 0x400u);
    ReadFile(hFile, thisx + 32, 4 * v6, (LPDWORD)&NumberOfBytesRead, 0);
    if (*((_DWORD*)thisx + 15))
        operator delete(*((void**)thisx + 15));
    *((_DWORD*)thisx + 15) = (_DWORD)operator new(*((_DWORD*)thisx + 9));
    SetFilePointer(hFile, *(_DWORD*)(thisx + 5), 0, 0);
    ReadFile(hFile, *((LPVOID*)thisx + 15), *((_DWORD*)thisx + 9), (LPDWORD)&NumberOfBytesRead, 0);
    *((_BYTE*)thisx + 1344) = 0;
    CloseHandle(hFile);
    return 1;
}
