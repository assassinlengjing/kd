#include "sub.h" 
char sub_4575B4(unsigned __int8* thisx, int a2, int a3)
{
    int v5; // [esp+4h] [ebp-10h]
    char v6; // [esp+8h] [ebp-Ch]
    int v7; // [esp+Ch] [ebp-8h]
    int i; // [esp+10h] [ebp-4h]

    if (a2 < 0 || a2 >= 8)
        return 0;
    if (a3)
        v5 = a2;
    else
        v5 = sub_4576F0(a2);
    v6 = 0;
    v7 = 0;
    for (i = 0; i < (unsigned __int8)unk_4B9990; ++i)
    {
        v7 += thisx[i + 2546];
        ++v6;
        if (v7 > v5)
            return v6 - 1;
    }
    return 0;
}

