#include "sub.h" 
_WORD* sub_420D47(_WORD* thisx, int a2)
{
    _WORD* result; // eax

    result = thisx;
    if (a2 + (unsigned __int16)thisx[254] > 0)
    {
        result = thisx;
        if (a2 + (unsigned __int16)thisx[254] <= 0xFFFF)
        {
            result = thisx;
            thisx[254] += a2;
        }
        else
        {
            thisx[254] = -1;
        }
    }
    else
    {
        thisx[254] = 1;
    }
    return result;
}

