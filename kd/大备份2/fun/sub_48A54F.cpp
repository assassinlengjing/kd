#include "sub.h" 
_BYTE* sub_48A54F(_BYTE* thisx)
{
    int i; // [esp+4h] [ebp-4h]

    *thisx = 0;
    for (i = 0; i < 16; ++i)
    {
        *(_WORD*)&thisx[2 * i + 2] = 0;
        thisx[i + 34] = 0;
    }
    return thisx;
}
