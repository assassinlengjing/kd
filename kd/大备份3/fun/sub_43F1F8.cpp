#include "sub.h" 
int __fastcall sub_43F1F8(int a1)
{
    int result; // eax
    int v3[2]; // [esp+4h] [ebp-54h] BYREF
    int v4; // [esp+Ch] [ebp-4Ch]
    int v5; // [esp+10h] [ebp-48h]
    int i; // [esp+14h] [ebp-44h]
    CHAR String[8]; // [esp+18h] [ebp-40h] BYREF
    int v8[2]; // [esp+20h] [ebp-38h] BYREF
    int v9; // [esp+28h] [ebp-30h]

    result = a1;
    if (*(_DWORD*)(a1 + 12))
    {
        wsprintfA(String, "%2d", *(unsigned __int16*)(a1 + 4));
        v5 = lstrlenA(String);
        sub_4097DF(*(void**)(a1 + 12), (int)v3);
        sub_49C15E((_DWORD)v8);
        v4 = v3[0] - 12;
        if (v3[0] - 12 >= 0)
        {
            if (v4 + 8 * v5 > 320)
                v4 = 320 - 8 * v5;
        }
        else
        {
            v4 = 0;
        }
        result = *(_DWORD*)(a1 + 8) / 2;
        v9 = v3[1] - 32 - result;
        if (v9 < 0)
            v9 = 0;
        for (i = 0; i < v5; ++i)
        {
            if (String[i] != 32)
            {
                v8[1] = v4 + 8 * i;
                v8[0] = unk_4B91FC + String[i] - 48;
                sub_49AB05((int)unk_4BDC60, v8);
            }
            result = i + 1;
        }
    }
    return result;
}

