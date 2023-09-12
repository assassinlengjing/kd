#include "sub.h" 
_DWORD* sub_4532B9(_DWORD* thisx)
{
    _DWORD* result; // eax

    ++thisx[2273];
    result = thisx;
    if ((int)thisx[2273] >= 32)
        thisx[2273] = 0;
    return result;
}

