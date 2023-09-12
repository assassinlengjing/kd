#include "sub.h" 
_WORD* sub_41EC40(_WORD* thisx, int a2)
{
    _WORD* result; // eax

    result = thisx;
    if (a2 + (unsigned __int16)thisx[251] > 0)
    {
        result = thisx;
        if (a2 + (unsigned __int16)thisx[251] <= 0xFFFF)
        {
            result = thisx;
            thisx[251] += a2;
        }
        else
        {
            thisx[251] = -1;
        }
    }
    else
    {
        thisx[251] = 1;
    }
    return result;
}

