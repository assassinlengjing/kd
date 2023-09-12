#include "sub.h" 
_DWORD* sub_440C04(_DWORD* thisx, int a2)
{
    _DWORD* result; // eax

    result = thisx;
    thisx[46] = a2;
    return result;
}

