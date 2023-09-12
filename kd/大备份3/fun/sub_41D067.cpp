#include "sub.h" 
_int16 sub_41D067(int thisx, int a2)
{
    unsigned __int16 v4; // [esp+8h] [ebp-4h]

    if (!*(_WORD*)(thisx + 516))
        return 1;
    v4 = *(_WORD*)(thisx + 516);
    if (a2)
    {
        if (sub_41BA53(thisx, 0x86u, 0))
            v4 = (__int64)((double)v4 * 1.5);
        if (*(unsigned __int8*)(thisx + 238) > 1u)
            v4 *= 2;
    }
    if (sub_41BA53(thisx, 0x8Cu, 0))
    {
        if (*(_BYTE*)(thisx + 609) == 11)
            v4 += *(_WORD*)(thisx + 496) + 10;
    }
    return v4;
}

