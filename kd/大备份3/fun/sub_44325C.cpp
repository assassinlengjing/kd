#include "sub.h" 
int sub_44325C(int thisx)
{
    int v1; // ebx
    int v2; // eax
    int result; // eax
    CHAR String[256]; // [esp+Ch] [ebp-140h] BYREF
    int v6; // [esp+10Ch] [ebp-40h]
    int mm; // [esp+110h] [ebp-3Ch]
    int kk; // [esp+114h] [ebp-38h]
    int v9; // [esp+118h] [ebp-34h]
    _DWORD* v10; // [esp+11Ch] [ebp-30h]
    int jj; // [esp+120h] [ebp-2Ch]
    int ii; // [esp+124h] [ebp-28h]
    int v13; // [esp+128h] [ebp-24h]
    int n; // [esp+12Ch] [ebp-20h]
    int m; // [esp+130h] [ebp-1Ch]
    int v16; // [esp+134h] [ebp-18h]
    int k; // [esp+138h] [ebp-14h]
    int v18; // [esp+13Ch] [ebp-10h]
    int j; // [esp+140h] [ebp-Ch]
    int v20; // [esp+144h] [ebp-8h]
    int i; // [esp+148h] [ebp-4h]

    for (i = 0; i < *(unsigned __int8*)(thisx + 11352); ++i)
    {
        *(_BYTE*)(*(_DWORD*)(thisx + 11356) + i) = 0;
        *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * i) = 0;
    }
    if (*(_DWORD*)(thisx + 104) != 1)
    {
        for (i = 0; i < 8; ++i)
        {
            if (unknown_libname_7((_DWORD*)(thisx + 612 * i + 2628)))
            {
                v20 = sub_4260B0((_DWORD*)(thisx + 612 * i + 2628));
                for (j = 0; j < 8; ++j)
                {
                    v18 = 0;
                    if (v20 == *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * j))
                    {
                        if (*(_BYTE*)(*(_DWORD*)(thisx + 11356) + j))
                        {
                            v1 = (unsigned __int8)sub_426030((_BYTE*)(thisx + 612 * i + 2628));
                            if (v1 < (unsigned __int8)sub_426030((_BYTE*)(thisx
                                + 612
                                * (*(unsigned __int8*)(*(_DWORD*)(thisx + 11356) + j) - 1)
                                + 2628)))
                                v18 = 1;
                        }
                    }
                    if (v18 || v20 < *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * j) || !*(_BYTE*)(*(_DWORD*)(thisx + 11356) + j))
                    {
                        for (k = 7; k > j; --k)
                        {
                            *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * k) = *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * k - 4);
                            *(_BYTE*)(*(_DWORD*)(thisx + 11356) + k) = *(_BYTE*)(*(_DWORD*)(thisx + 11356) + k - 1);
                        }
                        *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * j) = v20;
                        *(_BYTE*)(*(_DWORD*)(thisx + 11356) + j) = i + 1;
                        break;
                    }
                }
            }
        }
        for (i = 0; i < 8; ++i)
        {
            if (sub_426290((unsigned __int8*)(thisx + 40 * i + 10760)))
            {
                v16 = 100 * unknown_libname_26((_DWORD*)(thisx + 40 * i + 10760));
                for (m = 0; m < *(unsigned __int8*)(thisx + 11352); ++m)
                {
                    if (v16 < *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * m) || !*(_BYTE*)(*(_DWORD*)(thisx + 11356) + m))
                    {
                        for (n = *(unsigned __int8*)(thisx + 11352) - 1; n > m; --n)
                        {
                            *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * n) = *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * n - 4);
                            *(_BYTE*)(*(_DWORD*)(thisx + 11356) + n) = *(_BYTE*)(*(_DWORD*)(thisx + 11356) + n - 1);
                        }
                        *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * m) = v16;
                        *(_BYTE*)(*(_DWORD*)(thisx + 11356) + m) = i + 9;
                        break;
                    }
                }
            }
        }
        for (i = 0; i < 8; ++i)
        {
            if (unknown_libname_22((_DWORD*)(thisx + 196 * i + 7524))
                && unknown_libname_12((_DWORD*)(thisx + 196 * i + 7524)) != 1)
            {
                v13 = sub_426530((_DWORD*)(thisx + 196 * i + 7524));
                for (ii = 0; ii < *(unsigned __int8*)(thisx + 11352); ++ii)
                {
                    if (v13 < *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * ii) || !*(_BYTE*)(*(_DWORD*)(thisx + 11356) + ii))
                    {
                        for (jj = *(unsigned __int8*)(thisx + 11352) - 1; jj > ii; --jj)
                        {
                            *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * jj) = *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * jj - 4);
                            *(_BYTE*)(*(_DWORD*)(thisx + 11356) + jj) = *(_BYTE*)(*(_DWORD*)(thisx + 11356) + jj - 1);
                        }
                        *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * ii) = v13;
                        *(_BYTE*)(*(_DWORD*)(thisx + 11356) + ii) = i + 17;
                        break;
                    }
                }
            }
        }
    }
    for (i = 0; i < *(unsigned __int8*)(thisx + 11364); ++i)
    {
        v10 = (_DWORD*)sub_488E1E((_DWORD*)(thisx + 128), *(_DWORD*)(*(_DWORD*)(thisx + 11368) + 4 * i));
        if (v10)
        {
            v9 = 100 * sub_474DD0(v10);
            for (kk = 0; kk < *(unsigned __int8*)(thisx + 11352); ++kk)
            {
                if (v9 < *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * kk) || !*(_BYTE*)(*(_DWORD*)(thisx + 11356) + kk))
                {
                    for (mm = *(unsigned __int8*)(thisx + 11352) - 1; mm > kk; --mm)
                    {
                        *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * mm) = *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * mm - 4);
                        *(_BYTE*)(*(_DWORD*)(thisx + 11356) + mm) = *(_BYTE*)(*(_DWORD*)(thisx + 11356) + mm - 1);
                    }
                    *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * kk) = v9;
                    *(_BYTE*)(*(_DWORD*)(thisx + 11356) + kk) = i + 25;
                    break;
                }
            }
        }
    }
    for (i = 0; i < *(unsigned __int8*)(thisx + 11352); ++i)
    {
        if (*(_BYTE*)(*(_DWORD*)(thisx + 11356) + i))
        {
            if (*(unsigned __int8*)(*(_DWORD*)(thisx + 11356) + i) >= 9u)
            {
                if (*(unsigned __int8*)(*(_DWORD*)(thisx + 11356) + i) >= 0x11u)
                {
                    if (*(unsigned __int8*)(*(_DWORD*)(thisx + 11356) + i) >= 0x19u)
                    {
                        v6 = sub_488E1E(
                            (_DWORD*)(thisx + 128),
                            *(_DWORD*)(*(_DWORD*)(thisx + 11368) + 4 * *(unsigned __int8*)(*(_DWORD*)(thisx + 11356) + i) - 100));
                        if (v6)
                        {
                            v2 = unknown_libname_10((_DWORD*)(thisx + 128));
                            sub_48D421(v6, v2 + 1);
                        }
                    }
                    else
                    {
                        sub_490D23(thisx + 196 * (*(unsigned __int8*)(*(_DWORD*)(thisx + 11356) + i) - 17) + 7524);
                    }
                }
                else
                {
                    sub_47F0B1(thisx + 40 * (*(unsigned __int8*)(*(_DWORD*)(thisx + 11356) + i) - 9) + 10760);
                }
            }
            else
            {
                sub_40230C(thisx + 612 * (*(unsigned __int8*)(*(_DWORD*)(thisx + 11356) + i) - 1) + 2628);
            }
        }
    }
    result = (unsigned __int8)unk_4B91D9;
    if (unk_4B91D9 == 2)
    {
        for (i = 0; ; ++i)
        {
            result = *(unsigned __int8*)(thisx + 11352);
            if (i >= result)
                break;
            wsprintfA(
                String,
                "%2d, %d",
                *(unsigned __int8*)(*(_DWORD*)(thisx + 11356) + i),
                *(_DWORD*)(*(_DWORD*)(thisx + 11360) + 4 * i));
            sub_47B7ED(8, 10 * i, String, 0, -1);
        }
    }
    return result;
}