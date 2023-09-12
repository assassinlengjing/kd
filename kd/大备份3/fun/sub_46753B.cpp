#include "sub.h" 
unsigned int sub_46753B(int thisx)
{
    unsigned int result; // eax
    int k; // [esp+8h] [ebp-74h]
    int m; // [esp+Ch] [ebp-70h]
    int v5; // [esp+10h] [ebp-6Ch]
    int v6; // [esp+14h] [ebp-68h]
    int v7; // [esp+18h] [ebp-64h]
    int v8; // [esp+18h] [ebp-64h]
    int v9; // [esp+1Ch] [ebp-60h]
    int v10; // [esp+20h] [ebp-5Ch]
    int v11; // [esp+24h] [ebp-58h]
    int v12; // [esp+28h] [ebp-54h]
    int v13; // [esp+28h] [ebp-54h]
    int i; // [esp+2Ch] [ebp-50h]
    int j; // [esp+2Ch] [ebp-50h]
    int v16; // [esp+30h] [ebp-4Ch]
    int v17; // [esp+34h] [ebp-48h]
    int v18[3]; // [esp+38h] [ebp-44h]
    int v19[14]; // [esp+44h] [ebp-38h] BYREF

    sub_477F0C(0);
    v11 = 0;
    v10 = 0;
    v9 = 0;
    for (i = 0; i < 3; ++i)
        v18[i] = 0;
    if (!*(_BYTE*)(thisx + 2516))
    {
        if (sub_476CDA(0))
        {
            v10 = 1;
        }
        else if (sub_476C8B(0))
        {
            v10 = -1;
        }
        if (sub_476D29(0))
        {
            v11 = -1;
        }
        else if (sub_476D78(0))
        {
            v11 = 1;
        }
        for (j = 0; j < 3; ++j)
            v18[j] = sub_476DC7(0, j);
        v9 = sub_476DC7(0, 5);
    }
    v12 = *(unsigned __int16*)(thisx + 2564);
    v16 = 0;
    v17 = 0;
    if (v11 || v10)
    {
        v16 = 1;
        sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
        if (*(_BYTE*)(thisx + 2562))
        {
            if (*(_BYTE*)(thisx + 2562) == 1)
            {
                v5 = *(_DWORD*)(thisx + 2528) + 2 * *(_DWORD*)(thisx + 2532);
                v6 = 5 * v10 + v11;
                if (v6 > 0 && v6 > *(unsigned __int16*)(thisx + 2566))
                    v6 = *(unsigned __int16*)(thisx + 2566);
                if (v6 < 0 && -v6 > *(unsigned __int16*)(thisx + 2 * v5 + 48))
                    v6 = -*(unsigned __int16*)(thisx + 2 * v5 + 48);
                *(_WORD*)(thisx + 2 * v5 + 48) += v6;
                *(_WORD*)(thisx + 2566) -= v6;
            }
        }
        else
        {
            if (v11)
                *(_DWORD*)(thisx + 2528) = *(_DWORD*)(thisx + 2528) == 0;
            if (v10)
            {
                v7 = v10 + *(_DWORD*)(thisx + 2532);
                if (v7 < 0)
                    v7 = 0;
                if (v7 >= 7)
                    v7 = 6;
                *(_DWORD*)(thisx + 2532) = v7;
                v8 = *(_DWORD*)(thisx + 2532) - v12;
                if (v8 < 0 || v8 > 3)
                    *(_WORD*)(thisx + 2564) += v10;
            }
            if (*(_DWORD*)(thisx + 2528) + 2 * *(_DWORD*)(thisx + 2532) >= 14)
            {
                *(_DWORD*)(thisx + 2528) = 0;
                *(_DWORD*)(thisx + 2532) = 6;
            }
        }
    }
    if (v18[0])
    {
        v17 = 1;
        sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
        if (*(_BYTE*)(thisx + 2562))
        {
            if (*(_BYTE*)(thisx + 2562) == 1)
                *(_BYTE*)(thisx + 2562) = 0;
        }
        else
        {
            *(_BYTE*)(thisx + 2562) = 1;
        }
    }
    if (v18[1])
    {
        if (*(_BYTE*)(thisx + 2562))
        {
            if (*(_BYTE*)(thisx + 2562) == 1)
            {
                *(_BYTE*)(thisx + 2562) = 0;
                v17 = 1;
            }
        }
        else
        {
            *(_DWORD*)(thisx + 108) = 5;
            *(_BYTE*)(thisx + 2516) = 2;
        }
    }
    if (v9)
    {
        sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
        v16 = 1;
        v17 = 1;
        if (*(_WORD*)(thisx + 2566))
        {
            *(_WORD*)(thisx + 2566) = 0;
            for (k = 0; k < 14; ++k)
                *(_WORD*)(thisx + 2 * k + 48) = 10;
        }
        else
        {
            *(_WORD*)(thisx + 2566) = 140;
            for (m = 0; m < 14; ++m)
                *(_WORD*)(thisx + 2 * m + 48) = 0;
        }
    }
    if (v16)
        sub_466F20(thisx, 0);
    if (v17)
        sub_466F20(thisx, 1);
    sub_49C15E((int)v19);
    v19[1] = 0;
    v19[2] = 0;
    v19[0] = unk_4B9248;
    sub_49AB05((int)unk_4BDC60, v19);
    v13 = *(unsigned __int16*)(thisx + 2564);
    if (*(_BYTE*)(thisx + 2562))
    {
        if (*(_BYTE*)(thisx + 2562) == 1)
            sub_47B91A(136 * *(_DWORD*)(thisx + 2528) + 64, 34 * (*(_DWORD*)(thisx + 2532) - v13) + 48, asc_4B3388, 0, -1);
    }
    else
    {
        sub_47B91A(136 * *(_DWORD*)(thisx + 2528) + 24, 34 * (*(_DWORD*)(thisx + 2532) - v13) + 52, asc_4B3384, 0, -1);
    }
    result = unk_4B93B0 / 5u / 2;
    if (!(unk_4B93B0 / 5u % 2))
    {
        if (v13 > 0)
            result = sub_47B91A(160, 32, &unk_4B338C, 0, -1);
        if (v13 + 4 < 7)
            return sub_47B91A(160, 172, &unk_4B3390, 0, -1);
    }
    return result;
}

