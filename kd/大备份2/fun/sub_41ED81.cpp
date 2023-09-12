#include "sub.h" 
_WORD* sub_41ED81(_WORD* thisx, int a2)
{
    _WORD* result; // eax

    result = thisx;
    if (a2 + (unsigned __int16)thisx[256] > 0)
    {
        result = thisx;
        if (a2 + (unsigned __int16)thisx[256] <= 0xFFFF)
        {
            result = thisx;
            thisx[256] += a2;
        }
        else
        {
            thisx[256] = -1;
        }
    }
    else
    {
        thisx[256] = 1;
    }
    return result;
}

