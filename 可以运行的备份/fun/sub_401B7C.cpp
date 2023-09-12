#include "sub.h" 
_BYTE* sub_401B7C(_BYTE* thisx)
{
    int i; // [esp+4h] [ebp-4h]

    *(_WORD*)thisx = 0;
    thisx[6] = 0;
    thisx[7] = 0;
    for (i = 0; i < 2; ++i)
    {
        thisx[i + 2] = 0;
        thisx[i + 4] = 0;
    }
    return thisx;
}

