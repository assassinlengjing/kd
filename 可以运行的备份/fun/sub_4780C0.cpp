#include "sub.h" 
signed int sub_4780C0()
{
    signed int result; // eax
    int v1; // [esp+4h] [ebp-10h]
    _BYTE* v2; // [esp+8h] [ebp-Ch]
    signed int j; // [esp+Ch] [ebp-8h]
    int i; // [esp+10h] [ebp-4h]
    signed int k; // [esp+10h] [ebp-4h]

    for (i = 0; i < dword_4B9368; ++i)
    {
        for (j = 0; j < (int)dword_4B93A0; ++j)
            *(_BYTE*)(*((_DWORD*)dword_4B9364 + i) + j) = 0;
    }
    for (k = 0; ; ++k)
    {
        result = k;
        if (k >= (int)Size)
            break;
        v2 = (_BYTE*)(36 * k + dword_4B92E0);
        v1 = (unsigned __int8)sub_4016F0(v2);
        *(_BYTE*)(*((_DWORD*)dword_4B9364 + v1) + (unsigned __int8)sub_401710(v2)) = 1;
    }
    **((_BYTE**)dword_4B9364 + 3) = 1;
    return result;
}
