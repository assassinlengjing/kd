#include "sub.h" 
int sub_45CC4E(int thisx)
{
    char* v1; // eax
    int result; // eax
    int v3; // esi
    int v5; // [esp+8h] [ebp-44h]
    int v6; // [esp+Ch] [ebp-40h]
    int i; // [esp+10h] [ebp-3Ch]
    int v8[14]; // [esp+14h] [ebp-38h] BYREF

    sub_49C15E((_DWORD)v8);
    v8[1] = 0;
    v8[2] = 0;
    v8[0] = unk_4B9248;
    sub_49AB05((int)unk_4BDC60, v8);
    if (!(unk_4B93B0 / 5u % 2) && *(int*)(thisx + 2528) > 0 && *(int*)(thisx + 2532) > 0)
    {
        for (i = 0; i < 2; ++i)
        {
            v1 = sub_4266D0((char*)(thisx + 76 * i + 11816));
            sub_47B91A(48 * i + *(_DWORD*)(thisx + 2528), *(_DWORD*)(thisx + 2532), v1, 0, -1);
        }
        sub_47B91A(*(_DWORD*)(thisx + 2528) + 40, *(_DWORD*)(thisx + 2532), &unk_4B29EC, 0, -1);
    }
    if (!(unk_4B93B0 / 5u % 2))
    {
        if (*(_WORD*)(thisx + 2564))
            sub_47B91A(24, 108, asc_4B29F0, 0, -1);
        if (*(unsigned __int16*)(thisx + 2564) + 2 < *(unsigned __int16*)(thisx + 2566))
            sub_47B91A(288, 108, asc_4B29F4, 0, -1);
    }
    sub_477F0C(0);
    result = *(unsigned __int8*)(thisx + 2516);
    if (!*(_BYTE*)(thisx + 2516))
    {
        v3 = sub_476D78(0);
        v6 = v3 - sub_476D29(0);
        if (v6)
        {
            v5 = v6 + *(unsigned __int16*)(thisx + 2564);
            if (v5 + 2 > *(unsigned __int16*)(thisx + 2566))
                v5 = *(unsigned __int16*)(thisx + 2566) - 2;
            if (v5 < 0)
                LOWORD(v5) = 0;
            *(_WORD*)(thisx + 2564) = v5;
            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
            sub_465102(thisx);
        }
        result = sub_476DC7(0, 0);
        if (result)
        {
            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
            if (*(_BYTE*)(thisx + 2562))
            {
                result = *(unsigned __int8*)(thisx + 2562);
                if (result == 1)
                {
                    *(_DWORD*)(thisx + 108) = 19;
                    *(_BYTE*)(thisx + 2516) = 2;
                }
            }
            else
            {
                sub_46287E((char*)thisx);
                if (*(_WORD*)(thisx + 2566) || *(_WORD*)(thisx + 2568))
                {
                    result = thisx;
                    *(_DWORD*)(thisx + 108) = 18;
                    *(_BYTE*)(thisx + 2516) = 2;
                }
                else
                {
                    *(_DWORD*)(thisx + 108) = 19;
                    result = thisx;
                    *(_BYTE*)(thisx + 2516) = 2;
                    *(_BYTE*)(thisx + 13100) = 0;
                }
            }
        }
    }
    return result;
}

