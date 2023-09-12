#include "sub.h" 
int sub_457F11(int thisx)
{
    int v1; // ecx
    int v2; // esi
    int v3; // edx
    int v4; // eax
    int v5; // esi
    int v6; // ecx
    int v7; // eax
    int v8; // ecx
    int result; // eax
    char* v10; // eax
    char v11; // al
    CHAR v13[256]; // [esp+Ch] [ebp-424h] BYREF
    CHAR v14[256]; // [esp+10Ch] [ebp-324h] BYREF
    CHAR v15[256]; // [esp+214h] [ebp-21Ch] BYREF
    int v16; // [esp+314h] [ebp-11Ch]
    CHAR v17[64]; // [esp+318h] [ebp-118h] BYREF
    int v18; // [esp+358h] [ebp-D8h]
    CHAR String[64]; // [esp+35Ch] [ebp-D4h] BYREF
    _BYTE v20[4]; // [esp+39Ch] [ebp-94h]
    int j; // [esp+3A0h] [ebp-90h]
    CHAR v22[4]; // [esp+3A4h] [ebp-8Ch] BYREF
    int m; // [esp+3A8h] [ebp-88h]
    int k; // [esp+3ACh] [ebp-84h]
    CHAR String1; // [esp+3B0h] [ebp-80h] BYREF
    char v26; // [esp+3B1h] [ebp-7Fh]
    char v27; // [esp+3B2h] [ebp-7Eh]
    BOOL v28; // [esp+3B4h] [ebp-7Ch]
    BOOL v29; // [esp+3B8h] [ebp-78h]
    char* v30; // [esp+3BCh] [ebp-74h]
    int v31; // [esp+3C0h] [ebp-70h]
    int v32; // [esp+3C4h] [ebp-6Ch]
    int v33; // [esp+3C8h] [ebp-68h]
    int v34; // [esp+3CCh] [ebp-64h]
    int i; // [esp+3D0h] [ebp-60h]
    unsigned __int8 v36; // [esp+3D4h] [ebp-5Ch]
    unsigned __int8 v37; // [esp+3D5h] [ebp-5Bh]
    int v38; // [esp+3D8h] [ebp-58h]
    int v39; // [esp+3DCh] [ebp-54h]
    int v40; // [esp+3E0h] [ebp-50h]
    int v41; // [esp+3E4h] [ebp-4Ch]
    int n; // [esp+3E8h] [ebp-48h]
    int v43; // [esp+3ECh] [ebp-44h]
    int v44; // [esp+3F0h] [ebp-40h]
    int v45; // [esp+3F4h] [ebp-3Ch]
    int v46[14]; // [esp+3F8h] [ebp-38h] BYREF

    LOBYTE(v44) = *(_BYTE*)(thisx + 2568);
    LOBYTE(v45) = *(_BYTE*)(thisx + 2566);
    sub_477F0C(v44);
    v41 = 0;
    v40 = 0;
    if (!*(_BYTE*)(thisx + 2516))
    {
        LOBYTE(v1) = v44;
        v2 = sub_476D78(v1);
        LOBYTE(v3) = v44;
        v4 = sub_476D29(v3);
        v41 = v2 - v4;
        LOBYTE(v4) = v44;
        v5 = sub_476CDA(v4);
        LOBYTE(v6) = v44;
        v40 = v5 - sub_476C8B(v6);
    }
    v7 = *(unsigned __int8*)(thisx + 2516);
    if (!*(_BYTE*)(thisx + 2516))
    {
        if (v41 || v40)
        {
            sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
            if ((_BYTE)v45)
            {
                if ((unsigned __int8)v45 == 1)
                {
                    for (i = 0; i < 2; ++i)
                        *(&v36 + i) = sub_45943B((_BYTE*)(thisx + 76 * (unsigned __int8)v44 + 11816), i) - 1;
                    if (*(_DWORD*)(thisx + 2528))
                    {
                        if (*(_DWORD*)(thisx + 2528) == 1)
                        {
                            v34 = 31;
                            LOBYTE(v33) = v36 + 1;
                            if ((unsigned __int8)(v36 + 1) == 2)
                            {
                                v34 = 29;
                            }
                            else if ((unsigned __int8)v33 == 4
                                || (unsigned __int8)v33 == 6
                                || (unsigned __int8)v33 == 9
                                || (unsigned __int8)v33 == 11)
                            {
                                v34 = 30;
                            }
                            v37 = (v34 + v40 + v37) % v34;
                        }
                    }
                    else
                    {
                        v36 = (v36 + v40 + 12) % 12;
                    }
                    sub_459461((_BYTE*)(thisx + 76 * (unsigned __int8)v44 + 11816), v36 + 1, v37 + 1);
                }
                else if ((unsigned __int8)v45 == 2)
                {
                    LOBYTE(v32) = ((unsigned __int8)sub_475EB0((char*)thisx + 76 * (unsigned __int8)v44 + 11816) + v40 + 4) % 4;
                    sub_475830((_BYTE*)(thisx + 76 * (unsigned __int8)v44 + 11816), v32);
                }
                else if ((unsigned __int8)v45 == 3 && v41)
                {
                    *(_DWORD*)(thisx + 2528) = *(_DWORD*)(thisx + 2528) == 0;
                }
                else if ((unsigned __int8)v45 == 4 && v41)
                {
                    *(_DWORD*)(thisx + 2528) = *(_DWORD*)(thisx + 2528) == 0;
                }
            }
            else
            {
                v39 = v41 + *(_DWORD*)(thisx + 2528);
                v38 = v40 + *(_DWORD*)(thisx + 2532);
                if (v39 < 0)
                {
                    if (v38)
                        v39 = 10;
                    else
                        v39 = 11;
                }
                if (v38 < 0)
                    v38 = 5;
                if (v39 <= 11 || v38)
                {
                    if (v39 > 10 && v38 > 0 && v38 < 6)
                    {
                        if (v40)
                            v39 = 10;
                        if (v41)
                            v39 = 0;
                    }
                }
                else
                {
                    v39 = 0;
                }
                if (v38 > 5)
                    v38 = 0;
                *(_DWORD*)(thisx + 2528) = v39;
                *(_DWORD*)(thisx + 2532) = v38;
            }
        }
        else
        {
            LOBYTE(v7) = v44;
            if (sub_476DC7(v7, 0))
            {
                sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
                if ((_BYTE)v45)
                {
                    switch ((unsigned __int8)v45)
                    {
                    case 1u:
                        if (++ * (_DWORD*)(thisx + 2528) == 2)
                        {
                            ++* (_WORD*)(thisx + 2566);
                            sub_4579E8(thisx, 2);
                        }
                        break;
                    case 2u:
                        ++ * (_WORD*)(thisx + 2566);
                        *(_DWORD*)(thisx + 2528) = 0;
                        sub_4579E8(thisx, 2);
                        break;
                    case 3u:
                        if (!*(_DWORD*)(thisx + 2528))
                        {
                            sub_45948C(thisx + 76 * *(unsigned __int16*)(thisx + 2568) + 11816);
                            *(_DWORD*)(thisx + 108) = 14;
                            *(_BYTE*)(thisx + 2516) = 2;
                            *(_BYTE*)(thisx + 2562) = 0;
                            result = thisx;
                            *(_WORD*)(thisx + 2566) = 0;
                            return result;
                        }
                        if (*(_DWORD*)(thisx + 2528) == 1)
                        {
                            --* (_WORD*)(thisx + 2566);
                            *(_DWORD*)(thisx + 2528) = 0;
                            sub_4579E8(thisx, -1);
                        }
                        break;
                    case 4u:
                        if (*(_DWORD*)(thisx + 2528))
                        {
                            if (*(_DWORD*)(thisx + 2528) == 1)
                            {
                                *(_BYTE*)(thisx + 2562) = 3;
                                *(_DWORD*)(thisx + 108) = 14;
                                result = thisx;
                                *(_BYTE*)(thisx + 2516) = 2;
                                return result;
                            }
                        }
                        else
                        {
                            *(_WORD*)(thisx + 2566) = 0;
                            sub_4579E8(thisx, -1);
                        }
                        break;
                    }
                }
                else
                {
                    v30 = sub_4266D0((char*)(thisx + 76 * (unsigned __int8)v44 + 11816));
                    LOBYTE(v31) = 2 * *(_WORD*)(thisx + 2570);
                    if (*(int*)(thisx + 2528) >= 10 || *(int*)(thisx + 2532) >= 6)
                    {
                        if (*(int*)(thisx + 2528) < 10 || *(_DWORD*)(thisx + 2532))
                        {
                            if (*(_DWORD*)(thisx + 2528) == 10 && *(_DWORD*)(thisx + 2532) == 1)
                            {
                                memcpy(&v30[(unsigned __int8)v31], &unk_4B265C, 2u);
                                if (++ * (_WORD*)(thisx + 2570) == 5)
                                    *(_WORD*)(thisx + 2570) = 4;
                            }
                            else if (*(_DWORD*)(thisx + 2528) == 10 && *(_DWORD*)(thisx + 2532) == 2)
                            {
                                *(_WORD*)(thisx + 2564) = *(_WORD*)(thisx + 2564) == 0;
                                sub_4579E8(thisx, 0);
                            }
                            else if (*(_DWORD*)(thisx + 2528) == 10 && *(_DWORD*)(thisx + 2532) == 3)
                            {
                                if (*(unsigned __int16*)(thisx + 2570) < 4u)
                                    ++* (_WORD*)(thisx + 2570);
                            }
                            else if (*(_DWORD*)(thisx + 2528) == 10 && *(_DWORD*)(thisx + 2532) == 4)
                            {
                                if (*(_WORD*)(thisx + 2570))
                                    --* (_WORD*)(thisx + 2570);
                            }
                            else if (*(_DWORD*)(thisx + 2528) == 10 && *(_DWORD*)(thisx + 2532) == 5)
                            {
                                wsprintfA(v22, &byte_4B2660);
                                for (j = 0; j < 5 && v30[2 * j] == v22[0] && v30[2 * j + 1] == v22[1]; ++j)
                                    ;
                                if (j < 5)
                                {
                                    ++* (_WORD*)(thisx + 2566);
                                    *(_DWORD*)(thisx + 2528) = 0;
                                    sub_4579E8(thisx, 2);
                                }
                            }
                        }
                        else
                        {
                            v28 = *(_DWORD*)(thisx + 2528) == 10;
                            v29 = *(_DWORD*)(thisx + 2528) == 11;
                            String1 = v30[(unsigned __int8)v31];
                            v26 = v30[(unsigned __int8)v31 + 1];
                            v27 = 0;
                            if (!lstrcmpiA(&String1, &byte_4B2658) && (unsigned __int8)v31 > 1u)
                            {
                                LOBYTE(v31) = v31 - 2;
                                String1 = v30[(unsigned __int8)v31];
                                v26 = v30[(unsigned __int8)v31 + 1];
                                v27 = 0;
                            }
                            if (v28)
                            {
                                for (k = 0; k < 81 && (byte_4B4530[3 * k] != String1 || byte_4B4531[3 * k] != v26); ++k)
                                    ;
                                if (k < 81)
                                {
                                    memcpy(&v30[(unsigned __int8)v31], &byte_4B443C[3 * k], 2u);
                                    if ((unsigned __int8)v31 / 2 == *(_WORD*)(thisx + 2570))
                                        ++* (_WORD*)(thisx + 2570);
                                    if (*(_WORD*)(thisx + 2570) == 5)
                                        *(_WORD*)(thisx + 2570) = 4;
                                }
                            }
                            else if (v29)
                            {
                                for (m = 0; m < 10 && (byte_4B4644[3 * m] != String1 || byte_4B4645[3 * m] != v26); ++m)
                                    ;
                                if (m < 10)
                                {
                                    memcpy(&v30[(unsigned __int8)v31], &byte_4B4624[3 * m], 2u);
                                    if ((unsigned __int8)v31 / 2 == *(_WORD*)(thisx + 2570))
                                        ++* (_WORD*)(thisx + 2570);
                                    if (*(_WORD*)(thisx + 2570) == 5)
                                        *(_WORD*)(thisx + 2570) = 4;
                                }
                            }
                        }
                    }
                    else
                    {
                        memcpy(
                            &v30[(unsigned __int8)v31],
                            &byte_4B0710[180 * *(unsigned __int16*)(thisx + 2564)
                            + 30 * *(_DWORD*)(thisx + 2532)
                            + 3 * *(_DWORD*)(thisx + 2528)],
                            2u);
                        if (++ * (_WORD*)(thisx + 2570) == 5)
                            *(_WORD*)(thisx + 2570) = 4;
                    }
                }
            }
            else
            {
                LOBYTE(v8) = v44;
                if (sub_476DC7(v8, 1))
                {
                    sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
                    if ((_BYTE)v45)
                    {
                        switch ((unsigned __int8)v45)
                        {
                        case 1u:
                            if (*(_DWORD*)(thisx + 2528))
                            {
                                *(_DWORD*)(thisx + 2528) = 0;
                                sub_459461((_BYTE*)(thisx + 76 * (unsigned __int8)v44 + 11816), -1, 1);
                            }
                            else
                            {
                                *(_WORD*)(thisx + 2566) = 0;
                                *(_WORD*)(thisx + 2570) = 0;
                                *(_DWORD*)(thisx + 2528) = 0;
                                *(_DWORD*)(thisx + 2532) = 0;
                                sub_4579E8(thisx, -1);
                            }
                            break;
                        case 2u:
                            -- * (_WORD*)(thisx + 2566);
                            *(_DWORD*)(thisx + 2528) = 1;
                            sub_4579E8(thisx, -1);
                            break;
                        case 3u:
                            -- * (_WORD*)(thisx + 2566);
                            *(_DWORD*)(thisx + 2528) = 0;
                            sub_4579E8(thisx, -1);
                            break;
                        }
                    }
                    else if (*(_WORD*)(thisx + 2570))
                    {
                        --* (_WORD*)(thisx + 2570);
                    }
                    else
                    {
                        *(_WORD*)(thisx + 2566) = 4;
                        *(_DWORD*)(thisx + 2528) = 0;
                        *(_DWORD*)(thisx + 2532) = 0;
                        sub_4579E8(thisx, -1);
                    }
                }
            }
        }
    }
    LOBYTE(v45) = *(_BYTE*)(thisx + 2566);
    sub_49C15E((int)v46);
    v46[1] = 0;
    v46[2] = 0;
    v46[0] = dword_4B9248;
    sub_49AB05((int)byte_4BDC60, v46);
    v10 = sub_4266D0((char*)(thisx + 76 * (unsigned __int8)v44 + 11816));
    sub_47B91A(72, 16, v10, 0, -1);
    LOBYTE(v43) = *(_BYTE*)(thisx + 2570);
    for (n = 0; n < 5; ++n)
    {
        if ((_BYTE)v45 || (unsigned __int8)v43 != n || ((unsigned int)dword_4B93B0 >> 1) % 2)
            sub_47B91A(8 * n + 72, 22, &byte_4B2664, 0, -1);
    }
    if ((_BYTE)v45 && (unsigned __int8)v45 < 4u)
    {
        for (n = 0; n < 2; ++n)
        {
            v11 = sub_45943B((_BYTE*)(thisx + 76 * (unsigned __int8)v44 + 11816), n);
            v20[n] = v11;
        }
        for (n = 0; n < 2; ++n)
        {
            if ((unsigned __int8)v45 != 1 || *(_DWORD*)(thisx + 2528) != n || ((unsigned int)dword_4B93B0 >> 1) % 4)
            {
                wsprintfA(String, "%2d", (unsigned __int8)v20[n]);
                sub_47B7ED(24 * n + 120, 40, String, 0, -1);
            }
        }
        if ((unsigned __int8)v45 > 1u)
        {
            v18 = v20[1] + 100 * v20[0];
            if (v18 > 119)
            {
                if (v18 > 218)
                {
                    if (v18 > 320)
                    {
                        if (v18 > 419)
                        {
                            if (v18 > 520)
                            {
                                if (v18 > 621)
                                {
                                    if (v18 > 722)
                                    {
                                        if (v18 > 822)
                                        {
                                            if (v18 > 922)
                                            {
                                                if (v18 > 1023)
                                                {
                                                    if (v18 > 1121)
                                                    {
                                                        if (v18 > 1221)
                                                            wsprintfA(String, &byte_4B26FC);
                                                        else
                                                            wsprintfA(String, &byte_4B26F0);
                                                    }
                                                    else
                                                    {
                                                        wsprintfA(String, &byte_4B26E4);
                                                    }
                                                }
                                                else
                                                {
                                                    wsprintfA(String, &byte_4B26D8);
                                                }
                                            }
                                            else
                                            {
                                                wsprintfA(String, &byte_4B26CC);
                                            }
                                        }
                                        else
                                        {
                                            wsprintfA(String, &byte_4B26C0);
                                        }
                                    }
                                    else
                                    {
                                        wsprintfA(String, &byte_4B26B4);
                                    }
                                }
                                else
                                {
                                    wsprintfA(String, &byte_4B26A8);
                                }
                            }
                            else
                            {
                                wsprintfA(String, &byte_4B269C);
                            }
                        }
                        else
                        {
                            wsprintfA(String, &byte_4B2690);
                        }
                    }
                    else
                    {
                        wsprintfA(String, &byte_4B2684);
                    }
                }
                else
                {
                    wsprintfA(String, &byte_4B2678);
                }
            }
            else
            {
                wsprintfA(String, &byte_4B266C);
            }
            sub_47B91A(192, 40, String, 0, -1);
        }
    }
    if ((unsigned __int8)v45 > 1u
        && (unsigned __int8)v45 < 4u
        && ((unsigned __int8)v45 != 2 || ((unsigned int)dword_4B93B0 >> 1) % 4))
    {
        LOBYTE(v16) = sub_475EB0((char*)thisx + 76 * (unsigned __int8)v44 + 11816);
        switch ((char)v16)
        {
        case 0:
            wsprintfA(v17, aA_0);
            break;
        case 1:
            wsprintfA(v17, aB_0);
            break;
        case 2:
            wsprintfA(v17, aAb);
            break;
        case 3:
            wsprintfA(v17, aO);
            break;
        default:
            break;
        }
        sub_47B7ED(224, 24, v17, 0, -1);
    }
    if ((_BYTE)v45)
    {
        if ((unsigned __int8)v45 == 3)
        {
            wsprintfA(v14, "%d>", (unsigned __int8)v44 + 1);
            return sub_47B91A(48 * *(_DWORD*)(thisx + 2528) + 70, 224, v14, 0, -1);
        }
        else
        {
            result = (unsigned __int8)v45;
            if ((unsigned __int8)v45 == 4)
            {
                wsprintfA(v13, "%d>", (unsigned __int8)v44 + 1);
                return sub_47B91A(48 * *(_DWORD*)(thisx + 2528) + 116, 224, v13, 0, -1);
            }
        }
    }
    else
    {
        wsprintfA(v15, "%d>", (unsigned __int8)v44 + 1);
        return sub_47B91A(
            16 * *(_DWORD*)(thisx + 2528) + 56 + 8 * (*(_DWORD*)(thisx + 2528) >= 5),
            16 * *(_DWORD*)(thisx + 2532) + 80,
            v15,
            0,
            -1);
    }
    return result;
}

