#include "sub.h" 
_BYTE* sub_47EAD0(_BYTE* thisx, char a2)
{
    _BYTE* result; // eax

    result = thisx;
    thisx[20] = a2;
    return result;
}
