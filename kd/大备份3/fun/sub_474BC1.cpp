#include "sub.h" 
int sub_474BC1(int thisx)
{
    int result; // eax
    int v3; // [esp+8h] [ebp-44h]
    int v4[14]; // [esp+Ch] [ebp-40h] BYREF
    int v5; // [esp+44h] [ebp-8h]
    int v6; // [esp+48h] [ebp-4h]

    sub_477F0C(0);
    v5 = 0;
    v3 = 0;
    v6 = 0;
    if (*(_DWORD*)(thisx + 15640) && !*(_BYTE*)(thisx + 2516))
    {
        v6 = (*(int(**)(_DWORD))(**(_DWORD**)(thisx + 15640) + 16))(*(_DWORD*)(thisx + 15640));
        *(_DWORD*)(thisx + 2528) = unknown_libname_13(*(_DWORD**)(thisx + 15640));
    }
    if (v6 == 1)
    {
        *(_BYTE*)(thisx + 2516) = 2;
        result = thisx;
        if (*(_DWORD*)(thisx + 112) == 3)
        {
            *(_DWORD*)(thisx + 108) = 13;
        }
        else if (*(_DWORD*)(thisx + 112) == 20)
        {
            *(_DWORD*)(thisx + 108) = 19;
            sub_45B65A(thisx);
            *(_BYTE*)(thisx + 11690) = 0;
            *(_BYTE*)(thisx + 11968) = *(_BYTE*)(thisx + 11689);
            *(_BYTE*)(thisx + 13044) = *(_BYTE*)(thisx + 11804);
            *(_BYTE*)(thisx + 13100) = 0;
            sub_45FF40((unsigned __int8*)thisx);
            return (int)sub_466901((_DWORD*)thisx);
        }
    }
    else
    {
        if (v6 != 2)
        {
            if (v6 == 3)
            {
                v5 = 1;
                v3 = 1;
            }
            else if (v6 == 4)
            {
                v5 = 1;
            }
        }
        if (v5 || v3)
            sub_47494F(thisx, v5, v3);
        sub_49C15E((int)v4);
        v4[1] = 0;
        v4[2] = 0;
        v4[0] = unk_4B9248;
        sub_49AB05((int)unk_4BDC60, v4);
        result = *(unsigned __int8*)(thisx + 2516);
        if (!*(_BYTE*)(thisx + 2516) && *(_DWORD*)(thisx + 15640))
            return (*(int(**)(_DWORD))(**(_DWORD**)(thisx + 15640) + 8))(*(_DWORD*)(thisx + 15640));
    }
    return result;
}

