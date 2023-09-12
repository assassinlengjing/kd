#include "sub.h" 
_WORD* sub_41ED16(_WORD* thisx, int a2)
{
    _WORD* result; // eax

    result = thisx;
    if (a2 + (unsigned __int16)thisx[253] > 0)
    {
        result = thisx;
        if (a2 + (unsigned __int16)thisx[253] <= 0xFFFF)
        {
            result = thisx;
            thisx[253] += a2;
        }
        else
        {
            thisx[253] = -1;
        }
    }
    else
    {
        thisx[253] = 1;
    }
    return result;
}

