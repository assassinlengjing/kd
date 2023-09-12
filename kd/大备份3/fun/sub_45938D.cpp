#include "sub.h" 
_BYTE* sub_45938D(_BYTE* thisx)
{
    _BYTE* result; // eax
    int i; // [esp+4h] [ebp-4h]

    memset(thisx + 2, 0, 0xBu);
    memcpy(thisx + 2, &unk_4B2724, 0xBu);
    thisx[13] = 1;
    thisx[14] = 1;
    thisx[15] = 0;
    thisx[27] = 0;
    thisx[58] = 0;
    thisx[59] = 0;
    thisx[60] = 0;
    thisx[63] = 0;
    thisx[64] = 0;
    thisx[65] = 0;
    result = thisx;
    thisx[66] = 0;
    thisx[67] = 0;
    for (i = 0; i < 5; ++i)
    {
        result = &thisx[i];
        thisx[i + 71] = 0;
    }
    return result;
}

