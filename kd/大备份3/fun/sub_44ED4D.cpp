#include "sub.h" 
UINT sub_44ED4D(UINT thisx)
{
    int v1; // esi
    UINT result; // eax
    UINT NumDevs; // eax
    int v4; // esi
    int v5; // edx
    UINT v6; // ecx
    int v7; // ecx
    char v8; // al
    int v9; // eax
    int v10; // eax
    unsigned __int8 v11; // al
    int v12; // [esp-10h] [ebp-2D8h]
    int v13; // [esp-10h] [ebp-2D8h]
    SHORT AsyncKeyState; // [esp+Ch] [ebp-2BCh]
    int v16; // [esp+10h] [ebp-2B8h]
    int vKey; // [esp+14h] [ebp-2B4h]
    int v18; // [esp+18h] [ebp-2B0h]
    char ii; // [esp+1Ch] [ebp-2ACh]
    char n; // [esp+20h] [ebp-2A8h]
    int k; // [esp+24h] [ebp-2A4h]
    CHAR v22[256]; // [esp+28h] [ebp-2A0h] BYREF
    UINT v23; // [esp+128h] [ebp-1A0h]
    char v24; // [esp+12Ch] [ebp-19Ch]
    int m; // [esp+130h] [ebp-198h]
    int v26; // [esp+134h] [ebp-194h]
    char v27; // [esp+138h] [ebp-190h]
    int v28; // [esp+13Ch] [ebp-18Ch]
    int v29; // [esp+140h] [ebp-188h]
    int j; // [esp+144h] [ebp-184h]
    struct joyinfo_tag v31; // [esp+148h] [ebp-180h] BYREF
    UINT uJoyID; // [esp+158h] [ebp-170h]
    struct joyinfo_tag pji; // [esp+15Ch] [ebp-16Ch] BYREF
    char v34; // [esp+16Ch] [ebp-15Ch]
    int v35; // [esp+170h] [ebp-158h]
    UINT v36; // [esp+174h] [ebp-154h]
    int v37; // [esp+178h] [ebp-150h]
    int v38; // [esp+17Ch] [ebp-14Ch]
    int v39; // [esp+180h] [ebp-148h]
    int v40; // [esp+184h] [ebp-144h]
    int v41; // [esp+188h] [ebp-140h]
    int i; // [esp+18Ch] [ebp-13Ch]
    CHAR String[256]; // [esp+190h] [ebp-138h] BYREF
    int v44[14]; // [esp+290h] [ebp-38h] BYREF

    for (i = 0; i < 8; ++i)
        sub_477F0C(i);
    LOBYTE(v38) = *(_BYTE*)(thisx + 2562);
    if (!*(_BYTE*)(thisx + 2516))
    {
        if (*(_BYTE*)(thisx + 2562))
        {
            if (*(_BYTE*)(thisx + 2562) == 1)
            {
                NumDevs = joyGetNumDevs();
                v36 = NumDevs;
                LOBYTE(NumDevs) = *(_BYTE*)(thisx + 2528);
                v4 = sub_476D78(NumDevs);
                LOBYTE(v5) = *(_BYTE*)(thisx + 2528);
                v35 = v4 - sub_476D29(v5);
                v34 = *(_BYTE*)(thisx + 2536);
                if (v34 < 0 && v35)
                {
                    if (!joyGetPos(0, &pji))
                    {
                        v6 = thisx;
                        *(_DWORD*)(thisx + 2536) = 0;
                    }
                }
                else if (v34 >= 0 && v35)
                {
                    uJoyID = v35 + v34;
                    if ((uJoyID & 0x80000000) != 0 || joyGetPos(uJoyID, &v31))
                    {
                        v6 = thisx;
                        *(_DWORD*)(thisx + 2536) = -*(_DWORD*)(thisx + 2528) - 1;
                    }
                    else
                    {
                        v6 = uJoyID;
                        *(_DWORD*)(thisx + 2536) = uJoyID;
                    }
                }
                if (v35)
                {
                    sub_43FFC3((int*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
                }
                else
                {
                    LOBYTE(v6) = *(_BYTE*)(thisx + 2528);
                    if (sub_476DC7(v6, 0))
                    {
                        sub_47652C((int*)&unk_4B9410[108 * *(_DWORD*)(thisx + 2528)], *(_DWORD*)(thisx + 2536));
                        *(_BYTE*)(thisx + 2562) = 2;
                        *(_BYTE*)(thisx + *(_DWORD*)(thisx + 2528) + 2588) = 2;
                        *(_WORD*)(thisx + 2 * *(_DWORD*)(thisx + 2528) + 2564) = 0;
                        sub_43FFC3((int*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
                        for (j = 0; j < 256; ++j)
                            unk_4B9874[j] = 2;
                    }
                    else
                    {
                        LOBYTE(v7) = *(_BYTE*)(thisx + 2528);
                        if (sub_476DC7(v7, 1))
                            *(_BYTE*)(thisx + 2562) = 0;
                    }
                }
            }
        }
        else
        {
            v1 = sub_476D78(0);
            v37 = v1 - sub_476D29(0);
            *(_DWORD*)(thisx + 2528) += v37;
            if (*(int*)(thisx + 2528) >= 0)
            {
                if (*(int*)(thisx + 2528) > 7)
                    *(_DWORD*)(thisx + 2528) = 7;
            }
            else
            {
                *(_DWORD*)(thisx + 2528) = 0;
            }
            if (*(_DWORD*)(thisx + 2528) - *(_DWORD*)(thisx + 2532) < 4)
            {
                if (*(_DWORD*)(thisx + 2528) < *(_DWORD*)(thisx + 2532))
                    *(_DWORD*)(thisx + 2532) += v37;
            }
            else
            {
                *(_DWORD*)(thisx + 2532) += v37;
            }
            if (v37)
                sub_43FFC3((int*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
            if (sub_476DC7(0, 0))
            {
                *(_BYTE*)(thisx + 2562) = 1;
                *(_DWORD*)(thisx + 2536) = (char)sub_4768D5((int*)&unk_4B9410[108 * *(_DWORD*)(thisx + 2528)]);
                if (*(_DWORD*)(thisx + 2536))
                {
                    if (*(int*)(thisx + 2536) >= 1)
                        --* (_DWORD*)(thisx + 2536);
                }
                else
                {
                    *(_DWORD*)(thisx + 2536) = -1;
                }
                sub_43FFC3((int*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
            }
            else if (sub_476DC7(0, 1))
            {
                result = thisx;
                *(_DWORD*)(thisx + 108) = 5;
                *(_BYTE*)(thisx + 2516) = 2;
                *(_DWORD*)(thisx + 2512) = 0;
                return result;
            }
        }
    }
    sub_49C15E((int)v44);
    v44[1] = 0;
    v44[2] = 0;
    v44[0] = unk_4B9248;
    sub_49AB05((int)unk_4BDC60, v44);
    v41 = 16;
    v39 = 16;
    if (*(int*)(thisx + 2532) > 0)
        sub_47B91A(v41 + 48, v39, asc_4B0CAC, 0, -1);
    if (*(int*)(thisx + 2532) < 4)
        sub_47B91A(298, v39, asc_4B0CB0, 0, -1);
    v40 = -1;
    for (i = *(_DWORD*)(thisx + 2532); i < *(_DWORD*)(thisx + 2532) + 4; ++i)
    {
        ++v40;
        v29 = v41 + 52 * v40 + 82;
        wsprintfA(String, "%dP", i + 1);
        sub_47B7ED(v29 - 8, v39, String, 0, -1);
        if (!*(_BYTE*)(thisx + 2562) && *(_DWORD*)(thisx + 2528) == i)
            sub_47B91A(v29 - 20, v39, asc_4B0CB8, 0, -1);
        v27 = sub_4768D5((int*)&unk_4B9410[108 * i]);
        if (*(_BYTE*)(thisx + 2562) == 1 && *(_DWORD*)(thisx + 2528) == i)
        {
            if (*(int*)(thisx + 2536) >= 0)
                v27 = *(_BYTE*)(thisx + 2536) + 1;
            else
                v27 = 0;
        }
        if (v27)
        {
            if (v27 >= 1)
                wsprintfA(String, "JS%d", v27);
        }
        else
        {
            wsprintfA(String, aKb);
        }
        v28 = lstrlenA(String);
        sub_47B7ED(v29 - 4 * v28, v39 + 16, String, 0, -1);
        if (*(_BYTE*)(thisx + 2562) == 1 && *(_DWORD*)(thisx + 2528) == i)
            sub_47B91A(v29 - 22, v39 + 16, asc_4B0CC8, 0, -1);
        if (v27 >= 0)
        {
            v26 = v39 + 86;
            if (v27 < 1)
            {
                if (!v27)
                {
                    v26 = v39 + 36;
                    for (k = 0; k < 11; ++k)
                    {
                        v11 = sub_4768F5(&unk_4B9410[108 * i], k);
                        v23 = MapVirtualKeyA(v11, 0);
                        GetKeyNameTextA(v23 << 16, v22, 16);
                        v28 = lstrlenA(v22);
                        if (k == 4)
                        {
                            v26 = v39 + 86;
                        }
                        else if (k == 9)
                        {
                            v26 = v39 + 146;
                        }
                        sub_47B7ED(v29 - 4 * v28, v26, v22, 0, -1);
                        if (*(_BYTE*)(thisx + 2562) == 2
                            && *(_DWORD*)(thisx + 2528) == i
                            && *(unsigned __int16*)(thisx + 2 * i + 2564) == k)
                        {
                            sub_47B91A(v29 - 30, v26, asc_4B0CE4, 0, -1);
                        }
                        v26 += 10;
                    }
                }
            }
            else
            {
                v26 = v39 + 36;
                for (m = 0; m < 11; ++m)
                {
                    if (m == 4)
                    {
                        v26 = v39 + 86;
                    }
                    else if (m == 9)
                    {
                        v26 = v39 + 146;
                    }
                    v24 = sub_4768BD(&unk_4B9410[108 * i], m);
                    if (v24 < 0)
                    {
                        switch (v24)
                        {
                        case -4:
                            wsprintfA(String, aRi);
                            break;
                        case -3:
                            wsprintfA(String, aLe);
                            break;
                        case -2:
                            wsprintfA(String, aDo);
                            break;
                        case -1:
                            wsprintfA(String, aUp);
                            break;
                        default:
                            break;
                        }
                        v13 = v26;
                        v10 = lstrlenA(String);
                        sub_47B91A(v29 - 2 * v10, v13, String, 0, -1);
                    }
                    else
                    {
                        v8 = sub_4768BD(&unk_4B9410[108 * i], m);
                        wsprintfA(String, "%d", v8 + 1);
                        v12 = v26;
                        v9 = lstrlenA(String);
                        sub_47B7ED(v29 - 4 * v9, v12, String, 0, -1);
                    }
                    if (*(_BYTE*)(thisx + 2562) == 2
                        && *(_DWORD*)(thisx + 2528) == i
                        && *(unsigned __int16*)(thisx + 2 * i + 2564) == m)
                    {
                        sub_47B91A(v29 - 20, v26, asc_4B0CE0, 0, -1);
                    }
                    v26 += 10;
                }
            }
            if (*(_BYTE*)(thisx + 2562) == 2 && *(_DWORD*)(thisx + 2528) == i)
            {
                if (v27 <= 0)
                {
                    if (!v27)
                    {
                        v16 = 0;
                        for (vKey = 0; vKey < 256; ++vKey)
                        {
                            AsyncKeyState = GetAsyncKeyState(vKey);
                            if (AsyncKeyState >= 0 || (AsyncKeyState & 1) != 0 || unk_4B9874[vKey])
                            {
                                if (!AsyncKeyState && unk_4B9874[vKey] == 1)
                                {
                                    unk_4B9874[vKey] = 0;
                                    v16 = vKey;
                                    break;
                                }
                                if (!AsyncKeyState && (unsigned __int8)unk_4B9874[vKey] > 1u)
                                    unk_4B9874[vKey] = 0;
                            }
                            else
                            {
                                unk_4B9874[vKey] = 1;
                            }
                        }
                        if (v16 <= 0)
                            *(_BYTE*)(i + thisx + 2588) = 0;
                        else
                            ++* (_BYTE*)(i + thisx + 2588);
                        if (*(_BYTE*)(i + thisx + 2588) == 1)
                        {
                            *(_BYTE*)(thisx + 11 * i + 11264 + *(unsigned __int16*)(thisx + 2 * i + 2564)) = v16;
                            sub_47690D(&unk_4B9410[108 * i], *(_BYTE*)(thisx + 2 * i + 2564), v16);
                            ++* (_WORD*)(thisx + 2 * i + 2564);
                            sub_43FFC3((int*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
                        }
                    }
                }
                else
                {
                    for (n = -4;
                        n < 16
                        && (n >= 0 || !sub_476A8E((int*)&unk_4B9410[108 * i], n))
                        && (n < 0 || !sub_47646A((int*)&unk_4B9410[108 * i], n));
                        ++n)
                    {
                        ;
                    }
                    if (n < 16 || *(_BYTE*)(i + thisx + 2588) == 2)
                        ++* (_BYTE*)(i + thisx + 2588);
                    else
                        *(_BYTE*)(i + thisx + 2588) = 0;
                    if (*(_BYTE*)(i + thisx + 2588) == 1 && *(unsigned __int16*)(thisx + 2 * i + 2564) < 0xBu)
                    {
                        for (ii = -4; ii < 16; ++ii)
                        {
                            if (ii >= 0)
                                v18 = sub_47646A((int*)&unk_4B9410[108 * i], ii);
                            else
                                v18 = sub_476A8E((int*)&unk_4B9410[108 * i], ii);
                            if (v18)
                            {
                                sub_4768A2(&unk_4B9410[108 * i], *(_BYTE*)(thisx + 2 * i + 2564), ii);
                                *(_BYTE*)(thisx + 11 * i + 11176 + (unsigned __int16)(*(_WORD*)(thisx + 2 * i + 2564))++) = ii;
                                sub_43FFC3((int*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    if (*(_BYTE*)(thisx + 2562) == 2 && *(unsigned __int16*)(thisx + 2 * *(_DWORD*)(thisx + 2528) + 2564) >= 0xBu)
        *(_BYTE*)(thisx + 2562) = 0;
    result = *(unsigned __int8*)(thisx + 2562);
    if ((unsigned __int8)v38 != result)
        return (UINT)sub_455268((_BYTE*)thisx, -2);
    return result;
}

