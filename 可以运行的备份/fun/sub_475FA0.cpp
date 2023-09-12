#include "sub.h" 
_BYTE* sub_475FA0(_BYTE* thisx)
{
    char i; // [esp+4h] [ebp-4h]
    char j; // [esp+4h] [ebp-4h]

    for (i = 0; i < 4; ++i)
        thisx[i + 76] = -(char)(i + 1);
    for (j = 4; j < 16; ++j)
        thisx[j + 76] = j - 4;
    return thisx;
}
