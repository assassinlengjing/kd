#include "sub.h" 
_BYTE* sub_441100(_BYTE* thisx, char a2)
{
    _BYTE* result; // eax

    result = thisx;
    thisx[5] = a2;
    return result;
}

