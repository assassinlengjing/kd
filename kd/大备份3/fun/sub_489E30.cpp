#include "sub.h" 
_BYTE* sub_489E30(_BYTE* thisx, char a2)
{
    _BYTE* result; // eax

    result = thisx;
    thisx[28] = a2;
    return result;
}
