#include "sub.h" 
int sub_4A1ACA(int thisx, LPCSTR lpFileName)
{
    HANDLE hFile; // [esp+Ch] [ebp-108h]
    DWORD NumberOfBytesRead; // [esp+10h] [ebp-104h] BYREF
    CHAR Buffer[256]; // [esp+14h] [ebp-100h] BYREF

    hFile = CreateFileA(lpFileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hFile == (HANDLE)-1)
        return 0;
    ReadFile(hFile, Buffer, 0x10u, (LPDWORD)&NumberOfBytesRead, 0);
    if (lstrcmpiA(Buffer, (LPCSTR)aImagefile))// if (lstrcmpiA(Buffer, aImagefile))
    {
        CloseHandle(hFile);
        return 0;
    }
    else
    {
        if (*(_DWORD*)(thisx + 60))
            operator delete(*(void**)(thisx + 60));
        *(_DWORD*)(thisx + 1352) = GetFileSize(hFile, 0) - 16;
        *(_DWORD*)(thisx + 60) = (int)operator new(*(_DWORD*)(thisx + 1352));//¸Ä*(_DWORD*)(thisx + 60) = operator new(*(_DWORD*)(thisx + 1352));
        ReadFile(hFile, *(LPVOID*)(thisx + 60), *(_DWORD*)(thisx + 1352), (LPDWORD)&NumberOfBytesRead, 0);
        *(_BYTE*)(thisx + 1344) = 1;
        *(_DWORD*)(thisx + 1348) = 0;
        CloseHandle(hFile);
        return 1;
    }
}
