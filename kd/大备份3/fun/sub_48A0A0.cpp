#include "sub.h" 
_DWORD* sub_48A0A0(_DWORD* thisx, int a2)
{
    _DWORD* result; // eax

    result = thisx;
    thisx[24] = a2;
    return result;
}

