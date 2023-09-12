#include "sub.h" 
int  sub_417FC1(int thisx)
{
    int result; // eax

    *(_DWORD*)(thisx + 304) = 0;
    *(_DWORD*)(thisx + 340) = 0;
    *(_DWORD*)(thisx + 344) = 0;
    *(_DWORD*)(thisx + 348) = 0;
    *(_DWORD*)(thisx + 352) = 0;
    *(_DWORD*)(thisx + 356) = 0;
    *(_DWORD*)(thisx + 360) = 0;
    *(_DWORD*)(thisx + 372) = 0;
    *(_DWORD*)(thisx + 376) = 0;
    sub_423CF2((_BYTE*)thisx, 0, 0, 0, 0, 0, 0);
    result = thisx;
    if (*(_DWORD*)(thisx + 432) == 54 || *(_DWORD*)(thisx + 432) == 55)
        *(_DWORD*)(thisx + 432) = 75;
    return result;
}

