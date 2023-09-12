#include "sub.h" 
unsigned int sub_484F5F(int thisx)
{
    unsigned int result; // eax
    bool v2; // [esp+0h] [ebp-20h]
    bool v3; // [esp+4h] [ebp-1Ch]
    bool v4; // [esp+8h] [ebp-18h]
    bool v5; // [esp+Ch] [ebp-14h]
    char v6; // [esp+14h] [ebp-Ch]
    int i; // [esp+18h] [ebp-8h]
    unsigned __int8* v8; // [esp+1Ch] [ebp-4h]

    v8 = (unsigned __int8*)(*(_DWORD*)(thisx + 228) + 2 * *(_DWORD*)(thisx + 224));
    *(_BYTE*)(thisx + 264) = v8[1];
    v5 = *v8 >= 3u && *v8 <= 5u;
    v4 = *v8 >= 7u && *v8 <= 9u;
    *(_BYTE*)(thisx + 269) = v5 - v4;
    result = (unsigned int)v8;
    v3 = 0;
    if (*v8 >= 5u)
    {
        result = *v8;
        if (result <= 7)
            v3 = 1;
    }
    v2 = 1;
    if (*v8 != 2)
    {
        result = (unsigned int)v8;
        if (*v8 != 3)
        {
            result = *v8;
            if (result != 9)
                v2 = 0;
        }
    }
    *(_BYTE*)(thisx + 270) = v3 - v2;
    for (i = 0; i < 4; ++i)
    {
        v6 = *(_BYTE*)(*(_DWORD*)(thisx + 4 * i + 248) + *(_DWORD*)(thisx + 4 * i + 232));
        *(_BYTE*)(i + thisx + 265) = v6 & 0x7F;
        *(_BYTE*)(i + thisx + 271) = (v6 & 0x80) != 0;
        result = i + 1;
    }
    return result;
}
