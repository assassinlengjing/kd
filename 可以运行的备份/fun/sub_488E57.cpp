#include "sub.h" 
_BYTE* sub_488E57(_BYTE* thisx)
{
    _BYTE* result; // eax

    result = thisx;
    *thisx = 0;
    thisx[1] = 0;
    thisx[2] = 0;
    return result;
}
