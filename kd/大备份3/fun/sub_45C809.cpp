#include "sub.h" 
int sub_45C809(int thisx)
{
    char* v1; // eax
    int result; // eax
    int v3; // esi
    __int16 v4; // ax
    __int16 v6; // [esp+8h] [ebp-54h]
    unsigned __int8 v7; // [esp+Ch] [ebp-50h]
    int k; // [esp+10h] [ebp-4Ch]
    int j; // [esp+14h] [ebp-48h]
    int v10; // [esp+18h] [ebp-44h]
    int v11; // [esp+1Ch] [ebp-40h]
    int i; // [esp+20h] [ebp-3Ch]
    int v13[14]; // [esp+24h] [ebp-38h] BYREF

    sub_49C15E((_DWORD)v13);
    v13[1] = 0;
    v13[2] = 0;
    v13[0] = unk_4B9248;
    sub_49AB05((int)unk_4BDC60, v13);
    if (!(unk_4B93B0 / 5u % 2) && *(int*)(thisx + 2528) >= 0 && *(int*)(thisx + 2532) >= 0)
    {
        for (i = 0; i < 2; ++i)
        {
            v1 = sub_4266D0((char*)(thisx + 76 * i + 11816));
            sub_47B91A(48 * i + *(_DWORD*)(thisx + 2528), *(_DWORD*)(thisx + 2532), v1, 0, -1);
        }
        sub_47B91A(*(_DWORD*)(thisx + 2528) + 40, *(_DWORD*)(thisx + 2532), &unk_4B29D4, 0, -1);
    }
    if (!(unk_4B93B0 / 5u % 2))
    {
        if (*(_WORD*)(thisx + 2564))
            sub_47B91A(24, 108, asc_4B29D8, 0, -1);
        if (*(unsigned __int16*)(thisx + 2564) + 2 < *(unsigned __int8*)(thisx + 12969))
            sub_47B91A(288, 108, asc_4B29DC, 0, -1);
    }
    result = *(unsigned __int8*)(thisx + 2516);
    if (!*(_BYTE*)(thisx + 2516))
    {
        sub_477F0C(0);
        v3 = sub_476D78(0);
        v11 = v3 - sub_476D29(0);
        if (v11)
        {
            v10 = v11 + *(unsigned __int16*)(thisx + 2564);
            if (v10 + 2 >= *(unsigned __int8*)(thisx + 12969))
                v10 = *(unsigned __int8*)(thisx + 12969) - 2;
            if (v10 < 0)
                LOWORD(v10) = 0;
            *(_WORD*)(thisx + 2564) = v10;
            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
            sub_464C88(thisx);
        }
        result = sub_476DC7(0, 0);
        if (result)
        {
            for (j = 0; j < *(unsigned __int8*)(thisx + 12969); ++j)
            {
                for (k = 0; k < *(unsigned __int8*)(j + thisx + 13002); ++k)
                {
                    v6 = k;
                    if (*(unsigned __int16*)(thisx + 2574) == j)
                        v6 = *(_WORD*)(thisx + 2 * k + 2566);
                    v7 = *(_BYTE*)(thisx + k + 4 * j + 13010);
                    if (*(_BYTE*)(j + thisx + 13002) == 2)
                        v4 = 4 - 2 * v6 + *(_WORD*)(thisx + 2 * v7 + 11692);
                    else
                        v4 = 4 - v6 + *(_WORD*)(thisx + 2 * v7 + 11692);
                    *(_WORD*)(thisx + 2 * v7 + 11692) = v4;
                }
            }
            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
            *(_BYTE*)(thisx + 2562) = 0;
            if (*(unsigned __int8*)(thisx + 11690) % 5)
            {
                *(_DWORD*)(thisx + 108) = 17;
                result = thisx;
            }
            else
            {
                *(_DWORD*)(thisx + 108) = 1;
                result = thisx;
                *(_DWORD*)(thisx + 120) = 2;
            }
            *(_BYTE*)(thisx + 2516) = 2;
        }
    }
    return result;
}

