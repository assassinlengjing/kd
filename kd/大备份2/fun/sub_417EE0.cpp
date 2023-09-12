#include "sub.h" 
int  sub_417EE0(int thisx)
{
    int result; // eax

    *(_DWORD*)(thisx + 304) = 0;
    if (*(_DWORD*)(thisx + 432) == 52 || *(_DWORD*)(thisx + 432) == 53)
        *(_DWORD*)(thisx + 432) = 4;
    sub_423CF2((_BYTE*)thisx, 0, 0, 0, 0, 0, 0);
    *(_DWORD*)(thisx + 372) = 0;
    *(_DWORD*)(thisx + 376) = 0;
    *(_DWORD*)(thisx + 340) = 0;
    *(_DWORD*)(thisx + 344) = 0;
    *(_DWORD*)(thisx + 352) = 0;
    result = thisx;
    *(_DWORD*)(thisx + 356) = 0;
    if (*(_DWORD*)(thisx + 392))
    {
        *(_DWORD*)(thisx + 348) = 0;
        result = thisx;
        *(_DWORD*)(thisx + 360) = 30;
    }
    else
    {
        *(_DWORD*)(thisx + 348) = 0;
        *(_DWORD*)(thisx + 360) = 0;
    }
    return result;
}