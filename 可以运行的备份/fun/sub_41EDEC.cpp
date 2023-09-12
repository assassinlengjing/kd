#include "sub.h" 
_WORD* sub_41EDEC(_WORD* thisx, int a2)
{
    _WORD* result; // eax

    result = thisx;
    if (a2 + (unsigned __int16)thisx[257] > 0)
    {
        result = thisx;
        if (a2 + (unsigned __int16)thisx[257] <= 0xFFFF)
        {
            result = thisx;
            thisx[257] += a2;
        }
        else
        {
            thisx[257] = -1;
        }
    }
    else
    {
        thisx[257] = 1;
    }
    return result;
}

