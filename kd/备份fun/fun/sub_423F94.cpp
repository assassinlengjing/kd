#include "sub.h" 
int sub_423F94(_DWORD* thisx, int a2, int a3)
{
    int v3; // eax
    int v4; // ecx
    int v6; // [esp+0h] [ebp-50h]
    int v7; // [esp+4h] [ebp-4Ch]
    int v8; // [esp+8h] [ebp-48h]
    int v9; // [esp+Ch] [ebp-44h]
    int v10; // [esp+10h] [ebp-40h]
    int v11; // [esp+14h] [ebp-3Ch]
    int v13; // [esp+20h] [ebp-30h]
    int v14; // [esp+28h] [ebp-28h]
    int i; // [esp+2Ch] [ebp-24h]
    int v16; // [esp+38h] [ebp-18h]
    int v17; // [esp+3Ch] [ebp-14h]
    int v18; // [esp+40h] [ebp-10h]
    int v19; // [esp+44h] [ebp-Ch]

    v14 = sub_426090((_DWORD*)thisx[31]) / 800;
    v13 = sub_4260B0((_DWORD*)thisx[31]) / 800;
    if (a2 <= 0)
        v11 = -a2;
    else
        v11 = a2;
    if (a3 <= 0)
        v10 = -a3;
    else
        v10 = a3;
    if (a2 <= 0)
        v9 = (a2 >= 0) - 1;
    else
        v9 = 1;
    if (a3 <= 0)
        v8 = (a3 >= 0) - 1;
    else
        v8 = 1;
    if (v14 - (a2 + sub_426090((_DWORD*)thisx[31])) / 800 <= 0)
        v7 = (a2 + sub_426090((_DWORD*)thisx[31])) / 800 - v14;
    else
        v7 = v14 - (a2 + sub_426090((_DWORD*)thisx[31])) / 800;
    if (v13 - (a3 + sub_4260B0((_DWORD*)thisx[31])) / 800 <= 0)
        v6 = (a3 + sub_4260B0((_DWORD*)thisx[31])) / 800 - v13;
    else
        v6 = v13 - (a3 + sub_4260B0((_DWORD*)thisx[31])) / 800;
    v19 = v7;
    v16 = v11;
    if (v11 < v10)
    {
        v19 = v6;
        v16 = v10;
    }
    v18 = 0;
    v17 = 0;
    for (i = 0; i < v19; ++i)
    {
        v18 += v11;
        if (v18 >= v16)
        {
            v14 += v9;
            v18 -= v16;
        }
        v3 = v10 + v17;
        v17 += v10;
        v4 = v17;
        if (v17 >= v16)
        {
            v13 += v8;
            v3 = v17 - v16;
            v17 -= v16;
        }
        if (v14 >= 0)
        {
            v4 = (int)thisx;
            if (v14 >= thisx[16])
            {
                v3 = (int)thisx;
                v4 = thisx[16] - 1;
                v14 = v4;
            }
        }
        else
        {
            v14 = 0;
        }
        if (v13 >= 0)
        {
            v3 = v13;
            if (v13 >= thisx[17])
            {
                v4 = (int)thisx;
                v13 = thisx[17] - 1;
            }
        }
        else
        {
            v13 = 0;
        }
        if (v9)
        {
            v4 = thisx[15] + 2 * (thisx[16] * v13 + v14);
            v3 = (v9 + 1) / 2;
            if (*(_BYTE*)(v4 + v3))
                return 1;
        }
        LOBYTE(v3) = v13;
        LOBYTE(v4) = v14;
        if (!sub_4773CC(v4, v3))
            return 0;
    }
    return 1;
}

