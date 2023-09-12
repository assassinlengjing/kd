#include "sub.h" 
unsigned __int16 sub_41CA5F(int thisx, int a2)
{
    unsigned __int16 v4; // [esp+Ch] [ebp-4h]

    if (!*(_WORD*)(thisx + 514))
        *(_WORD*)(thisx + 514) = 1;
    v4 = *(_WORD*)(thisx + 514);
    if (a2 && sub_41BA53(thisx, 0x84u, 0))
        v4 = *(_DWORD*)(thisx + 448) * (unsigned __int16)(__int64)((double)v4 * 1.25) / 180 + (__int64)((double)v4 * 1.25);
    if (sub_41BA53(thisx, 0x8Cu, 0) && *(_BYTE*)(thisx + 609) == 11)
        v4 += *(_WORD*)(thisx + 496) + 10;
    return v4;
}

