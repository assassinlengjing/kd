#include "sub.h" 
_BYTE* sub_48A596(_BYTE* thisx)
{
    _BYTE* result; // eax
    int i; // [esp+4h] [ebp-4h]

    result = thisx;
    *thisx = 0;
    for (i = 0; i < 16; ++i)
    {
        result = thisx;
        *(_WORD*)&thisx[2 * i + 2] = 0;
        thisx[i + 34] = 0;
    }
    return result;
}
