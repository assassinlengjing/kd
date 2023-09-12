#include "sub.h" 
void __fastcall sub_499622(int a1)
{
    int v1; // eax
    int v3[2]; // [esp+8h] [ebp-34h] BYREF
    char v4; // [esp+10h] [ebp-2Ch]
    int v5; // [esp+14h] [ebp-28h]
    int v6; // [esp+18h] [ebp-24h]
    int v7[2]; // [esp+1Ch] [ebp-20h] BYREF
    _DWORD* v8; // [esp+24h] [ebp-18h]
    int v9; // [esp+28h] [ebp-14h]
    int v10; // [esp+2Ch] [ebp-10h]
    int v11; // [esp+30h] [ebp-Ch]
    int v12; // [esp+34h] [ebp-8h]
    _BYTE* v13; // [esp+38h] [ebp-4h]

    v11 = *(_DWORD*)(a1 + 64);
    *(_DWORD*)(a1 + 64) = -1000;
    if (*(_DWORD*)(a1 + 12) != 8)
    {
        v10 = *(_DWORD*)(a1 + 96);
        v9 = *(_DWORD*)(a1 + 100);
        if (*(_DWORD*)(a1 + 12) == 1 && *(_DWORD*)(a1 + 56))
        {
            v10 = sub_426090(*(_DWORD**)(a1 + 56));
            v9 = sub_4260B0(*(_DWORD**)(a1 + 56));
        }
        v13 = (_BYTE*)sub_4741F8((int)byte_4B9B10, v10 / 800, v9 / 800);
        v8 = (_DWORD*)sub_426210((char*)byte_4B9B10);
        v12 = -100 * sub_486633(v8, v10 / 100, v9 / 100);
        if (v13 && sub_425C50(v13))
            v12 = -400 * (unsigned __int8)unknown_libname_6(v13);
        if (v13)
        {
            if ((unsigned __int8)sub_425C30(v13))
            {
                *(_DWORD*)(a1 + 64) = (*(_DWORD*)(a1 + 104) - v12) / 100 + (unsigned __int8)sub_425C30(v13);
                if (*(_DWORD*)(a1 + 172))
                {
                    if (v11 <= 0 && *(int*)(a1 + 64) > 0 && unknown_libname_5(v13) == 11)
                    {
                        sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9AE4, -1, 100, 100, 0);
                        sub_442863(v3);
                        sub_4641FE((_DWORD*)byte_4B9B10, *(_DWORD*)(a1 + 96), *(_DWORD*)(a1 + 100), *(_DWORD*)(a1 + 104), (int)v7);
                        v1 = sub_446465((char*)byte_4B9B10);
                        v3[0] = v1 + v7[0];
                        v3[1] = v7[1];
                        v4 = 20;
                        v5 = 0;
                        v6 = 0;
                        sub_4561A5((char*)byte_4B9B10, (int)v3);
                    }
                }
            }
        }
    }
}

