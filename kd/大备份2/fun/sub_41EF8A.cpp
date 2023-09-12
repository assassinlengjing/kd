#include "sub.h" 
__int16 sub_41EF8A(_WORD* thisx, int a2)
{
    __int16 result; // ax
    int v3; // [esp+4h] [ebp-14h]
    int v4; // [esp+8h] [ebp-10h]
    int i; // [esp+Ch] [ebp-Ch]
    int v6; // [esp+14h] [ebp-4h]

    if (a2 > 0xFFFF)
        a2 = 0xFFFF;
    if (a2 < 0)
        a2 = 0;
    if (a2 > 32)
    {
        v4 = 3200;
        v6 = (a2 - 32) / 8;
        for (i = 0; i < v6 + 1; ++i)
        {
            if (i >= v6)
                v3 = 100 * ((a2 - 32) % 8) / (i + 2);
            else
                v3 = 800 / (i + 2);
            if (!v3)
                v3 = 1;
            v4 += v3;
        }
        thisx[121] = v4 / 100;
        result = (__int16)thisx;
        if (!thisx[121])
            thisx[121] = 1;
    }
    else
    {
        thisx[121] = a2;
        result = thisx[121];
        if (!result)
            thisx[121] = 1;
    }
    return result;
}

