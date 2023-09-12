#include "sub.h" 
_BYTE* sub_489F80(_BYTE* thisx, char a2)
{
    _BYTE* result; // eax

    result = thisx;
    thisx[4] = a2;
    return result;
}
