#include "sub.h" 
_WORD* sub_41ECAB(_WORD* thisx, int a2)
{
    _WORD* result; // eax

    result = thisx;
    if (a2 + (unsigned __int16)thisx[252] > 0)
    {
        result = thisx;
        if (a2 + (unsigned __int16)thisx[252] <= 0xFFFF)
        {
            result = thisx;
            thisx[252] += a2;
        }
        else
        {
            thisx[252] = -1;
        }
    }
    else
    {
        thisx[252] = 1;
    }
    return result;
}

