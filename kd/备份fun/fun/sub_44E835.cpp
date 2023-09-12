#include "sub.h" 
int sub_44E835(int thisx)
{
    int v3; // [esp+4h] [ebp-60h]
    int v4; // [esp+10h] [ebp-54h]
    int v5; // [esp+14h] [ebp-50h]
    int i; // [esp+18h] [ebp-4Ch]
    int j; // [esp+18h] [ebp-4Ch]
    int v8; // [esp+1Ch] [ebp-48h]
    int v9[3]; // [esp+20h] [ebp-44h]
    int v10[14]; // [esp+2Ch] [ebp-38h] BYREF

    sub_477F0C(0);
    v5 = 0;
    v4 = 0;
    for (i = 0; i < 3; ++i)
        v9[i] = 0;
    if (!*(_BYTE*)(thisx + 2516))
    {
        if (sub_476CDA(0))
        {
            v4 = 1;
        }
        else if (sub_476C8B(0))
        {
            v4 = -1;
        }
        if (sub_476D29(0))
        {
            v5 = -1;
        }
        else if (sub_476D78(0))
        {
            v5 = 1;
        }
        for (j = 0; j < 3; ++j)
            v9[j] = sub_476DC7(0, j);
    }
    v8 = 0;
    if (v5 || v4)
    {
        v8 = 1;
        if (v5)
        {
            if (*(_DWORD*)(thisx + 2528))
            {
                switch (*(_DWORD*)(thisx + 2528))
                {
                case 1:
                    *(_BYTE*)(thisx + 2496) -= v5;
                    if (*(unsigned __int8*)(thisx + 2496) < 0xBu)
                    {
                        if (*(_BYTE*)(thisx + 2496) == 1)
                        {
                            *(_BYTE*)(thisx + 2496) = 2;
                        }
                        else if (*(_BYTE*)(thisx + 2496))
                        {
                            if (*(_BYTE*)(thisx + 2496) == 2 && v5 < 0)
                                *(_BYTE*)(thisx + 2496) = 1;
                        }
                        else
                        {
                            *(_BYTE*)(thisx + 2496) = 10;
                        }
                    }
                    else
                    {
                        *(_BYTE*)(thisx + 2496) = 1;
                    }
                    break;
                case 2:
                    *(_BYTE*)(thisx + 77) = *(_BYTE*)(thisx + 77) == 0;
                    break;
                case 3:
                    *(_BYTE*)(thisx + 81) = *(_BYTE*)(thisx + 81) == 0;
                    break;
                case 4:
                    dword_4B99F0 = dword_4B99F0 == 0;
                    break;
                case 5:
                    *(_BYTE*)(thisx + 30) = (*(unsigned __int8*)(thisx + 30) + v5 + 9) % 9;
                    break;
                case 6:
                    *(_BYTE*)(thisx + 78) = *(_BYTE*)(thisx + 78) == 0;
                    break;
                case 7:
                    *(_BYTE*)(thisx + 98) = *(_BYTE*)(thisx + 98) == 0;
                    break;
                }
            }
            else
            {
                dword_4B99F4 = dword_4B99F4 == 0;
            }
        }
        if (v4)
        {
            *(_DWORD*)(thisx + 2528) += v4;
            v3 = *(_DWORD*)(thisx + 2528) - *(unsigned __int16*)(thisx + 2564);
            if (v3 < 0 || v3 >= 7)
                *(_WORD*)(thisx + 2564) += v4;
            if (*(int*)(thisx + 2528) >= 0)
            {
                if (*(int*)(thisx + 2528) >= 10)
                {
                    *(_DWORD*)(thisx + 2528) = 0;
                    *(_WORD*)(thisx + 2564) = 0;
                }
            }
            else
            {
                *(_DWORD*)(thisx + 2528) = 9;
                *(_WORD*)(thisx + 2564) = 3;
            }
            sub_4557D1(thisx,-2);
        }
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
    }
    if (v9[0])
    {
        if (*(_DWORD*)(thisx + 2528) == 8)
        {
            *(_DWORD*)(thisx + 108) = 6;
            *(_BYTE*)(thisx + 2516) = 2;
            *(_DWORD*)(thisx + 2512) = 0;
        }
        else if (*(_DWORD*)(thisx + 2528) == 9)
        {
            *(_DWORD*)(thisx + 108) = 7;
            *(_BYTE*)(thisx + 2516) = 2;
            *(_DWORD*)(thisx + 2512) = 0;
        }
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
    }
    if (v9[0] && *(int*)(thisx + 2528) < 8 || v9[1])
    {
        *(_DWORD*)(thisx + 108) = 3;
        *(_BYTE*)(thisx + 2516) = 2;
        *(_DWORD*)(thisx + 2512) = 0;
    }
    if (v8)
        sub_4557D1(thisx, 0);
    sub_49C15E((int)v10);
    v10[1] = 0;
    v10[2] = 0;
    v10[0] = dword_4B9248;
    sub_49AB05((int)byte_4BDC60, v10);
    if (dword_4B93B0 / 5u % 2)
    {
        if (*(_WORD*)(thisx + 2564))
            sub_47B91A(160, 44, &byte_4B0CA0, 0, -1);
        if (*(unsigned __int16*)(thisx + 2564) < 3u)
            sub_47B91A(160, 168, &byte_4B0CA4, 0, -1);
    }
    return sub_47B91A(92, 16 * (*(_DWORD*)(thisx + 2528) - *(unsigned __int16*)(thisx + 2564)) + 60, asc_4B0CA8, 0, -1);
}

