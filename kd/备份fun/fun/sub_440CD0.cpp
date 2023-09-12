#include "sub.h" 
int sub_440CD0(int thisx)
{
    int result; // eax
    int v3; // [esp+4h] [ebp-4h]

    ++* (_DWORD*)(thisx + 304);
    if (*(int*)(thisx + 300) <= 0)
        *(_DWORD*)(thisx + 300) = 1;
    v3 = 100 * *(_DWORD*)(thisx + 304) / *(_DWORD*)(thisx + 300);
    if (*(_BYTE*)(thisx + 296) == 1)
        v3 = 100 - v3;
    sub_440C1D((_DWORD**)thisx, v3);
    result = thisx;
    if (*(_DWORD*)(thisx + 304) >= *(_DWORD*)(thisx + 300))
    {
        result = thisx;
        *(_BYTE*)(thisx + 296) = 0;
    }
    return result;
}

