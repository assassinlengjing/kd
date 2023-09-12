#include "sub.h" 
unsigned __int16* sub_47336A(int thisx)
{
    int v1; // esi
    int v2; // esi
    int i; // [esp+8h] [ebp-5Ch]
    int v6; // [esp+Ch] [ebp-58h]
    int v7; // [esp+10h] [ebp-54h]
    int v8; // [esp+14h] [ebp-50h]
    int v9; // [esp+18h] [ebp-4Ch]
    int v10; // [esp+1Ch] [ebp-48h]
    int v11; // [esp+20h] [ebp-44h]
    int v12; // [esp+24h] [ebp-40h]
    int v13[14]; // [esp+28h] [ebp-3Ch] BYREF
    int v14; // [esp+60h] [ebp-4h]

    v11 = 0;
    v10 = 0;
    v7 = 0;
    v14 = 0;
    v8 = 0;
    v9 = 0;
    if (!*(_BYTE*)(thisx + 2516))
    {
        sub_477F0C(0);
        v1 = sub_476D78(0);
        v11 = v1 - sub_476D29(0);
        v2 = sub_476CDA(0);
        v10 = v2 - sub_476C8B(0);
        v7 = sub_476DC7(0, 0);
        v14 = sub_476DC7(0, 1);
        v8 = sub_476DC7(0, 5);
        v9 = sub_476DC7(0, 6);
    }
    v12 = 0;
    if (*(_BYTE*)(thisx + 2604) && *(unsigned __int8*)(thisx + 2562) < (int)*(unsigned __int8*)(thisx + 2477))
    {
        if ((unsigned __int8)++ * (_BYTE*)(thisx + 2604) > 5u)
        {
            *(_BYTE*)(thisx + 2604) = 1;
            *(_DWORD*)(thisx + 2528) = rand() % (*(_DWORD*)(thisx + 13388) + 1);
            sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
            v12 = 1;
        }
    }
    else if (v11 && *(unsigned __int8*)(thisx + 2562) < (int)*(unsigned __int8*)(thisx + 2477))
    {
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
        *(_DWORD*)(thisx + 2528) = (v11 + *(_DWORD*)(thisx + 2528) + *(_DWORD*)(thisx + 13388) + 1)
            % (*(_DWORD*)(thisx + 13388) + 1);
        v12 = 1;
    }
    else if (v10 && *(unsigned __int8*)(thisx + 2562) < (int)*(unsigned __int8*)(thisx + 2477))
    {
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
        v6 = 10;
        if (*(_DWORD*)(thisx + 13388) + 1 < 10)
            v6 = 10 - (*(_DWORD*)(thisx + 13388) + 1);
        *(_DWORD*)(thisx + 2528) = (v6 * v10 + *(_DWORD*)(thisx + 2528) + *(_DWORD*)(thisx + 13388) + 1)
            % (*(_DWORD*)(thisx + 13388) + 1);
        v12 = 1;
    }
    if (v7)
    {
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
        if (*(unsigned __int8*)(thisx + 2562) < (int)*(unsigned __int8*)(thisx + 2477))
            *(_BYTE*)(thisx + *(unsigned __int8*)(thisx + 2562) + 2478) = *(_BYTE*)(thisx + 2528);
        if ((unsigned __int8)++ * (_BYTE*)(thisx + 2562) >= *(unsigned __int8*)(thisx + 2477) + 1)
        {
            *(_DWORD*)(thisx + 108) = 23;
            *(_BYTE*)(thisx + 2516) = 2;
        }
        v12 = 1;
    }
    else if (v14)
    {
        if (*(_BYTE*)(thisx + 2562))
            --* (_BYTE*)(thisx + 2562);
        v12 = 1;
    }
    else if (v8)
    {
        *(_BYTE*)(thisx + 2604) = *(_BYTE*)(thisx + 2604) == 0;
    }
    else if (v9)
    {
        for (i = *(unsigned __int8*)(thisx + 2562); i < *(unsigned __int8*)(thisx + 2477); ++i)
            *(_BYTE*)(i + thisx + 2478) = rand() % (*(_DWORD*)(thisx + 13388) + 1);
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
        *(_BYTE*)(thisx + 2562) = *(_BYTE*)(thisx + 2477) + 1;
        *(_DWORD*)(thisx + 108) = 23;
        *(_BYTE*)(thisx + 2516) = 2;
        v12 = 1;
    }
    if (v12)
        sub_4737C8(thisx);
    sub_49C15E((int)v13);
    v13[0] = dword_4B9248;
    return sub_49AB05((int)byte_4BDC60, v13);
}

