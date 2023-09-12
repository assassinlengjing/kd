#include "sub.h" 
_WORD* sub_420E1D(_WORD* thisx, int a2)
{
    _WORD* result; // eax

    result = thisx;
    if (a2 + (unsigned __int16)thisx[258] > 0)
    {
        result = thisx;
        if (a2 + (unsigned __int16)thisx[258] <= 0xFFFF)
        {
            result = thisx;
            thisx[258] += a2;
        }
        else
        {
            thisx[258] = -1;
        }
    }
    else
    {
        thisx[258] = 1;
    }
    return result;
}

