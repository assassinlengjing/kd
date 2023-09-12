#include "sub.h" 
_BYTE* sub_47EBF0(_BYTE* thisx, char a2)
{
    _BYTE* result; // eax

    result = thisx;
    thisx[31] = a2;
    return result;
}
