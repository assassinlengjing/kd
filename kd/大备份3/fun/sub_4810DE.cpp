#include "sub.h" 
BOOL sub_4810DE(int thisx, HANDLE hFile, int a3)
{
    DWORD NumberOfBytesRead; // [esp+4h] [ebp-4h] BYREF

    ReadFile(hFile, (LPVOID)(thisx + 10), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    if (NumberOfBytesRead != 1)
        return 0;
    ReadFile(hFile, (LPVOID)(thisx + 6), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    if (NumberOfBytesRead != 1)
        return 0;
    ReadFile(hFile, (LPVOID)(thisx + 8), 2u, (LPDWORD)&NumberOfBytesRead, 0);
    if (NumberOfBytesRead != 2)
        return 0;
    ReadFile(hFile, (LPVOID)thisx, 2u, (LPDWORD)&NumberOfBytesRead, 0);
    if (NumberOfBytesRead != 2)
        return 0;
    ReadFile(hFile, (LPVOID)(thisx + 2), 2u, (LPDWORD)&NumberOfBytesRead, 0);
    if (NumberOfBytesRead != 2)
        return 0;
    ReadFile(hFile, (LPVOID)(thisx + 4), 2u, (LPDWORD)&NumberOfBytesRead, 0);
    if (NumberOfBytesRead != 2)
        return 0;
    ReadFile(hFile, (LPVOID)(thisx + 52), 1u, (LPDWORD)&NumberOfBytesRead, 0);
    if (NumberOfBytesRead != 1)
        return 0;
    ReadFile(hFile, (LPVOID)(thisx + 44), 4u, (LPDWORD)&NumberOfBytesRead, 0);
    if (NumberOfBytesRead != 4)
        return 0;
    ReadFile(hFile, (LPVOID)(thisx + 48), 4u, (LPDWORD)&NumberOfBytesRead, 0);
    if (NumberOfBytesRead != 4)
        return 0;
    ReadFile(hFile, (LPVOID)(thisx + 11), 6u, (LPDWORD)&NumberOfBytesRead, 0);
    if (NumberOfBytesRead != 6)
        return 0;
    ReadFile(hFile, (LPVOID)(thisx + 20), 0x18u, (LPDWORD)&NumberOfBytesRead, 0);
    return NumberOfBytesRead == 24;
}

