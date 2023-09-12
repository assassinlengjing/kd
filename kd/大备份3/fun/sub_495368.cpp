#include "sub.h" 
double sub_495368(int a1, double a2, double result)
{
    char* v3; // eax
    int v4; // [esp+8h] [ebp-E0h]
    int v5; // [esp+Ch] [ebp-DCh]
    int v6; // [esp+14h] [ebp-D4h]
    int v7; // [esp+18h] [ebp-D0h]
    double v8; // [esp+24h] [ebp-C4h]
    double v9; // [esp+30h] [ebp-B8h]
    int v10; // [esp+3Ch] [ebp-ACh]
    int v11; // [esp+44h] [ebp-A4h]
    char v12; // [esp+48h] [ebp-A0h]
    int v13; // [esp+4Ch] [ebp-9Ch]
    int v14; // [esp+50h] [ebp-98h]
    int v15; // [esp+54h] [ebp-94h]
    double v17; // [esp+5Ch] [ebp-8Ch]
    int v18; // [esp+68h] [ebp-80h]
    int v19; // [esp+7Ch] [ebp-6Ch]
    double v20; // [esp+80h] [ebp-68h]
    int v21; // [esp+88h] [ebp-60h]
    int v22; // [esp+8Ch] [ebp-5Ch]
    char v23; // [esp+90h] [ebp-58h]
    char v24; // [esp+90h] [ebp-58h]
    char* v25; // [esp+94h] [ebp-54h]
    int v26; // [esp+98h] [ebp-50h]
    int v27; // [esp+9Ch] [ebp-4Ch]
    int v28; // [esp+A0h] [ebp-48h]
    int v29; // [esp+A4h] [ebp-44h]
    int v30; // [esp+A8h] [ebp-40h]
    int v31; // [esp+ACh] [ebp-3Ch]
    int v32; // [esp+B0h] [ebp-38h]
    int v33; // [esp+B8h] [ebp-30h]
    int v34; // [esp+BCh] [ebp-2Ch]
    int v35; // [esp+C4h] [ebp-24h]
    int v36; // [esp+C8h] [ebp-20h]
    int i; // [esp+CCh] [ebp-1Ch]
    int v38; // [esp+D0h] [ebp-18h]
    int v39; // [esp+D0h] [ebp-18h]
    int v40; // [esp+D0h] [ebp-18h]
    int v41; // [esp+D0h] [ebp-18h]
    int v42; // [esp+D0h] [ebp-18h]
    char v43; // [esp+D8h] [ebp-10h]
    char v44; // [esp+D8h] [ebp-10h]
    char v45; // [esp+D8h] [ebp-10h]
    unsigned __int8 v46; // [esp+D8h] [ebp-10h]
    int v47; // [esp+DCh] [ebp-Ch]
    int v48; // [esp+E0h] [ebp-8h]
    char v49; // [esp+E4h] [ebp-4h]

    v25 = sub_426210((char*)unk_4B9B10);
    v38 = -100 * sub_486633((int*)v25, *(_DWORD*)(a1 + 96) / 100, *(_DWORD*)(a1 + 100) / 100);
    if (*(_DWORD*)(a1 + 12) == 7 && (v38 == -102000 || *(_DWORD*)(a1 + 104) > v38))
    {
        *(_DWORD*)(a1 + 16) = 0;
        *(_DWORD*)(a1 + 172) = 0;
        *(_DWORD*)(a1 + 120) = 0;
        *(_DWORD*)(a1 + 128) = 0;
        *(_DWORD*)(a1 + 152) = 0;
        return result;
    }
    *(_DWORD*)(a1 + 120) += *(_DWORD*)(a1 + 144);
    *(_DWORD*)(a1 + 124) += *(_DWORD*)(a1 + 148);
    v32 = *(_DWORD*)(a1 + 120) / *(_DWORD*)(a1 + 132) + *(_DWORD*)(a1 + 96);
    v26 = *(_DWORD*)(a1 + 124) / *(_DWORD*)(a1 + 136) + *(_DWORD*)(a1 + 100);
    v27 = v26 / 100 - (v26 < 0);
    v35 = v26 / 800 - (v26 < 0);
    v47 = sub_4897D0(v25);
    v28 = 8 * sub_4261D0(v25);
    sub_486633((int*)v25, v32 / 100 - (v32 < 0), v27);
    sub_4868C1(v25, v32 / 800 - (v32 < 0), v35);
    if (*(_DWORD*)(a1 + 96) / 800 - v32 / 800 <= 0)
        v15 = v32 / 800 - *(_DWORD*)(a1 + 96) / 800;
    else
        v15 = *(_DWORD*)(a1 + 96) / 800 - v32 / 800;
    v29 = v15 + 1;
    if (*(int*)(a1 + 96) <= 0)
        v14 = -*(_DWORD*)(a1 + 96);
    else
        v14 = *(_DWORD*)(a1 + 96);
    if (v32 <= 0)
        v13 = -v32;
    else
        v13 = v32;
    if (v14 == v13)
        v29 = 0;
    if (v32 - *(_DWORD*)(a1 + 96) <= 0)
        v12 = (v32 - *(_DWORD*)(a1 + 96) >= 0) - 1;
    else
        v12 = 1;
    v48 = 0;
    v33 = *(_DWORD*)(a1 + 96) / 100;
    v30 = *(_DWORD*)(a1 + 100) / 100;
    v34 = *(_DWORD*)(a1 + 104) / -100;
    v49 = sub_4868C1(v25, v33 / 8, v30 / 8);
    for (i = 0; i < v29; ++i)
    {
        v22 = i * 8 * v12 + v33;
        if (i == v29 - 1)
            v22 = v32 / 100 - (v32 < 0);
        v39 = sub_486633((int*)v25, v22, v30);
        v43 = sub_4868C1(v25, v22 / 8, v30 / 8);
        v23 = v43 | v49;
        if (v39 == 1020
            || (!v23 || *(_DWORD*)(a1 + 172)) && v39 - v34 > 2
            || v23 && !*(_DWORD*)(a1 + 172) && v39 - v34 > 8)
        {
            if (!*(_DWORD*)(a1 + 172) || !v23)
                v48 = 1;
            v21 = -8 * v12;
            if (!v21)
            {
                v34 = v39;
                *(_DWORD*)(a1 + 104) = -100 * v39;
            }
            v36 = 800 * (v22 / 8) - 100;
            if (v36 < 0)
                v36 = 100;
            if (v36 / 100 >= v47)
                v36 = 100 * v47 - 100;
            if (v21 > 0)
                v36 += 900;
            if (v22 >= 0)
            {
                if (v22 > v47)
                    v22 = v47;
            }
            else
            {
                v22 = 0;
            }
            while (1)
            {
                if (v22 < 0 || v22 > v47)
                {
                    *(_DWORD*)(a1 + 96) = -32000;
                    *(_DWORD*)(a1 + 120) = 0;
                    *(_DWORD*)(a1 + 144) = 0;
                    *(_DWORD*)(a1 + 128) = 0;
                    *(_DWORD*)(a1 + 152) = 0;
                    return result;
                }
                v22 += v21;
                v40 = sub_486633((int*)v25, v22, v30);
                if (!v21)
                    break;
                v44 = sub_4868C1(v25, v22 / 8, v30 / 8);
                v24 = v44 | v49;
                if (v40 != 1020
                    && (v24 && !*(_DWORD*)(a1 + 172) || v40 - v34 <= 2)
                    && (!v24 || *(_DWORD*)(a1 + 172) || v40 - v34 <= 8))
                {
                    goto LABEL_65;
                }
                v36 = 800 * (v22 / 8) - 100;
                if (v21 > 0)
                    v36 += 900;
                v49 = v44;
            }
            *(_DWORD*)(a1 + 104) = -100 * v40;
            break;
        }
        v49 = v43;
        if (v23 && !*(_DWORD*)(a1 + 172))
        {
            v34 = v39;
            *(_DWORD*)(a1 + 104) = -100 * v39;
        }
    }
LABEL_65:
    if (v48)
    {
        if (*(int*)(a1 + 120) <= 0)
            v11 = (*(_DWORD*)(a1 + 120) >= 0) - 1;
        else
            v11 = 1;
        v32 = v36 - v11;
        if (!*(_DWORD*)(a1 + 172))
            *(_DWORD*)(a1 + 104) = -100 * sub_486633((int*)v25, v32 / 100, v30);
        sub_494754(a1);
    }
    *(_DWORD*)(a1 + 96) = v32;
    v41 = -100 * sub_486633((int*)v25, *(_DWORD*)(a1 + 96) / 100, v27);
    v45 = sub_4868C1(v25, *(_DWORD*)(a1 + 96) / 800, v35);
    v31 = 0;
    if (v26 >= 0 || *(int*)(a1 + 124) >= 0)
    {
        if (v26 < 100 * v28 || *(int*)(a1 + 124) <= 0)
        {
            if (v41 == -102000 || !v45 && *(_DWORD*)(a1 + 104) - v41 > 200 || v45 && *(_DWORD*)(a1 + 104) - v41 > 800)
            {
                v26 = *(_DWORD*)(a1 + 100);
                v31 = 1;
            }
        }
        else
        {
            v26 = 100 * (v28 - 1);
            v31 = 1;
        }
    }
    else
    {
        v26 = 0;
        v31 = 1;
    }
    if (v31)
    {
        sub_49951D((int*)a1);
        *(int*)(a1 + 120) /= 2;
        *(_DWORD*)(a1 + 124) = -*(_DWORD*)(a1 + 124) / 2;
        *(_DWORD*)(a1 + 144) = 0;
        *(_DWORD*)(a1 + 148) = 0;
        *(_DWORD*)(a1 + 8) = 83;
        *(_BYTE*)(a1 + 71) = 0;
        if (*(_DWORD*)(a1 + 172))
            *(_DWORD*)(a1 + 152) = 30;
    }
    *(_DWORD*)(a1 + 100) = v26;
    *(_DWORD*)(a1 + 128) += *(_DWORD*)(a1 + 152);
    *(_DWORD*)(a1 + 104) += *(_DWORD*)(a1 + 128) / *(_DWORD*)(a1 + 140);
    if (*(int*)(a1 + 104) >= 3200
        || *(int*)(a1 + 96) < 0
        || *(_DWORD*)(a1 + 96) >= 100 * v47
        || *(int*)(a1 + 100) < 0
        || *(_DWORD*)(a1 + 100) >= 100 * v28)
    {
        *(_DWORD*)(a1 + 96) = -32000;
        *(_DWORD*)(a1 + 100) = -24000;
        *(_DWORD*)(a1 + 16) = 0;
        return result;
    }
    v42 = -100 * sub_486633((int*)v25, *(_DWORD*)(a1 + 96) / 100, *(_DWORD*)(a1 + 100) / 100);
    v46 = sub_4868C1(v25, *(_DWORD*)(a1 + 96) / 800, *(_DWORD*)(a1 + 100) / 800);
    if (*(_DWORD*)(a1 + 104) > v42 && *(_DWORD*)(a1 + 172))
    {
        switch (*(_BYTE*)(a1 + 72))
        {
        case 0:
            sub_43FFC3((int*)unk_4BDB28, unk_4B9A78, -1, 100, 100, 0);
            break;
        case 1:
        case 5:
        case 7:
        case 0xB:
            sub_43FFC3((int*)unk_4BDB28, unk_4B9A7C, -1, 100, 100, 0);
            break;
        case 2:
        case 4:
        case 0xD:
            sub_43FFC3((int*)unk_4BDB28, unk_4B9A80, -1, 100, 100, 0);
            break;
        case 3:
            sub_43FFC3((int*)unk_4BDB28, unk_4B9A84, -1, 100, 100, 0);
            break;
        case 6:
            sub_43FFC3((int*)unk_4BDB28, unk_4B9A8C, -1, 100, 100, 0);
            break;
        case 8:
        case 9:
        case 0xA:
            sub_43FFC3((int*)unk_4BDB28, unk_4B9A14, -1, 100, 100, 0);
            break;
        case 0xC:
            sub_43FFC3((int*)unk_4BDB28, unk_4B9ACC, -1, 100, 100, 0);
            break;
        default:
            break;
        }
        *(_DWORD*)(a1 + 8) = 83;
        sub_4995EB((_WORD*)a1);
        sub_49951D((int*)a1);
        if ((*(_BYTE*)(a1 + 72) == 11 || *(_BYTE*)(a1 + 72) == 13) && *(_DWORD*)(a1 + 12) != 8)
        {
            if (*(_DWORD*)(a1 + 56) && sub_41BA53(*(_DWORD*)(a1 + 56), 0x8Au, 0))
            {
                *(_DWORD*)(a1 + 84) = 0;
            }
            else if (*(int*)(a1 + 84) > 0)
            {
                *(_DWORD*)(a1 + 84) -= 20;
                if (*(int*)(a1 + 84) < 0)
                    *(_DWORD*)(a1 + 84) = 0;
            }
        }
        *(_DWORD*)(a1 + 104) = v42;
        *(_DWORD*)(a1 + 144) = 0;
        *(_DWORD*)(a1 + 148) = 0;
        if (*(_BYTE*)(a1 + 72) == 12)
        {
            *(_DWORD*)(a1 + 168) = 0;
            *(_BYTE*)(a1 + 71) = 0;
            v5 = *(_DWORD*)(a1 + 100) / 800;
            v4 = *(_DWORD*)(a1 + 96) / 800;
            v3 = sub_426210((char*)unk_4B9B10);
            sub_4897EE(v3, a2, v4, v5);
            v17 = result;
            if (result == 0.0 && !*(_DWORD*)(a1 + 128))
            {
                if (*(int*)(a1 + 120) <= 0)
                    v10 = -*(_DWORD*)(a1 + 120);
                else
                    v10 = *(_DWORD*)(a1 + 120);
                *(_DWORD*)(a1 + 128) = v10;
            }
            result = (double)*(int*)(a1 + 128);
            sub_4A3090(result, result, (double)*(int*)(a1 + 120));
            v20 = v17 + v17 + a2;
            if (*(_DWORD*)(a1 + 120))
            {
                v9 = (double)(100 * *(_DWORD*)(a1 + 120));
                v18 = (__int64)(v9 / cos(a2));
            }
            else
            {
                v8 = (double)(100 * *(_DWORD*)(a1 + 128));
                v18 = (__int64)(v8 / sin(a2));
            }
            *(_DWORD*)(a1 + 120) = (__int64)(cos(v20) * (double)v18 / 100.0);
            *(_DWORD*)(a1 + 128) = (__int64)(sin(v20) * (double)v18 / 100.0);
            v19 = (__int64)(sin(3.1415926535 - v17 - v20) * (double)v18);
            if (v19 <= 0)
                v7 = -v19;
            else
                v7 = v19;
            if (v7 >= 3000)
            {
                *(_DWORD*)(a1 + 120) = 85 * *(_DWORD*)(a1 + 120) / 100;
                *(_DWORD*)(a1 + 124) = 85 * *(_DWORD*)(a1 + 124) / 100;
                *(_DWORD*)(a1 + 128) = -85 * *(_DWORD*)(a1 + 128) / 100;
                *(_DWORD*)(a1 + 152) = 30;
                *(_DWORD*)(a1 + 172) = 1;
            }
            else
            {
                *(_DWORD*)(a1 + 128) = 0;
                *(_DWORD*)(a1 + 152) = 0;
                *(_DWORD*)(a1 + 172) = 0;
                *(_DWORD*)(a1 + 76) = 1;
            }
        }
        else if (*(unsigned __int8*)(a1 + 180) >= 2u || *(_BYTE*)(a1 + 72) == 10)
        {
            if (*(unsigned __int8*)(a1 + 72) < 2u
                || *(unsigned __int8*)(a1 + 72) >= 4u && *(unsigned __int8*)(a1 + 72) <= 7u
                || *(_BYTE*)(a1 + 72) == 11
                || *(_BYTE*)(a1 + 72) == 12)
            {
                *(_DWORD*)(a1 + 120) = 0;
                *(_DWORD*)(a1 + 128) = 0;
                *(_DWORD*)(a1 + 152) = 0;
                *(_DWORD*)(a1 + 16) = 0;
                return result;
            }
            if (*(unsigned __int8*)(a1 + 72) < 4u || *(_BYTE*)(a1 + 72) == 13)
            {
                if (*(_DWORD*)(a1 + 76) || !*(_DWORD*)(a1 + 120))
                {
                    *(_DWORD*)(a1 + 120) = 0;
                    *(_DWORD*)(a1 + 128) = 0;
                    *(_DWORD*)(a1 + 152) = 0;
                    *(_DWORD*)(a1 + 16) = 0;
                    *(_BYTE*)(a1 + 68) = 0;
                    *(_BYTE*)(a1 + 71) = 0;
                    return result;
                }
                *(_DWORD*)(a1 + 76) = 1;
                *(_DWORD*)(a1 + 172) = 0;
                *(_DWORD*)(a1 + 128) = 0;
                *(_DWORD*)(a1 + 152) = 0;
            }
            else
            {
                *(_DWORD*)(a1 + 128) = 0;
                *(_DWORD*)(a1 + 152) = 0;
                *(_DWORD*)(a1 + 172) = 0;
            }
        }
        else
        {
            ++* (_BYTE*)(a1 + 180);
            if ((*(_BYTE*)(a1 + 72) == 7 || *(_BYTE*)(a1 + 72) == 8 || *(_BYTE*)(a1 + 72) == 9)
                && *(_BYTE*)(a1 + 180) == 1)
            {
                ++* (_BYTE*)(a1 + 180);
            }
            if (*(_BYTE*)(a1 + 72) == 8 || *(_BYTE*)(a1 + 72) == 9)
            {
                *(_DWORD*)(a1 + 120) = 90 * *(_DWORD*)(a1 + 120) / 100;
                *(_DWORD*)(a1 + 124) = 75 * *(_DWORD*)(a1 + 124) / 100;
                *(_DWORD*)(a1 + 128) = -250;
            }
            else
            {
                *(_DWORD*)(a1 + 120) = 75 * *(_DWORD*)(a1 + 120) / 100;
                *(int*)(a1 + 124) /= 2;
                *(_DWORD*)(a1 + 128) = 50 * *(unsigned __int8*)(a1 + 180) - 300;
            }
            *(_DWORD*)(a1 + 152) = 30;
            *(_DWORD*)(a1 + 172) = 1;
            if ((*(unsigned __int8*)(a1 + 72) < 2u
                || *(unsigned __int8*)(a1 + 72) >= 4u && *(unsigned __int8*)(a1 + 72) <= 7u
                || *(_BYTE*)(a1 + 72) == 11
                || *(_BYTE*)(a1 + 72) == 12)
                && *(unsigned __int8*)(a1 + 180) >= 2u)
            {
                *(_DWORD*)(a1 + 168) = 0;
                *(_DWORD*)(a1 + 16) = 3;
                *(_BYTE*)(a1 + 68) = 0;
                *(_BYTE*)(a1 + 71) = 0;
            }
        }
    }
    if (v42 - *(_DWORD*)(a1 + 104) >= 800 && !*(_DWORD*)(a1 + 172))
    {
        *(_DWORD*)(a1 + 172) = 1;
        *(_DWORD*)(a1 + 152) = 30;
        *(_BYTE*)(a1 + 180) = 0;
    }
    if (v42 - *(_DWORD*)(a1 + 104) <= 0)
        v6 = *(_DWORD*)(a1 + 104) - v42;
    else
        v6 = v42 - *(_DWORD*)(a1 + 104);
    if (v6 <= 800 && !*(_DWORD*)(a1 + 172))
    {
        *(_DWORD*)(a1 + 104) = v42;
        if (v46)
        {
            if ((v46 & 1) == 1)
            {
                *(_DWORD*)(a1 + 120) -= 3 * (v46 + 1);
            }
            else if ((v46 & 1) == 0)
            {
                *(_DWORD*)(a1 + 120) += 3 * (v46 - 1);
            }
        }
    }
    return result;
}
