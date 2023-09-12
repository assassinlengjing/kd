#include "sub.h" 
int sub_48F6C5(LPVOID* thisx, HANDLE hFile)
{
    DWORD NumberOfBytesRead; // [esp+8h] [ebp-4h] BYREF

    sub_48F682((int)thisx);
    if (!ReadFile(hFile, thisx + 1, 1u, (LPDWORD)&NumberOfBytesRead, 0))
        return 0;
    if (!ReadFile(hFile, (char*)thisx + 6, 1u, (LPDWORD)&NumberOfBytesRead, 0))
        return 0;
    if (!ReadFile(hFile, (char*)thisx + 5, 1u, (LPDWORD)&NumberOfBytesRead, 0))
        return 0;
    thisx[2] = operator new(2 * *((unsigned __int8*)thisx + 5) * *((unsigned __int8*)thisx + 6));
    if (!thisx[2])
        return 0;
    if (ReadFile(
        hFile,
        thisx[2],
        *((unsigned __int8*)thisx + 5) * 2 * *((unsigned __int8*)thisx + 6),
        (LPDWORD)&NumberOfBytesRead,
        0))
    {
        return 1;
    }
    sub_48F682((int)thisx);
    return 0;
}
