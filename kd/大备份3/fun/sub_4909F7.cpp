#include "sub.h" 
int sub_4909F7(unsigned __int8* thisx, HANDLE hFile, int a3)
{
    DWORD NumberOfBytesRead; // [esp+4h] [ebp-4h] BYREF

    if (!sub_401ED9((char*)thisx + 132, hFile, a3))
        return 0;
    ReadFile(hFile, thisx + 4, 0x10u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, thisx + 68, 0x10u, (LPDWORD)&NumberOfBytesRead, 0);
    return 1;
}

