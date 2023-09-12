#include "sub.h" 
int sub_482993(_DWORD* thisx, HANDLE hFile)
{
    DWORD NumberOfBytesWritten; // [esp+4h] [ebp-8h] BYREF
    int v5; // [esp+8h] [ebp-4h]

    WriteFile(hFile, thisx + 5, 2u, (LPDWORD)&NumberOfBytesWritten, 0);
    if (NumberOfBytesWritten != 2)
        return 0;
    LOWORD(v5) = 0;
    while ((unsigned __int16)v5 < (int)*((unsigned __int16*)thisx + 10))
    {
        if (!sub_481285(56 * (unsigned __int16)v5 + thisx[4], hFile))
            return 0;
        LOWORD(v5) = v5 + 1;
    }
    return 1;
}
