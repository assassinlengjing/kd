#include "sub.h" 
int __fastcall sub_424C9A(_DWORD* a1, int a2, int a3, int a4, int a5, int a6)
{
    int result; // eax
    unsigned __int16 v7; // ax
    int n; // [esp+14h] [ebp-5Ch]
    int v10; // [esp+18h] [ebp-58h]
    int v11; // [esp+1Ch] [ebp-54h]
    int v12; // [esp+20h] [ebp-50h]
    int m; // [esp+24h] [ebp-4Ch]
    int v14; // [esp+28h] [ebp-48h]
    unsigned __int8 v15; // [esp+2Ch] [ebp-44h]
    int k; // [esp+30h] [ebp-40h]
    int i; // [esp+34h] [ebp-3Ch]
    int v18; // [esp+38h] [ebp-38h]
    int Size; // [esp+3Ch] [ebp-34h]
    int v20; // [esp+48h] [ebp-28h]
    char v21[8]; // [esp+50h] [ebp-20h]
    int v22; // [esp+58h] [ebp-18h]
    int j; // [esp+5Ch] [ebp-14h]
    int v24[4]; // [esp+60h] [ebp-10h]

    result = (int)a1;
    if (a1[31] && a1[14])
    {
        v18 = a3;
        if (a3 >= 0)
        {
            result = (int)a1;
            if (a3 >= a1[16])
                return result;
        }
        else
        {
            v18 = 0;
        }
        Size = a5 - a3;
        if (a5 - a3 > a1[16])
            Size = a1[16];
        for (i = a4; i < a6; ++i)
        {
            if (i >= 0)
            {
                if (i >= a1[17])
                    break;
                memset((void*)(a1[16] * i + v18 + a1[14]), 0, Size);
            }
        }
        v7 = sub_41D067(a1[31], 0);
        v20 = (3 * v7 / 2 + 405) * ((3 * v7 / 2 + 405) / 30) / 2;
        v22 = (3 * sub_41D067(a1[31], 0) / 2 + 405) / 15;
        sub_426210((char*)byte_4B9B10);
        result = sub_4224A7((void*)a1[31]) * v22 / 800;
        v21[0] = 2;
        v21[1] = 16;
        v21[2] = 64;
        v21[3] = 8;
        v21[4] = 1;
        v21[5] = 4;
        v21[6] = 32;
        v21[7] = 0x80;
        for (j = a4; ; ++j)
        {
            if (j >= a6)
                return result;
            if (j >= 0 && j < a1[17])
                break;
        LABEL_16:
            result = j + 1;
        }
        for (k = a3; ; ++k)
        {
            if (k >= a5)
                goto LABEL_16;
            if (k >= 0 && k < a1[16])
            {
                v14 = 100 * sub_446497((int*)byte_4B9B10, 8 * k + 4, 8 * j + 4);
                if (sub_4773CC(k, j))
                    break;
            }
        LABEL_22:
            ;
        }
        v15 = 0;
        for (m = 0; ; ++m)
        {
            if (m >= 8)
            {
                *(_BYTE*)(a1[14] + a1[16] * j + k) = v15;
                goto LABEL_22;
            }
            if (m >= 4)
            {
                v11 = k + 2 * (m & 1) - 1;
                v10 = j + 2 * ((m - 4) / 2) - 1;
            }
            else
            {
                v11 = (m == 1) + k - (m == 3);
                v10 = (__PAIR64__((unsigned int)(m == 2) + j, m) - 1) >> 32;
            }
            if (m < 4)
                goto LABEL_60;
            for (n = 0;
                n < 2
                && ((unsigned __int8)v21[2 * (m >= 6) * (n == 0) + (((m & 0x80000001) == 1) + 3 * ((m & 1) == 0)) * (n == 1)] & v15) != 0;
                ++n)
            {
                ;
            }
            if (n >= 2)
            {
            LABEL_60:
                if (v11 >= 0 && v11 < a1[16] && v10 >= 0 && v10 < a1[17])
                {
                    if (sub_4773CC(v11, v10))
                    {
                        v12 = 100 * sub_446497((int*)byte_4B9B10, 8 * v11 + 4, 8 * v10 + 4);
                        if (v12 - v14 <= v20)
                        {
                            if (m < 4)
                            {
                                v24[m] = v14 - v12 <= v20;
                            LABEL_55:
                                v15 |= v21[m];
                                continue;
                            }
                            if (v14 - v12 > v20 || v24[2 * (m >= 6)] && v24[3 * ((m & 0x80000001) == 0) + ((m & 0x80000001) == 1)])
                                goto LABEL_55;
                        }
                    }
                }
            }
        }
    }
    return result;
}