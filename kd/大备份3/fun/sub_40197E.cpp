#include "sub.h" 
int sub_40197E(_BYTE* thisx, HANDLE hFile, int a3, int a4)
{
    int Buffer; // [esp+4h] [ebp-8h] BYREF
    DWORD NumberOfBytesRead; // [esp+8h] [ebp-4h] BYREF

    sub_401B16((int)thisx);
    if (!a4)
    {
        ReadFile(hFile, thisx + 4, 1u, (LPDWORD)&NumberOfBytesRead, 0);
        ReadFile(hFile, thisx + 5, 1u, (LPDWORD)&NumberOfBytesRead, 0);
        ReadFile(hFile, thisx + 6, 1u, (LPDWORD)&NumberOfBytesRead, 0);
        ReadFile(hFile, &Buffer, 1u, (LPDWORD)&NumberOfBytesRead, 0);
        thisx[8] = (Buffer & 1) != 0;
        thisx[9] = (Buffer & 2) != 0;
        ReadFile(hFile, thisx + 7, 1u, (LPDWORD)&NumberOfBytesRead, 0);
        if (a3 == 2)
        {
            ReadFile(hFile, thisx + 10, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, thisx + 11, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, thisx + 13, 1u, (LPDWORD)&NumberOfBytesRead, 0);
            ReadFile(hFile, thisx + 15, 1u, (LPDWORD)&NumberOfBytesRead, 0);
        }
    }
    if (!sub_401ED9(thisx + 144 ,hFile, a3))
        return 0;
    ReadFile(hFile, thisx + 16, 0x10u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, thisx + 80, 0x10u, (LPDWORD)&NumberOfBytesRead, 0);
    return 1;
}

