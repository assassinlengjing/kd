#include "sub.h" 
int sub_48159D(int thisx, char a2, char a3)
{
    _DWORD* v4; // [esp+0h] [ebp-24h]
    int* Block; // [esp+Ch] [ebp-18h]
    int v7; // [esp+14h] [ebp-10h]

    if (!a2 || !a3)
        return 0;
    sub_48151A(thisx);
    *(_BYTE*)(thisx + 12) = a2;
    *(_BYTE*)(thisx + 13) = a3;
    v7 = *(unsigned __int8*)(thisx + 13) * *(unsigned __int8*)(thisx + 12);
    Block = (int*)operator new(20 * v7 + 4);
    if (Block)
    {
        *Block = v7;
        eh_vector_constructor_iterator(Block + 1, 0x14u, v7, sub_48142C, sub_48148F);
            v4 = Block + 1;
    }
    else
    {
        v4 = 0;
    }
    *(_DWORD*)(thisx + 4) = (_DWORD)v4;
    if (!*(_DWORD*)(thisx + 4))
        return 0;
    *(_DWORD*)(thisx + 8) = (_DWORD)operator new(*(unsigned __int8*)(thisx + 13) * *(unsigned __int8*)(thisx + 12));
    if (!*(_DWORD*)(thisx + 8))
        return 0;
    memset(*(void**)(thisx + 8), 0, *(unsigned __int8*)(thisx + 13) * *(unsigned __int8*)(thisx + 12));
    return 1;
}
