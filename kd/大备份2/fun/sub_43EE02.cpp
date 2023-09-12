#include "sub.h" 
unsigned __int8 sub_43EE02(unsigned __int8* thisx, int a2, int a3)
{
    char v4; // [esp+4h] [ebp-10h]
    char v5; // [esp+8h] [ebp-Ch]
    int v6; // [esp+Ch] [ebp-8h]
    unsigned __int8 v7; // [esp+10h] [ebp-4h]

    if (!a3)
        return thisx[a2 + 18];
    v7 = thisx[a2 + 18];
    if (v7)
    {
        v6 = sub_43ED4E(thisx, 2u);
        if (v6)
        {
            v5 = *(_BYTE*)(a3 + 243);
            if (v5)
            {
                v4 = 3 * (v5 - 1);
                if (*(_BYTE*)(v6 + 1) == 1)
                    v4 -= 9;
                if (!a2)
                    v4 *= 5;
                v7 += v4;
            }
        }
    }
    return v7;
}


