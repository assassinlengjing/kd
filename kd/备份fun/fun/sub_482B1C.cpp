#include "sub.h" 
_BYTE* sub_482B1C(_BYTE* thisx, int a2)
{
    _BYTE* result; // eax

    result = thisx;
    thisx[15] &= ~8u;
    if (a2)
    {
        result = thisx;
        thisx[15] |= 8u;
    }
    return result;
}
