#include "sub.h" 
int sub_485955(_DWORD* thisx)
{
    BOOL v1; // esi
    BOOL v4; // [esp+8h] [ebp-14h]
    int v5; // [esp+Ch] [ebp-10h]
    int v6; // [esp+14h] [ebp-8h]
    BOOL v7; // [esp+18h] [ebp-4h]

    v6 = 0;
    sub_476D78(0);
    sub_476D29(0);
    v1 = sub_476CDA(0);
    v5 = v1 - sub_476C8B(0);
    v4 = sub_476DC7(0, 0);
    v7 = sub_476DC7(0, 1);
    if (v5)
    {
        thisx[5] = (thisx[5] + v5 + 5) % 5;
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
        return 3;
    }
    else if (v4)
    {
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
        return 1;
    }
    else if (v7)
    {
        return 2;
    }
    return v6;
}


