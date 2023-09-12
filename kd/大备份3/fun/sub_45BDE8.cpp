#include "sub.h" 
int sub_45BDE8(int thisx)
{
    char* v1; // eax
    int result; // eax
    int v3; // esi
    int v5; // [esp+8h] [ebp-48h]
    int v6; // [esp+Ch] [ebp-44h]
    int i; // [esp+10h] [ebp-40h]
    int v8; // [esp+14h] [ebp-3Ch]
    int v9[14]; // [esp+18h] [ebp-38h] BYREF

    sub_49C15E((_DWORD)v9);
    v9[1] = 0;
    v9[2] = 0;
    v9[0] = unk_4B9248;
    sub_49AB05((int)unk_4BDC60, v9);
    if (!(unk_4B93B0 / 5u % 2) && *(int*)(thisx + 2528) >= 0)
    {
        for (i = 0; i < 2; ++i)
        {
            v1 = sub_4266D0((char*)(thisx + 76 * i + 11816));
            sub_47B91A(48 * i + *(_DWORD*)(thisx + 2528), *(_DWORD*)(thisx + 2532), v1, 0, -1);
        }
        sub_47B91A(*(_DWORD*)(thisx + 2528) + 40, *(_DWORD*)(thisx + 2532), &unk_4B29BC, 0, -1);
    }
    v8 = 2;
    if (*(_BYTE*)(thisx + 11812) == 2)
        v8 = 3;
    if (!(unk_4B93B0 / 5u % 2))
    {
        if (*(_WORD*)(thisx + 2564))
            sub_47B91A(156, 48, &unk_4B29C0, 0, -1);
        if (v8 + *(unsigned __int16*)(thisx + 2564) < *(unsigned __int16*)(thisx + 2566))
            sub_47B91A(156, 172, &unk_4B29C4, 0, -1);
    }
    result = *(unsigned __int8*)(thisx + 2516);
    if (!*(_BYTE*)(thisx + 2516))
    {
        sub_477F0C(0);
        v3 = sub_476CDA(0);
        v6 = v3 - sub_476C8B(0);
        if (v6)
        {
            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
            v5 = v6 + *(unsigned __int16*)(thisx + 2564);
            if (v8 + v5 > *(unsigned __int16*)(thisx + 2566))
                v5 = *(unsigned __int16*)(thisx + 2566) - v8;
            if (v5 < 0)
                LOWORD(v5) = 0;
            *(_WORD*)(thisx + 2564) = v5;
            sub_45B98A(thisx, -1);
        }
        result = sub_476DC7(0, 0);
        if (result)
        {
            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
            return sub_45C064(thisx);
        }
    }
    return result;
}

