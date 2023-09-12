#include "sub.h" 
int sub_447651(int thisx)
{
    int v1; // edx
    int v2; // eax
    int v3; // esi
    int v4; // ecx
    int v5; // esi
    int v6; // edx
    int v7; // eax
    BOOL v8; // eax
    BOOL v9; // eax
    int v10; // ecx
    int v11; // ecx
    int v12; // eax
    int result; // eax
    int v14; // ebx
    unsigned __int8 v16; // [esp+14h] [ebp-4A4h]
    int i1; // [esp+18h] [ebp-4A0h]
    int v18; // [esp+1Ch] [ebp-49Ch]
    int mm; // [esp+20h] [ebp-498h]
    unsigned __int8 v20; // [esp+24h] [ebp-494h]
    int kk; // [esp+28h] [ebp-490h]
    int v22; // [esp+2Ch] [ebp-48Ch]
    int v23; // [esp+30h] [ebp-488h]
    int v24; // [esp+34h] [ebp-484h]
    int v25; // [esp+38h] [ebp-480h]
    int v26; // [esp+3Ch] [ebp-47Ch]
    signed int n; // [esp+44h] [ebp-474h]
    int v28; // [esp+48h] [ebp-470h]
    int ii; // [esp+4Ch] [ebp-46Ch]
    int v30; // [esp+50h] [ebp-468h]
    int v31; // [esp+54h] [ebp-464h]
    int m; // [esp+58h] [ebp-460h]
    int v33; // [esp+5Ch] [ebp-45Ch]
    int v34; // [esp+60h] [ebp-458h]
    int v35; // [esp+68h] [ebp-450h]
    int i; // [esp+6Ch] [ebp-44Ch]
    int j; // [esp+6Ch] [ebp-44Ch]
    int k; // [esp+6Ch] [ebp-44Ch]
    int jj; // [esp+6Ch] [ebp-44Ch]
    int nn; // [esp+6Ch] [ebp-44Ch]
    int i2; // [esp+6Ch] [ebp-44Ch]
    int i3; // [esp+6Ch] [ebp-44Ch]
    int v43; // [esp+70h] [ebp-448h]
    CHAR String[1024]; // [esp+74h] [ebp-444h] BYREF
    int v45; // [esp+474h] [ebp-44h]
    int v46[14]; // [esp+478h] [ebp-40h] BYREF
    int v47; // [esp+4B0h] [ebp-8h]
    int v48; // [esp+4B4h] [ebp-4h]

    sub_49C15E((int)v46);
    v46[1] = 0;
    v46[2] = 0;
    v46[0] = unk_4B9248;
    sub_49AB05((int)unk_4BDC60, v46);
    wsprintfA(String, &unk_4B0944);
    v47 = 4 * lstrlenA(String) + 16;
    v45 = 320 / v47 + 2;
    for (i = 0; i < v45; ++i)
        sub_47B91A(v47 * i + -*(_DWORD*)(thisx + 2540) / 2, 4, String, 0, -1);
    if (++ * (_DWORD*)(thisx + 2540) == 2 * v47)
        *(_DWORD*)(thisx + 2540) = 0;
    v48 = (unsigned __int8)unk_4B9986;
    if (!unk_4B9986)
        v48 = 1;
    for (j = 0; j < v48; ++j)
        sub_477F0C(j);
    v43 = 0;
    for (k = 0; k < (unsigned __int8)unk_4B9985; ++k)
    {
        v34 = 0;
        if (!*(_BYTE*)(thisx + 2516))
        {
            v33 = -1;
            for (m = 0; ; ++m)
            {
                v1 = m;
                if (m >= v48)
                    break;
                if (k == *(unsigned __int8*)(m + thisx + 2554))
                {
                    v1 = m;
                    v33 = m;
                    break;
                }
            }
            if (v33 != -1 && !*(_BYTE*)(k + thisx + 2588))
            {
                LOBYTE(v1) = v33;
                v2 = sub_476D78(v1);
                v3 = v2;
                LOBYTE(v2) = v33;
                v31 = v3 - sub_476D29(v2);
                LOBYTE(v4) = v33;
                v5 = sub_476CDA(v4);
                LOBYTE(v6) = v33;
                v30 = v5 - sub_476C8B(v6);
                v7 = k + thisx;
                if (*(_BYTE*)(k + thisx + 2604))
                {
                    if (++ * (_BYTE*)(k + thisx + 2604) == 5)
                        *(_BYTE*)(k + thisx + 2604) = 1;
                    v7 = k + thisx;
                    if (*(_BYTE*)(k + thisx + 2604) == 1)
                    {
                        for (n = rand() % (int)Size; ; ++n)
                        {
                            if (n >= 0)
                            {
                                if (n >= (int)Size)
                                    n = 0;
                                v9 = sub_44E484((_BYTE*)thisx, k, n);
                            }
                            else
                            {
                                n = Size - 1;
                                v9 = sub_44E484((_BYTE*)thisx, k, Size - 1);
                            }
                            if (!v9)
                                break;
                        }
                        *(_WORD*)(thisx + 2 * k + 2564) = n;
                        if (*(_BYTE*)(thisx + 98))
                            *(_BYTE*)(k + thisx + 2580) = rand() % 4;
                        else
                            *(_BYTE*)(k + thisx + 2580) = MarkedForDetachment((_BYTE*)(36 * n + unk_4B92E0));
                        v34 = 1;
                        v7 = sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
                    }
                }
                else if (v31)
                {
                    *(_BYTE*)(k + thisx + 13092) = 0;
                    for (ii = v31 + *(unsigned __int16*)(thisx + 2 * k + 2564); ; ii += v31)
                    {
                        if (ii >= 0)
                        {
                            if (ii >= (int)Size)
                                ii = 0;
                            v8 = sub_44E484((_BYTE*)thisx, k, ii);
                        }
                        else
                        {
                            ii = Size - 1;
                            v8 = sub_44E484((_BYTE*)thisx, k, Size - 1);
                        }
                        if (!v8)
                            break;
                    }
                    *(_WORD*)(thisx + 2 * k + 2564) = ii;
                    *(_BYTE*)(k + thisx + 2580) = MarkedForDetachment((_BYTE*)(36 * ii + unk_4B92E0));
                    v34 = 1;
                    v7 = sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
                }
                else if (v30)
                {
                    if (*(_BYTE*)(k + thisx + 2596) == 2)
                    {
                        *(_BYTE*)(k + thisx + 13092) = (*(unsigned __int8*)(k + thisx + 13092) + v30 + 4) % 4;
                    }
                    else
                    {
                        v28 = v30 + *(unsigned __int8*)(k + thisx + 2580);
                        if (v28 >= 0)
                        {
                            if (v28 >= 4)
                                LOBYTE(v28) = 0;
                        }
                        else
                        {
                            LOBYTE(v28) = 3;
                        }
                        *(_BYTE*)(k + thisx + 2580) = v28;
                    }
                    v34 = 1;
                    v7 = sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
                }
                LOBYTE(v7) = v33;
                if (sub_476DC7(v7, 0) && !sub_44E484((_BYTE*)thisx, k, -1))
                {
                    *(_BYTE*)(k + thisx + 2588) = 1;
                    v34 = 1;
                    sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
                }
                LOBYTE(v10) = v33;
                if (sub_476DC7(v10, 2))
                {
                    if ((unsigned __int8)++ * (_BYTE*)(k + thisx + 2596) > 2u)
                        *(_BYTE*)(k + thisx + 2596) = 0;
                    *(_BYTE*)(k + thisx + 13092) = 0;
                    v34 = 1;
                    sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
                }
                LOBYTE(v11) = v33;
                v12 = sub_476DC7(v11, 5);
                if (v12)
                {
                    v12 = *(unsigned __int8*)(k + thisx + 2604);
                    if (*(_BYTE*)(k + thisx + 2604))
                        *(_BYTE*)(k + thisx + 2604) = 0;
                    else
                        *(_BYTE*)(k + thisx + 2604) = 1;
                }
                LOBYTE(v12) = v33;
                if (sub_476DC7(v12, 6))
                    v43 = 1;
                if (v34)
                    sub_454469((_BYTE*)thisx, k);
            }
        }
    }
    result = *(unsigned __int8*)(thisx + 2516);
    if (!*(_BYTE*)(thisx + 2516))
    {
        for (jj = 0; jj < v48; ++jj)
        {
            LOBYTE(result) = jj;
            result = sub_476DC7(result, 1);
            v25 = result;
            v26 = *(unsigned __int8*)(jj + thisx + 2554);
            if (!result)
            {
                if (*(unsigned __int8*)(jj + thisx + 2554) >= 8u)
                    continue;
                result = v26 + thisx;
                if (*(_BYTE*)(v26 + thisx + 2588) != 1)
                    continue;
            }
            v23 = *(unsigned __int8*)(jj + thisx + 2554);
            if (v25 && *(unsigned __int8*)(jj + thisx + 2554) >= 0x64u && *(unsigned __int8*)(jj + thisx + 2554) < 0x6Cu)
            {
                result = v26 - 99;
                v23 = v26 - 99;
                v26 -= 100;
            }
            if (v25)
            {
                *(_BYTE*)(v26 + thisx + 2588) = 0;
            }
            else
            {
                result = v26 + thisx;
                *(_BYTE*)(v26 + thisx + 2588) = 2;
            }
            v22 = 1;
            v24 = 0;
            while (v22)
            {
                ++v24;
                if (v25)
                    --v23;
                else
                    ++v23;
                if (v23 < (unsigned __int8)unk_4B9985)
                {
                    if (v23 < 0)
                        v23 = (unsigned __int8)unk_4B9985 - 1;
                }
                else
                {
                    v23 = 0;
                }
                result = v24 - 1;
                if (v24 - 1 == (unsigned __int8)unk_4B9985)
                {
                    v23 = -1;
                    break;
                }
                if (!v25 && (result = *(unsigned __int8*)(v23 + thisx + 2588), !*(_BYTE*)(v23 + thisx + 2588)) || v25)
                {
                    if (jj == (unsigned __int8)unk_4B9988[v23]
                        || (result = v23, (unsigned __int8)unk_4B9988[v23] >= (int)(unsigned __int8)unk_4B9986))
                    {
                        v14 = (unsigned __int8)sub_4575B4((unsigned __int8*)thisx, v23, 1);
                        result = (unsigned __int8)sub_4575B4((unsigned __int8*)thisx, v26, 1);
                        if (v14 == result)
                        {
                            for (kk = 0; ; ++kk)
                            {
                                result = (unsigned __int8)unk_4B9986;
                                if (kk >= (unsigned __int8)unk_4B9986)
                                    break;
                                if (kk != jj)
                                {
                                    result = *(unsigned __int8*)(kk + thisx + 2554);
                                    if (result == v23)
                                        break;
                                }
                            }
                            if (kk == (unsigned __int8)unk_4B9986)
                                v22 = 0;
                        }
                        else
                        {
                            v23 = -1;
                        }
                    }
                }
                if (v25 && (result = sub_4576F0(jj), v26 != result) || !v25)
                {
                    if (v23 == -1 && !jj)
                    {
                        result = (unsigned __int8)unk_4B9987;
                        if (unk_4B9987)
                        {
                            v20 = sub_4575B4((unsigned __int8*)thisx, v26, 1);
                            v18 = v26 - (unsigned __int8)sub_457659((unsigned __int8*)thisx, v26, 1);
                            if (v25)
                                v20 = (v20 + (unsigned __int8)unk_4B9990 - 1) % (unsigned __int8)unk_4B9990;
                            for (mm = 0; ; ++mm)
                            {
                                if (v25)
                                {
                                    result = ((unsigned __int8)unk_4B9985 + v18 - *(unsigned __int8*)(thisx + v20 + 2546))
                                        / (unsigned __int8)unk_4B9985;
                                    v18 = ((unsigned __int8)unk_4B9985 + v18 - *(unsigned __int8*)(thisx + v20 + 2546))
                                        % (unsigned __int8)unk_4B9985;
                                }
                                else
                                {
                                    result = *(unsigned __int8*)(thisx + v20 + 2546) + v18;
                                    v18 = result;
                                }
                                if (v18 >= (unsigned __int8)unk_4B9985)
                                    v18 = 0;
                                if (mm >= (unsigned __int8)unk_4B9990)
                                {
                                    v23 = -1;
                                    v22 = 0;
                                    goto LABEL_139;
                                }
                                if (!unk_4B9988[v18] || (unsigned __int8)unk_4B9988[v18] >= (int)(unsigned __int8)unk_4B9986)
                                {
                                    if (!v25)
                                    {
                                        result = *(unsigned __int8*)(v18 + thisx + 2588);
                                        if (!*(_BYTE*)(v18 + thisx + 2588))
                                        {
                                            v23 = v18;
                                            v22 = 0;
                                            goto LABEL_139;
                                        }
                                    }
                                    if (v25)
                                        break;
                                }
                                if (v25)
                                    v20 = (v20 + (unsigned __int8)unk_4B9990 - 1) % (unsigned __int8)unk_4B9990;
                                else
                                    v20 = (v20 + (unsigned __int8)unk_4B9990 + 1) % (unsigned __int8)unk_4B9990;
                            }
                            result = v18 + *(unsigned __int8*)(thisx + v20 + 2546) - 1;
                            v23 = result;
                            v22 = 0;
                        }
                    }
                }
            LABEL_139:
                if (v23 == -1)
                    break;
            }
            if (v23 == -1)
            {
                if (!v25)
                {
                    result = v26 + 100;
                    *(_BYTE*)(jj + thisx + 2554) = v26 + 100;
                }
            }
            else
            {
                LOBYTE(result) = v23;
                *(_BYTE*)(jj + thisx + 2554) = v23;
                if (v25)
                {
                    *(_BYTE*)(v23 + thisx + 2588) = 0;
                    sub_454469((_BYTE*)thisx, v23);
                }
            }
        }
        if (v43)
        {
            for (nn = 0; nn < (unsigned __int8)unk_4B9985; ++nn)
            {
                if (!*(_BYTE*)(nn + thisx + 2588))
                {
                    for (i1 = rand() % (int)Size; sub_44E484((_BYTE*)thisx, nn, i1); i1 = (int)(i1 + Size + 1) % (int)Size)
                        ;
                    *(_WORD*)(thisx + 2 * nn + 2564) = i1;
                    if (*(_BYTE*)(thisx + 98))
                        *(_BYTE*)(nn + thisx + 2580) = rand() % 4;
                    else
                        *(_BYTE*)(nn + thisx + 2580) = MarkedForDetachment((_BYTE*)(36 * i1 + unk_4B92E0));
                    *(_BYTE*)(nn + thisx + 2588) = 2;
                }
            }
            result = sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
        }
    }
    v35 = 0;
    for (i2 = 0; i2 < (unsigned __int8)unk_4B9985; ++i2)
    {
        result = (*(_BYTE*)(i2 + thisx + 2588) == 2) + v35;
        v35 = result;
    }
    if (v35 == (unsigned __int8)unk_4B9985)
    {
        *(_DWORD*)(thisx + 108) = 9;
        result = thisx;
        *(_BYTE*)(thisx + 2516) = 2;
    }
    for (i3 = 0; i3 < v48; ++i3)
    {
        v16 = *(_BYTE*)(i3 + thisx + 2554);
        wsprintfA(String, "%d>", i3 + 1);
        result = sub_47B91A(160 * (v16 / 4), 56 * (v16 & 3) + 24, String, 0, -1);
    }
    return result;
}

