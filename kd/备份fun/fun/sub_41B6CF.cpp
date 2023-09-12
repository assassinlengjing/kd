#include "sub.h" 
_DWORD* sub_41B6CF(_DWORD* thisx, int a2, int a3)
{
    _DWORD* result; // eax

    result = thisx;
    thisx[70] = 0;
    thisx[71] = a3;
    return result;
}

