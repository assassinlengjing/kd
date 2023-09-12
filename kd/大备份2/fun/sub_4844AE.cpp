#include "sub.h" 
unsigned int __fastcall sub_4844AE(unsigned int a1)
{
    unsigned int result; // eax
    bool v2; // [esp+4h] [ebp-20h]
    bool v3; // [esp+8h] [ebp-1Ch]
    bool v4; // [esp+Ch] [ebp-18h]
    bool v5; // [esp+10h] [ebp-14h]
    char v6; // [esp+18h] [ebp-Ch]
    unsigned __int8* v7; // [esp+1Ch] [ebp-8h]
    int i; // [esp+20h] [ebp-4h]

    if (*(_BYTE*)(a1 + 264))
        --* (_BYTE*)(a1 + 264);
    result = *(unsigned __int8*)(a1 + 264);
    if (!*(_BYTE*)(a1 + 264))
    {
        *(_BYTE*)(a1 + 269) = 0;
        *(_BYTE*)(a1 + 270) = 0;
        result = a1;
        if (*(_DWORD*)(a1 + 224) < *(_DWORD*)(a1 + 4))
        {
            ++* (_DWORD*)(a1 + 224);
            v7 = (unsigned __int8*)(*(_DWORD*)(a1 + 228) + 2 * *(_DWORD*)(a1 + 224));
            *(_BYTE*)(a1 + 264) = v7[1];
            v5 = *v7 >= 3u && *v7 <= 5u;
            v4 = *v7 >= 7u && *v7 <= 9u;
            *(_BYTE*)(a1 + 269) = v5 - v4;
            result = (unsigned int)v7;
            v3 = 0;
            if (*v7 >= 5u)
            {
                result = *v7;
                if (result <= 7)
                    v3 = 1;
            }
            v2 = 1;
            if (*v7 != 2)
            {
                result = (unsigned int)v7;
                if (*v7 != 3)
                {
                    result = *v7;
                    if (result != 9)
                        v2 = 0;
                }
            }
            *(_BYTE*)(a1 + 270) = v3 - v2;
        }
    }
    for (i = 0; i < 4; ++i)
    {
        if (*(_BYTE*)(i + a1 + 265))
            --* (_BYTE*)(i + a1 + 265);
        if (!*(_BYTE*)(i + a1 + 265))
        {
            *(_BYTE*)(i + a1 + 271) = 0;
            if (*(_DWORD*)(a1 + 4 * i + 232) < *(_DWORD*)(a1 + 4 * i + 8))
            {
                ++* (_DWORD*)(a1 + 4 * i + 232);
                v6 = *(_BYTE*)(*(_DWORD*)(a1 + 4 * i + 248) + *(_DWORD*)(a1 + 4 * i + 232));
                *(_BYTE*)(i + a1 + 265) = v6 & 0x7F;
                *(_BYTE*)(i + a1 + 271) = (v6 & 0x80) != 0;
            }
        }
        result = i + 1;
    }
    return result;
}

