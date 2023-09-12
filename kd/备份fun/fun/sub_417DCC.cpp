#include "sub.h" 
_BYTE* sub_417DCC(int thisx)
{
    if (*(_DWORD*)(thisx + 432) == 57 || *(_DWORD*)(thisx + 432) == 58)
        *(_DWORD*)(thisx + 432) = 4;
    *(_DWORD*)(thisx + 304) = 0;
    return sub_423CF2((_BYTE*)thisx, 0, 0, 0, 0, 0, 0);
}

