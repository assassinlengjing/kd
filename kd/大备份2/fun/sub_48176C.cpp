#include "sub.h" 
int sub_48176C(int thisx, unsigned __int8 a2, unsigned __int8 a3)
{
    _DWORD* v4; // [esp+0h] [ebp-34h]
    int* Block; // [esp+Ch] [ebp-28h]
    int i; // [esp+14h] [ebp-20h]
    unsigned __int8 v8; // [esp+18h] [ebp-1Ch]
    unsigned __int8 v9; // [esp+1Ch] [ebp-18h]
    int v10; // [esp+24h] [ebp-10h]

    if (a2 == *(unsigned __int8*)(thisx + 12) && a3 == *(unsigned __int8*)(thisx + 13))
        return 1;
    if (!a2 || !a3)
        return 0;
    v10 = a3 * a2;
    Block = (int*)operator new(20 * v10 + 4);
    if (Block)
    {
        *Block = v10;
        eh_vector_constructor_iterator(Block + 1, 0x14u, v10, sub_48142C, sub_48148F);
            v4 = Block + 1;
    }
    else
    {
        v4 = 0;
    }
    if (!v4)
        return 0;
    if (*(_DWORD*)(thisx + 4))
    {
        v9 = *(_BYTE*)(thisx + 12);
        v8 = *(_BYTE*)(thisx + 13);
        if (v9 > (int)a2)
            v9 = a2;
        if (v8 > (int)a3)
            v8 = a3;
        for (i = 0; i < v8; ++i)
            memcpy(&v4[5 * a2 * i], (const void*)(20 * *(unsigned __int8*)(thisx + 12) * i + *(_DWORD*)(thisx + 4)), v9);
        sub_48151A(thisx);
    }
    *(_DWORD*)(thisx + 4) = (_DWORD)v4;
    *(_BYTE*)(thisx + 12) = a2;
    *(_BYTE*)(thisx + 13) = a3;
    *(_DWORD*)(thisx + 8) = (_DWORD)operator new(a3 * a2);
    memset(*(void**)(thisx + 8), 0, a3 * a2);
    return 1;
}

