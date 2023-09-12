#include "sub.h" 
unsigned __int16* sub_46E35A(int thisx, double a2, double a3, double a4)
{
    int v4; // eax
    int v5; // esi
    int v6; // esi
    int v7; // esi
    int v8; // ecx
    int v9; // edx
    int v10; // eax
    int v11; // esi
    int v12; // ecx
    int v13; // edx
    unsigned __int16* result; // eax
    int v16; // [esp+Ch] [ebp-CCh]
    int v17; // [esp+10h] [ebp-C8h]
    int v18; // [esp+14h] [ebp-C4h]
    int v19; // [esp+18h] [ebp-C0h]
    int jj; // [esp+1Ch] [ebp-BCh]
    int v21; // [esp+24h] [ebp-B4h]
    int v22; // [esp+28h] [ebp-B0h]
    char v23; // [esp+30h] [ebp-A8h]
    int v24; // [esp+34h] [ebp-A4h]
    int v25; // [esp+38h] [ebp-A0h]
    int v26; // [esp+3Ch] [ebp-9Ch]
    _WORD* v27; // [esp+40h] [ebp-98h]
    unsigned int v28; // [esp+44h] [ebp-94h]
    int v29; // [esp+48h] [ebp-90h]
    int v30; // [esp+4Ch] [ebp-8Ch]
    int v31; // [esp+50h] [ebp-88h]
    char v32; // [esp+54h] [ebp-84h]
    int k; // [esp+58h] [ebp-80h]
    int v34; // [esp+5Ch] [ebp-7Ch]
    int v35; // [esp+60h] [ebp-78h]
    int v36; // [esp+68h] [ebp-70h]
    int v37; // [esp+6Ch] [ebp-6Ch]
    int v38; // [esp+70h] [ebp-68h]
    int v39; // [esp+78h] [ebp-60h]
    char* v40; // [esp+7Ch] [ebp-5Ch]
    _BYTE* v41; // [esp+80h] [ebp-58h]
    int v42; // [esp+84h] [ebp-54h]
    int v43; // [esp+88h] [ebp-50h]
    int v44; // [esp+8Ch] [ebp-4Ch]
    int v45; // [esp+90h] [ebp-48h]
    int j; // [esp+94h] [ebp-44h]
    int i; // [esp+98h] [ebp-40h]
    int m; // [esp+98h] [ebp-40h]
    int n; // [esp+98h] [ebp-40h]
    int ii; // [esp+98h] [ebp-40h]
    int v51[14]; // [esp+9Ch] [ebp-3Ch] BYREF
    int v52; // [esp+D4h] [ebp-4h]

    v52 = (unsigned __int8)byte_4B9986;
    for (i = 0; i < v52; ++i)
        sub_477F0C(i);
    for (j = 0; j < 4; ++j)
    {
        v39 = 0;
        v38 = 0;
        v37 = 0;
        v35 = 0;
        v45 = 0;
        v44 = 0;
        v40 = (char*)(thisx + *(unsigned __int8*)(j + thisx + 2612) + 2 * j + 2580);
        v41 = (_BYTE*)(thisx + j + 2596);
        v42 = *(_DWORD*)(thisx + 2368) + 1;
        v43 = *(unsigned __int8*)(j + thisx + 2616) - 1;
        v4 = *(unsigned __int8*)(thisx + 2516);
        if (!*(_BYTE*)(thisx + 2516))
        {
            if (*(_BYTE*)(j + thisx + 2616) || *(unsigned __int8*)(j + thisx + 2612) >= v42)
            {
                if (v43 >= 0)
                {
                    if (*(unsigned __int8*)(j + thisx + 2612) < v42)
                    {
                        LOBYTE(v4) = *(_BYTE*)(j + thisx + 2616) - 1;
                        v7 = sub_476D78(v4);
                        LOBYTE(v8) = v43;
                        v38 = v7 - sub_476D29(v8);
                        LOBYTE(v9) = v43;
                        v10 = sub_476CDA(v9);
                        v11 = v10;
                        LOBYTE(v10) = v43;
                        v37 = v11 - sub_476C8B(v10);
                        LOBYTE(v12) = v43;
                        v35 = sub_476DC7(v12, 0);
                        LOBYTE(v13) = v43;
                        v4 = sub_476DC7(v13, 2);
                        v44 = v4;
                    }
                    LOBYTE(v4) = v43;
                    v45 = sub_476DC7(v4, 1);
                }
            }
            else
            {
                if (!*(_BYTE*)(j + thisx + 2612) || *(_BYTE*)(thisx + 2 * j + 2588) == 2)
                {
                    v32 = -1;
                    v34 = 0;
                    for (k = 0; k < 6; ++k)
                    {
                        if (*(_BYTE*)(j + thisx + 2612) != 1 || k != *(unsigned __int8*)(thisx + 2 * j + 2580))
                        {
                            v30 = 28 * k + thisx + 244 * j + 1392;
                            v5 = *(__int16*)(v30 + 8);
                            v6 = v5 * ((unsigned __int8)sub_426670((char*)(36 * *(_DWORD*)v30 + dword_4B92E0)) + v5);
                            v31 = v6 / sub_47075A((_DWORD*)v30);
                            if (v31 > v34 || v31 == v34 && rand() % 2)
                            {
                                v32 = k;
                                v34 = v31;
                            }
                        }
                    }
                    v38 = 7;
                    *v40 = v32;
                    v39 = 1;
                }
                if (!*(_BYTE*)(j + thisx + 2612) || *(_BYTE*)(thisx + 2 * j + 2588) == 3)
                    v35 = 1;
            }
        }
        if (v35 && (unsigned __int8)*v40 < 6u)
        {
            if ((*(_BYTE*)(j + thisx + 2612) != 1 || *(unsigned __int8*)(thisx + 2 * j + 2580) != (unsigned __int8)*v40)
                && *(unsigned __int8*)(j + thisx + 2612) <= *(int*)(thisx + 2368))
            {
                sub_43FFC3((int*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
                *(_WORD*)(thisx + 2 * (*(unsigned __int8*)(j + thisx + 2612) + 2 * j) + 2564) = *(_WORD*)(thisx
                    + 244 * j
                    + 1392
                    + 28
                    * *(unsigned __int8*)(j + thisx + 2580));
                *(_BYTE*)(thisx + (unsigned __int8)(*(_BYTE*)(j + thisx + 2612))++ + 2 * j + 2588) = 1;
                if (*(_BYTE*)(j + thisx + 2612) == 1)
                {
                    *(_BYTE*)(thisx + 2 * j + 2581) = *v40;
                    *(_BYTE*)(thisx + 2 * j + 2589) = 0;
                }
            }
        }
        else if (v45)
        {
            if (*(_BYTE*)(j + thisx + 2612))
            {
                sub_43FFC3((int*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
                *(_BYTE*)(thisx + (unsigned __int8)-- * (_BYTE*)(j + thisx + 2612) + 2 * j + 2588) = 4;
                v39 = 1;
            }
        }
        else if (v44)
        {
            sub_43FFC3((int*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
            v39 = 1;
            *v41 = ((unsigned __int8)*v41 + 1) % 3;
            *(_BYTE*)(j + thisx + 13092) = 0;
        }
        else if (v38)
        {
            sub_43FFC3((int*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
            *v40 = ((unsigned __int8)*v40 + v38 + 7) % 7;
            *(_BYTE*)(j + thisx + 13092) = 0;
            v39 = 1;
        }
        else if (v37 && *v41 == 2)
        {
            *(_BYTE*)(j + thisx + 13092) = (*(unsigned __int8*)(j + thisx + 13092) + v37 + 4) % 4;
            sub_43FFC3((int*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
            v39 = 1;
        }
        v36 = 160 * (j / 2) + 20;
        if (*(_BYTE*)(thisx + 2516) != 2)
        {
            for (m = 0;
                m < 2
                && (m <= 0 || *(_DWORD*)(thisx + 2368))
                && (!*(_DWORD*)(thisx + 2368) || m <= *(unsigned __int8*)(j + thisx + 2612));
                ++m)
            {
                v28 = *(unsigned __int8*)(thisx + m + 2 * j + 2580);
                v24 = 0;
                LOWORD(v26) = 0;
                v23 = 0;
                v25 = 0;
                if (v28 < 6)
                {
                    v24 = 28 * v28 + thisx + 244 * j + 1392;
                    v26 = *(_DWORD*)v24;
                    v23 = *(_BYTE*)(v24 + 4);
                    v25 = (unsigned __int8)sub_401710((_BYTE*)(dword_4B92E0 + 36 * *(_DWORD*)v24));
                }
                sub_4A1307(8 * (m + 2 * j) + 4952720, (Concurrency::details::HardwareAffinity*)(8 * j + 4952656));
                sub_485E5A((int)dword_4B93A4 + 24 * v25, (unsigned __int16*)(8 * (m + 2 * j) + 4952720));
                v27 = (_WORD*)(thisx + 612 * (j + 4 * m) + 2628);
                sub_475010(v27, v26);
                sub_474FF0((char*)v27, v23);
                sub_475050((char*)v27, m + 2 * j);
                sub_41D84A((int)v27);
                sub_42371C((int)v27);
                if (v24 && *(_BYTE*)(v24 + 10))
                {
                    sub_475D90((_BYTE*)(thisx + 196 * (j + 4 * m) + 7524), *(_BYTE*)(v24 + 10) - 1);
                    sub_41F24C((int)v27, (Concurrency::details::SchedulerProxy*)(thisx + 196 * (j + 4 * m) + 7524));
                }
                else
                {
                    sub_41F6DE((int*)v27);
                }
                v29 = *(unsigned __int8*)(thisx + m + 2 * j + 2588);
                if (*(_BYTE*)(j + thisx + 2612)
                    && m == 1
                    && *(unsigned __int8*)(thisx + 2 * j + 2580) == *(unsigned __int8*)(thisx + 2 * j + 2581)
                    || !v24)
                {
                    v36 += 320;
                }
                if (*(_BYTE*)(thisx + m + 2 * j + 2588))
                {
                    switch (v29)
                    {
                    case 1:
                        v22 = sub_426090((int*)v27);
                        if (v22 <= -3200)
                            *(_BYTE*)(thisx + m + 2 * j + 2588) = 2;
                        sub_475D30((int*)v27, v22 - 400);
                        sub_426050((int*)v27, 10);
                        break;
                    case 2:
                        *(_BYTE*)(thisx + m + 2 * j + 2588) = 3;
                        break;
                    case 3:
                        sub_475D30((int*)v27, 34000);
                        break;
                    case 4:
                        v21 = sub_426090((int*)v27);
                        if (v21 - 100 * v36 <= 500)
                            *(_BYTE*)(thisx + m + 2 * j + 2588) = 0;
                        sub_475D30((int*)(int*)v27, v21 - 500);
                        sub_426050((int*)v27, 10);
                        break;
                    }
                }
                else
                {
                    sub_475D30((int*)v27, 100 * v36);
                    sub_475D50((int*)v27, 100 * (112 * (j % 2) + 116));
                    sub_475D10((int*)v27, 5);
                    sub_426050((int*)v27, 5);
                }
                sub_475D70((int*)v27, 0);
                sub_4757B0((int*)v27, 0);
                sub_408F50((int)v27, a2, a3, a4, 0);
            }
        }
        if (v39)
            sub_46F18C(thisx, j);
    }
    sub_49C15E((int)v51);
    v51[0] = dword_4B9248;
    result = sub_49AB05((int)byte_4BDC60, v51);
    for (n = 0; n < 8; ++n)
    {
        if (n < 4)
            goto LABEL_92;
        if (!*(_DWORD*)(thisx + 2368))
            break;
        result = (unsigned __int16*)(n + thisx);
        if (*(_BYTE*)(n + thisx + 2608))
            LABEL_92:
        sub_40230C(thisx + 612 * n + 2628);
    }
    if (!*(_BYTE*)(thisx + 2516))
    {
        for (ii = 0; ii < 4 * *(_DWORD*)(thisx + 2368) + 4; ++ii)
        {
            if (*(_BYTE*)((ii >= 4) + 2 * (ii % 4) + thisx + 2588) != 3)
            {
                *(_DWORD*)(thisx + 2528) = 0;
                break;
            }
        }
        result = (unsigned __int16*)(4 * *(_DWORD*)(thisx + 2368) + 4);
        if ((unsigned __int16*)ii == result)
        {
            result = (unsigned __int16*)thisx;
            if ((int)++ * (_DWORD*)(thisx + 2528) > 60)
            {
                memcpy((void*)(thisx + 2588), (const void*)(thisx + 2580), 8u);
                for (jj = 0; jj < (unsigned __int8)byte_4B9985; ++jj)
                {
                    v19 = *(unsigned __int8*)(thisx + ((*(_DWORD*)(thisx + 2368) == 0) + 1) * jj + 2580);
                    v17 = thisx + 244 * (jj / (*(_DWORD*)(thisx + 2368) + 1)) + 1392;
                    v16 = 28 * v19 + v17;
                    *(_BYTE*)(v17 + jj % (*(_DWORD*)(thisx + 2368) + 1) + 240) = v19;
                    v18 = *(_DWORD*)v16;
                    *(_DWORD*)(v16 + 16) = 1;
                    *(_WORD*)(thisx + 2 * jj + 2564) = v18;
                    word_4B99CE[jj] = *(_WORD*)(v16 + 8);
                    *(_BYTE*)(jj + thisx + 2580) = *(_BYTE*)(v16 + 4);
                    *(_BYTE*)(jj + thisx + 2403) = *(_BYTE*)(v16 + 10);
                    *(_BYTE*)(jj + thisx + 2411) = *(_BYTE*)(v16 + 11);
                }
                *(_BYTE*)(thisx + 29) = *(_BYTE*)(thisx + *(unsigned __int8*)(thisx + 2476) + 2478);
                byte_4B9999 = *(_BYTE*)(thisx + 29);
                result = (unsigned __int16*)thisx;
                *(_DWORD*)(thisx + 108) = 11;
                *(_BYTE*)(thisx + 2516) = 2;
            }
        }
    }
    return result;
}

