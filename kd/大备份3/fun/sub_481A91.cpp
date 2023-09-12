#include "sub.h" 
int sub_481A91(int thisx, HANDLE hFile)
{
    DWORD NumberOfBytesWritten; // [esp+4h] [ebp-4h] BYREF

    WriteFile(hFile, (LPCVOID)(thisx + 4), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 8), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 9), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 10), 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 12), 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 14), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 15), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 16), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 17), 1u, (LPDWORD)&NumberOfBytesWritten, 0);
    WriteFile(hFile, (LPCVOID)(thisx + 6), 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    return 1;
}
