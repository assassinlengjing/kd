#include "sub.h" 
int sub_480227(_DWORD* thisx)
{
    int v1; // esi
    int v2; // esi
    int v5; // [esp+8h] [ebp-18h]
    int v6; // [esp+Ch] [ebp-14h]
    int v7; // [esp+10h] [ebp-10h]
    int v8; // [esp+14h] [ebp-Ch]
    int v9; // [esp+1Ch] [ebp-4h]

    v1 = sub_476D78(0);
    v8 = v1 - sub_476D29(0);
    v2 = sub_476CDA(0);
    v7 = v2 - sub_476C8B(0);
    v5 = sub_476DC7(0, 0);
    v9 = sub_476DC7(0, 1);
    v6 = 0;
    if (v5)
    {
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
        return 1;
    }
    else if (v9)
    {
        return 2;
    }
    else
    {
        if (v8)
        {
            sub_480374((_DWORD*)(32 * thisx[5] + thisx[3]), v8);
            sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
            return 4;
        }
        else if (v7)
        {
            thisx[5] = (thisx[4] + v7 + thisx[5]) % thisx[4];
            sub_48089C((int)thisx, thisx[5]);
            sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
            return 3;
        }
        return v6;
    }
}
