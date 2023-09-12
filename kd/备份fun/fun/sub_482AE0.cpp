#include "sub.h" 
_BYTE* sub_482AE0(_BYTE* thisx, unsigned __int8 a2)
{
    _BYTE* result; // eax

    thisx[15] &= 0xF9u;
    result = thisx;
    thisx[15] |= 2 * (a2 % 3);
    return result;
}
