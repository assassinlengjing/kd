#include "sub.h" 
unsigned __int8 __fastcall sub_48342F(int a1, int a2, unsigned __int8 a3, char a4)
{
    unsigned __int8 result; // al
    int v5; // ecx
    unsigned __int8 v7; // [esp+Ch] [ebp-20h]
    char v8; // [esp+10h] [ebp-1Ch]
    unsigned __int8* v9; // [esp+18h] [ebp-14h]
    unsigned __int8* v10; // [esp+18h] [ebp-14h]
    char v11; // [esp+1Ch] [ebp-10h]
    char v12; // [esp+20h] [ebp-Ch]
    int i; // [esp+24h] [ebp-8h]
    int v14; // [esp+28h] [ebp-4h]
    BOOL v15; // [esp+28h] [ebp-4h]

    v9 = (unsigned __int8*)(a1 + 2 * *(unsigned __int8*)(a1 + 24) + 29);
    if (!*v9)
        *v9 = a3;
    result = *v9 != (char)a3;
    v14 = result;
    if (*v9 == (char)a3)
    {
        result = (unsigned __int8)v9;
        if (v9[1] == 255)
        {
            v14 = 1;
        }
        else
        {
            result = v9[1] + 1;
            v9[1] = result;
        }
    }
    if (v14)
    {
        *(_BYTE*)(a1 + 24) = (*(unsigned __int8*)(a1 + 24) + 1) % 32;
        v10 = (unsigned __int8*)(a1 + 2 * *(unsigned __int8*)(a1 + 24) + 29);
        *v10 = a3;
        v10[1] = 1;
        result = a1;
        ++* (_DWORD*)(a1 + 4);
    }
    v12 = 1;
    for (i = 0; i < 4; ++i)
    {
        v11 = *(_BYTE*)(a1 + 32 * i + 93 + *(unsigned __int8*)(i + a1 + 25));
        v8 = v11 & 0x7F;
        v7 = (unsigned __int8)(v12 & a4) != 0;
        v5 = (v11 & 0x80) != 0;
        v15 = v5 != v7;
        if (v5 != v7 && !v8)
        {
            v15 = 0;
            *(_BYTE*)(a1 + 32 * i + 93 + *(unsigned __int8*)(i + a1 + 25)) = v7 << 7;
            *(_DWORD*)(a1 + 4 * i + 8) = 1;
        }
        if (!v15)
        {
            if (v8 == 127)
                v15 = 1;
            else
                ++* (_BYTE*)(a1 + 32 * i + 93 + *(unsigned __int8*)(i + a1 + 25));
        }
        if (v15)
        {
            *(_BYTE*)(i + a1 + 25) = (*(unsigned __int8*)(i + a1 + 25) + 1) % 32;
            *(_BYTE*)(a1 + 32 * i + 93 + *(unsigned __int8*)(i + a1 + 25)) = (v7 << 7) | 1;
            ++* (_DWORD*)(a1 + 4 * i + 8);
        }
        v12 *= 2;
        result = i + 1;
    }
    return result;
}
