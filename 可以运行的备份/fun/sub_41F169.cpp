#include "sub.h" 
_WORD* sub_41F169(_WORD* thisx, int a2)
{
    _WORD* result; // eax

    if (a2 >= 0)
    {
        if (a2 > 0xFFFF)
            LOWORD(a2) = -1;
    }
    else
    {
        LOWORD(a2) = 0;
    }
    result = thisx;
    thisx[120] = a2;
    return result;
}

