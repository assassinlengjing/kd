#include "sub.h" 
_WORD* sub_48A000(_WORD* thisx, __int16 a2)
{
    _WORD* result; // eax

    result = thisx;
    thisx[6] = a2;
    return result;
}
