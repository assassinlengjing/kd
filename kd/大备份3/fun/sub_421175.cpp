#include "sub.h" 
_DWORD* sub_421175(_DWORD* thisx, int a2, int a3, int a4)
{
    _DWORD* result; // eax

    *thisx = a2;
    thisx[33] = a3;
    thisx[32] = a4;
    result = thisx;
    thisx[18] = 0;
    return result;
}

