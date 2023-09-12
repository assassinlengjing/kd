#include "sub.h" 
_BYTE* sub_48A020(_BYTE* thisx, char a2)
{
    _BYTE* result; // eax

    result = thisx;
    thisx[14] = a2;
    return result;
}

