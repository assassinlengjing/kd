#include "sub.h" 
char sub_424268(_DWORD* thisx)
{
    int v1; // ecx
    int v2; // eax
    BOOL v4; // [esp+0h] [ebp-4Ch]
    BOOL v5; // [esp+4h] [ebp-48h]
    BOOL v6; // [esp+8h] [ebp-44h]
    BOOL v7; // [esp+Ch] [ebp-40h]
    int j; // [esp+18h] [ebp-34h]
    int v10; // [esp+1Ch] [ebp-30h]
    int v11; // [esp+20h] [ebp-2Ch]
    int v12; // [esp+2Ch] [ebp-20h]
    int v13; // [esp+30h] [ebp-1Ch]
    char v14; // [esp+34h] [ebp-18h]
    char v15[8]; // [esp+3Ch] [ebp-10h]
    int i; // [esp+44h] [ebp-8h]
    int v17; // [esp+48h] [ebp-4h]

    v15[0] = 1;
    v15[1] = 1;
    v15[2] = 1;
    v15[3] = 1;
    v15[4] = 1;
    v15[5] = 1;
    v15[6] = 1;
    v15[7] = 1;
    v14 = 9;
    for (i = 0; i < 8; ++i)
    {
        v13 = sub_426090((_DWORD*)thisx[31]) / 100;
        v12 = sub_4260B0((_DWORD*)thisx[31]) / 100;
        v11 = v13 / 8;
        v10 = v12 / 8;
        v7 = i == 1 || i == 2 || i == 3;
        v6 = i == 5 || i == 6 || i == 7;
        v5 = i == 3 || i == 4 || i == 5;
        v4 = !i || i == 1 || i == 7;
        for (j = 0; j < 24; ++j)
        {
            v1 = v13 + 4 * (v7 - v6);
            v13 = v1;
            v12 += v5 - v4;
            if (v11 != v1 / 8 || v10 != v12 / 8)
            {
                v11 = v1 / 8;
                v2 = v12 / 8;
                v10 = v12 / 8;
                LOBYTE(v2) = v12 / 8;
                LOBYTE(v1) = v1 / 8;
                if (!sub_4773CC(v1, v2))
                {
                    v15[i] = 0;
                    --v14;
                    break;
                }
            }
        }
    }
    v17 = rand() % v14;
    if (!v17)
        return 0;
    for (i = 0; i < 8; ++i)
    {
        if (v15[i] == 1)
            --v17;
        if (v17 <= 0)
            return i + 1;
    }
    return 0;
}

