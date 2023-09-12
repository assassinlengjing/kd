#include "sub.h" 
_WORD* sub_420E88(_WORD* thisx, int a2)
{
    _WORD* result; // eax

    result = thisx;
    if (a2 + (unsigned __int16)thisx[259] > 0)
    {
        result = thisx;
        if (a2 + (unsigned __int16)thisx[259] <= 0xFFFF)
        {
            result = thisx;
            thisx[259] += a2;
        }
        else
        {
            thisx[259] = -1;
        }
    }
    else
    {
        thisx[259] = 1;
    }
    return result;
}

