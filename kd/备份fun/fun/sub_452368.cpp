#include "sub.h" 
int sub_452368(int thisx)
{
    const CHAR* v1; // eax
    int v2; // eax
    const CHAR* v3; // eax
    int result; // eax
    int v5; // [esp+0h] [ebp-19Ch]
    int v6; // [esp+4h] [ebp-198h]
    int v7; // [esp+8h] [ebp-194h]
    int v8; // [esp+Ch] [ebp-190h]
    int v9; // [esp+10h] [ebp-18Ch]
    int v10; // [esp+14h] [ebp-188h]
    int v11; // [esp+18h] [ebp-184h]
    int v13; // [esp+20h] [ebp-17Ch]
    int v14; // [esp+24h] [ebp-178h]
    int v15; // [esp+28h] [ebp-174h]
    struct tagRECT v16; // [esp+2Ch] [ebp-170h] BYREF
    _DWORD* v17; // [esp+3Ch] [ebp-160h]
    int v18; // [esp+40h] [ebp-15Ch]
    int v19; // [esp+44h] [ebp-158h]
    int i; // [esp+48h] [ebp-154h]
    int v21; // [esp+4Ch] [ebp-150h]
    int v22; // [esp+50h] [ebp-14Ch]
    CHAR String1[256]; // [esp+54h] [ebp-148h] BYREF
    int v24; // [esp+154h] [ebp-48h] BYREF
    int v25; // [esp+158h] [ebp-44h]
    int v26; // [esp+15Ch] [ebp-40h]
    struct tagRECT rc; // [esp+18Ch] [ebp-10h] BYREF

    sub_477F0C(0);
    v19 = 0;
    v18 = 0;
    if (!*(_BYTE*)(thisx + 2516))
    {
        if (sub_476CDA(0))
        {
            v18 = 1;
        }
        else if (sub_476C8B(0))
        {
            v18 = -1;
        }
        if (sub_476D29(0))
        {
            v19 = -1;
        }
        else if (sub_476D78(0))
        {
            v19 = 1;
        }
    }
    if (!v19 || *(_DWORD*)(thisx + 2540) || *(_DWORD*)(thisx + 2532))
    {
        if (v18 && !*(_DWORD*)(thisx + 2540) && !*(_DWORD*)(thisx + 2532))
        {
            *(_DWORD*)(thisx + 2540) = 0;
            *(_DWORD*)(thisx + 2532) = v18;
            sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
        }
    }
    else
    {
        *(_DWORD*)(thisx + 2540) = v19;
        *(_DWORD*)(thisx + 2532) = 0;
        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
    }
    sub_49C15E((int)&v24);
    v24 = dword_4B9248;
    sub_49AB05((int)byte_4BDC60, &v24);
    sub_47B91A(128, 32, &byte_4B1550, 0, -1);
    v17 = 0;
    if (*(_BYTE*)(thisx + 29))
        v17 = (_DWORD*)(20 * (*(unsigned __int8*)(thisx + 29) - 1) + *(_DWORD*)(thisx + 13392));
    if (*(_BYTE*)(thisx + 29))
    {
        if (unknown_libname_26(v17))
        {
            v1 = (const CHAR*)unknown_libname_26(v17);
            lstrcpyA(String1, v1);
        }
        else
        {
            wsprintfA(String1, &byte_4B1574);
        }
    }
    else
    {
        wsprintfA(String1, "%s", (_DWORD*)byte_4B1564);
    }
    v2 = lstrlenA(String1);
    sub_47B91A(160 - 2 * v2, 94, String1, 0, -1);
    if (v17 && !unknown_libname_26(v17))
    {
        wsprintfA(String1, "%02d", *(unsigned __int8*)(thisx + 29));
        sub_47BC5A(168, 94, String1, 0, -1);
    }
    SetRect(&rc, 0, 200, 320, 240);
    sub_49EDC1((int)byte_4BDC60, (int)&rc, (_DWORD*)&rc, 0);
    if (*(_BYTE*)(thisx + 29))
    {
        if (unknown_libname_12(v17))
        {
            v3 = (const CHAR*)unknown_libname_12(v17);
            sub_47B91A(24, 208, v3, 0, -1);
        }
    }
    else
    {
        sub_47B91A(24, 208, &byte_4B158C, 0, -1);
    }
    v21 = 0;
    v22 = 3;
    if (*(int*)(thisx + 2540) >= 0)
    {
        if (*(int*)(thisx + 2540) > 0)
            v22 = 4;
    }
    else
    {
        v21 = -1;
    }
    for (i = v21; i < v22; ++i)
    {
        v25 = (i << 6) + 80 - 8 * *(_DWORD*)(thisx + 2540);
        if (*(int*)(thisx + 2532) <= 0)
            v11 = -*(_DWORD*)(thisx + 2532);
        else
            v11 = *(_DWORD*)(thisx + 2532);
        if (v11 > 4)
        {
            if (*(int*)(thisx + 2532) <= 0)
                v10 = (*(_DWORD*)(thisx + 2532) >= 0) - 1;
            else
                v10 = 1;
            if (v10 <= 0)
            {
                if (*(int*)(thisx + 2532) <= 0)
                    v9 = (*(_DWORD*)(thisx + 2532) >= 0) - 1;
                else
                    v9 = 1;
                if (v9 < 0)
                    v26 = 112 - 8 * *(_DWORD*)(thisx + 2532) - 64;
            }
            else
            {
                v26 = 144 - 8 * *(_DWORD*)(thisx + 2532) + 32;
            }
        }
        else
        {
            v26 = 112 - 8 * *(_DWORD*)(thisx + 2532);
        }
        v15 = *(unsigned __int8*)(thisx + 29) + i - 1;
        if (v15 >= 0)
        {
            if (v15 > *(_DWORD*)(thisx + 13388))
                v15 = 0;
        }
        else
        {
            v15 = *(_DWORD*)(thisx + 13388);
        }
        v17 = 0;
        if (v15 > 0)
            v17 = (_DWORD*)(20 * (v15 - 1) + *(_DWORD*)(thisx + 13392));
        if (v15)
        {
            if (sub_475790((short*)v17) <= 0)
                v24 = dword_4B9244;
            else
                v24 = sub_475790((short*)v17);
        }
        else
        {
            v24 = dword_4B9244 + 1;
        }
        SetRect(&v16, 0, 0, 32, 32);
        if (v25 >= 88)
        {
            if (v25 + 32 > 232)
                v16.right = 232 - v25;
        }
        else
        {
            v16.left = 88 - v25;
            v16.right = 32 - (88 - v25);
            v25 = 88;
        }
        if (v26 >= 112)
        {
            if (v26 + 32 > 144)
                v16.bottom = 144 - v26;
        }
        else
        {
            v16.top = 112 - v26;
            v16.bottom = 32 - (112 - v26);
            v26 = 112;
        }
        sub_49C8A6((int)byte_4BDC60, &v24, (_DWORD*)&v16);
    }
    if (*(_DWORD*)(thisx + 2540))
    {
        if (*(int*)(thisx + 2540) <= 0)
        {
            if ((int)-- * (_DWORD*)(thisx + 2540) <= -8)
            {
                *(_DWORD*)(thisx + 2540) = 0;
                v14 = *(unsigned __int8*)(thisx + 29) - 1;
                if (v14 >= 0)
                    *(_BYTE*)(thisx + 29) = v14;
                else
                    *(_BYTE*)(thisx + 29) = *(_BYTE*)(thisx + 13388);
            }
        }
        else if ((int)++ * (_DWORD*)(thisx + 2540) >= 8)
        {
            ++* (_BYTE*)(thisx + 29);
            *(_DWORD*)(thisx + 2540) = 0;
            if (*(unsigned __int8*)(thisx + 29) >= *(_DWORD*)(thisx + 13388) + 1)
                *(_BYTE*)(thisx + 29) = 0;
        }
    }
    else if (*(_DWORD*)(thisx + 2532))
    {
        if (*(int*)(thisx + 2532) <= 0)
            v8 = (*(_DWORD*)(thisx + 2532) >= 0) - 1;
        else
            v8 = 1;
        *(_DWORD*)(thisx + 2532) += v8;
        if (*(int*)(thisx + 2532) <= 0)
            v7 = -*(_DWORD*)(thisx + 2532);
        else
            v7 = *(_DWORD*)(thisx + 2532);
        if (v7 == 4)
        {
            v13 = 10;
            if (*(_DWORD*)(thisx + 13388) + 1 < 10)
                v13 = 10 - (*(_DWORD*)(thisx + 13388) + 1);
            if (*(int*)(thisx + 2532) <= 0)
                v6 = (*(_DWORD*)(thisx + 2532) >= 0) - 1;
            else
                v6 = 1;
            *(_BYTE*)(thisx + 29) = (v13 * v6 + *(unsigned __int8*)(thisx + 29) + *(_DWORD*)(thisx + 13388) + 1)
                % (*(_DWORD*)(thisx + 13388) + 1);
        }
        if (*(int*)(thisx + 2532) <= 0)
            v5 = -*(_DWORD*)(thisx + 2532);
        else
            v5 = *(_DWORD*)(thisx + 2532);
        if (v5 >= 8)
            *(_DWORD*)(thisx + 2532) = 0;
    }
    result = sub_476DC7(0, 0);
    if (result && !*(_BYTE*)(thisx + 2516))
    {
        result = sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
        *(_DWORD*)(thisx + 108) = 11;
        *(_BYTE*)(thisx + 2516) = 2;
    }
    return result;
}

