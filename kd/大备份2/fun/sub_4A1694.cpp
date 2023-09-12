#include "sub.h" 
int sub_4A1694(int thisx, void* a2, int a3, int a4, size_t Size, int a6)
{
    int i; // [esp+4h] [ebp-10h]
    int v9; // [esp+8h] [ebp-Ch]
    int v10; // [esp+Ch] [ebp-8h]

    if (*(_BYTE*)(thisx + 1344))
        return sub_4A1C28((_DWORD*)thisx, a2, Size, a6, 1);
    v10 = *(_DWORD*)(thisx + 24);
    if (*(_DWORD*)(thisx + 20) < (signed int)(Size + a3) || v10 < a6 + a4)
        return 0;
    v9 = *(_DWORD*)(thisx + 56) * (v10 - a4 - 1) + a3;
    for (i = 0; i < a6; ++i)
        memcpy((char*)a2 + Size * i, (const void*)(v9 - *(_DWORD*)(thisx + 56) * i + *(_DWORD*)(thisx + 60)), Size);
    return 1;
}
