#include "sub.h" 
_BYTE* sub_4822B3(_BYTE* thisx, int a2)
{
    _BYTE* result; // eax
    char v3; // cl

    result = thisx;
    if (a2)
        v3 = thisx[15] | 1;
    else
        v3 = thisx[15] & 0xFE;
    thisx[15] = v3;
    return result;
}

