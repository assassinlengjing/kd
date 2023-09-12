#include "sub.h" 
WORD* sub_420DB2(_WORD* thisx, int a2)
{
    _WORD* result; // eax

    result = thisx;
    if (a2 + (unsigned __int16)thisx[255] > 0)
    {
        result = thisx;
        if (a2 + (unsigned __int16)thisx[255] <= 0xFFFF)
        {
            result = thisx;
            thisx[255] += a2;
        }
        else
        {
            thisx[255] = -1;
        }
    }
    else
    {
        thisx[255] = 1;
    }
    return result;
}

