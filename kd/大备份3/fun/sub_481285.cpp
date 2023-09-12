#include "sub.h" 
BOOL sub_481285(int thisx, HANDLE hFile)
{
    DWORD NumberOfBytesWritten; // [esp+4h] [ebp-4h] BYREF

    WriteFile(hFile, (LPCVOID)(thisx + 10), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    if (NumberOfBytesWritten != 1)
        return 0;
    WriteFile(hFile, (LPCVOID)(thisx + 6), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    if (NumberOfBytesWritten != 1)
        return 0;
    WriteFile(hFile, (LPCVOID)(thisx + 8), 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    if (NumberOfBytesWritten != 2)
        return 0;
    WriteFile(hFile, (LPCVOID)thisx, 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    if (NumberOfBytesWritten != 2)
        return 0;
    WriteFile(hFile, (LPCVOID)(thisx + 2), 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    if (NumberOfBytesWritten != 2)
        return 0;
    WriteFile(hFile, (LPCVOID)(thisx + 4), 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    if (NumberOfBytesWritten != 2)
        return 0;
    WriteFile(hFile, (LPCVOID)(thisx + 52), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    if (NumberOfBytesWritten != 1)
        return 0;
    WriteFile(hFile, (LPCVOID)(thisx + 44), 4u, (LPDWORD)&NumberOfBytesWritten, 0);
    if (NumberOfBytesWritten != 4)
        return 0;
    WriteFile(hFile, (LPCVOID)(thisx + 48), 4u, (LPDWORD)&NumberOfBytesWritten, 0);
    if (NumberOfBytesWritten != 4)
        return 0;
    WriteFile(hFile, (LPCVOID)(thisx + 11), 6u, (LPDWORD)&NumberOfBytesWritten, 0);
    if (NumberOfBytesWritten != 6)
        return 0;
    WriteFile(hFile, (LPCVOID)(thisx + 20), 0x18u, (LPDWORD)&NumberOfBytesWritten, 0);
    return NumberOfBytesWritten == 24;
}

