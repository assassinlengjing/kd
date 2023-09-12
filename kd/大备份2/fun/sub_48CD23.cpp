#include "sub.h" 
void sub_48CD23(int thisx)
{
    BOOL v1; // [esp+0h] [ebp-78h]
    BOOL v2; // [esp+4h] [ebp-74h]
    BOOL v3; // [esp+8h] [ebp-70h]
    BOOL v4; // [esp+Ch] [ebp-6Ch]
    BOOL v5; // [esp+10h] [ebp-68h]
    int v7; // [esp+18h] [ebp-60h]
    int v8; // [esp+1Ch] [ebp-5Ch]
    char* v9; // [esp+28h] [ebp-50h]
    int v10; // [esp+30h] [ebp-48h]
    int v11; // [esp+34h] [ebp-44h]
    int v12; // [esp+38h] [ebp-40h]
    int v13; // [esp+3Ch] [ebp-3Ch]
    int i; // [esp+4Ch] [ebp-2Ch]
    int j; // [esp+4Ch] [ebp-2Ch]
    int v16; // [esp+50h] [ebp-28h]
    int v17; // [esp+58h] [ebp-20h]
    int v18; // [esp+5Ch] [ebp-1Ch]
    int v19; // [esp+60h] [ebp-18h]
    int v20; // [esp+64h] [ebp-14h]
    int v21; // [esp+70h] [ebp-8h]

    if (*(_BYTE*)(thisx + 12) && !*(_DWORD*)(thisx + 100))
    {
        for (i = 0; i < (unsigned __int8)byte_4B9985; ++i)
        {
            if (*(_BYTE*)(i + thisx + 336))
                --* (_BYTE*)(i + thisx + 336);
        }
        v9 = sub_426210((char*)byte_4B9B10);
        v21 = sub_486633((_DWORD*)v9, *(_DWORD*)(thisx + 104) / 100, *(_DWORD*)(thisx + 108) / 100);
        v13 = *(_DWORD*)(thisx + 104);
        v11 = *(_DWORD*)(thisx + 108);
        *(_DWORD*)(thisx + 104) = *(_DWORD*)(thisx + 116) + v13;
        *(_DWORD*)(thisx + 108) += *(_DWORD*)(thisx + 120);
        *(_DWORD*)(thisx + 112) += *(_DWORD*)(thisx + 124);
        *(_DWORD*)(thisx + 116) += *(_DWORD*)(thisx + 128);
        *(_DWORD*)(thisx + 120) += *(_DWORD*)(thisx + 132);
        *(_DWORD*)(thisx + 124) += *(_DWORD*)(thisx + 136);
        if (*(int*)(thisx + 164) > 0 && (int)-- * (_DWORD*)(thisx + 164) <= 0)
        {
            *(_DWORD*)(thisx + 116) = 0;
            *(_DWORD*)(thisx + 120) = 0;
            *(_DWORD*)(thisx + 124) = 0;
        }
        v17 = sub_486633((_DWORD*)v9, *(_DWORD*)(thisx + 104) / 100, *(_DWORD*)(thisx + 108) / 100);
        v16 = sub_486633((_DWORD*)v9, *(_DWORD*)(thisx + 104) / 100, v11 / 100);
        v18 = sub_486633((_DWORD*)v9, v13 / 100, *(_DWORD*)(thisx + 108) / 100);
        sub_4868C1(v9, *(_DWORD*)(thisx + 104) / 800, *(_DWORD*)(thisx + 108) / 800);
        v12 = 0;
        v10 = 0;
        v19 = 100 * sub_4897D0(v9);
        v20 = 800 * sub_4261D0(v9);
        v5 = *(int*)(thisx + 104) <= 0 && *(int*)(thisx + 116) < 0
            || *(_DWORD*)(thisx + 104) >= v19 && *(int*)(thisx + 116) > 0;
        v4 = *(int*)(thisx + 108) <= 0 && *(int*)(thisx + 120) < 0
            || *(_DWORD*)(thisx + 108) >= v20 && *(int*)(thisx + 120) > 0;
        v3 = *(_DWORD*)(thisx + 116) && v21 < v16&& v16 - v21 >= 8 && *(_DWORD*)(thisx + 112) <= 100 * v17;
        v2 = *(_DWORD*)(thisx + 120) && v21 < v18&& v18 - v21 >= 8 && *(_DWORD*)(thisx + 112) <= 100 * v17;
        v1 = !v3
            && !v2
            && *(_DWORD*)(thisx + 116)
            && *(_DWORD*)(thisx + 120)
            && v21 < v17
            && v17 - v21 >= 8
            && *(_DWORD*)(thisx + 112) <= 100 * v17;
        for (j = 0; j < 7; ++j)
        {
            if (*(int*)(thisx + 8 * j + 172) >= 0)
            {
                v8 = 0;
                if (j || !v5)
                {
                    if (j == 3 && v4)
                    {
                        if (*(int*)(thisx + 108) > 0)
                            *(_DWORD*)(thisx + 108) = v20 - 1;
                        else
                            *(_DWORD*)(thisx + 108) = 0;
                        v8 = 1;
                    }
                    else if (j == 4 && !v5 && (v3 || v1))
                    {
                        *(_DWORD*)(thisx + 104) = 800 * (*(_DWORD*)(thisx + 104) / 800);
                        *(_DWORD*)(thisx + 104) += 800 * (*(int*)(thisx + 116) < 0) - (*(_DWORD*)(thisx + 116) > 0);
                        v8 = 1;
                    }
                    else if (j == 5 && !v4 && (v2 || v1))
                    {
                        *(_DWORD*)(thisx + 108) = 800 * (*(_DWORD*)(thisx + 108) / 800);
                        *(_DWORD*)(thisx + 108) += 800 * (*(int*)(thisx + 120) < 0) - (*(_DWORD*)(thisx + 120) > 0);
                        v8 = 1;
                    }
                    else if (j == 1)
                    {
                        v7 = sub_486633((_DWORD*)v9, *(_DWORD*)(thisx + 104) / 100, *(_DWORD*)(thisx + 108) / 100);
                        if (*(int*)(thisx + 104) <= 0
                            || *(_DWORD*)(thisx + 104) >= v19
                            || *(int*)(thisx + 108) <= 0
                            || *(_DWORD*)(thisx + 108) >= v20)
                        {
                            v7 = 0;
                        }
                        if (*(int*)(thisx + 124) < 0 && *(_DWORD*)(thisx + 112) <= 100 * v7)
                        {
                            *(_DWORD*)(thisx + 112) = 100 * v7;
                            v8 = 1;
                        }
                    }
                }
                else
                {
                    if (*(int*)(thisx + 104) > 0)
                        *(_DWORD*)(thisx + 104) = v19;
                    else
                        *(_DWORD*)(thisx + 104) = 0;
                    v8 = 1;
                }
                if (v8)
                {
                    *(_DWORD*)(thisx + 40) = *(_DWORD*)(thisx + 8 * j + 172);
                    *(_DWORD*)(thisx + 8 * j + 172) = -1;
                    *(_BYTE*)(thisx + 148) = 0;
                    *(_DWORD*)(thisx + 152) = 0;
                    sub_48A94C(thisx, 0, 1);
                    v10 = 1;
                }
            }
        }
        if (!v10)
        {
            if (*(int*)(thisx + 152) > 0 && !-- * (_DWORD*)(thisx + 152))
            {
                *(_BYTE*)(thisx + 148) = 0;
                *(_DWORD*)(thisx + 40) = *(_DWORD*)(thisx + 156) + 1;
                v12 = 1;
            }
            if (!v12 && *(_WORD*)(thisx + 10))
            {
                if (*(__int16*)(thisx + 10) > 0)
                    --* (_WORD*)(thisx + 10);
                if (*(__int16*)(thisx + 10) <= 0)
                {
                    if (!*(_WORD*)(thisx + 10))
                        ++* (_DWORD*)(thisx + 40);
                    if (*(_DWORD*)(thisx + 40) >= dword_4CA1D4)
                        *(_DWORD*)(thisx + 40) = *(_DWORD*)(thisx + 16);
                    v12 = 1;
                }
            }
            if (v12)
                sub_48A94C(thisx, 0, 1);
        }
    }
}
