#include "sub.h" 
int sub_480054(int thisx, int a2)
{
    int result; // eax
    _DWORD* v3; // [esp+0h] [ebp-40h]
    int* Block; // [esp+Ch] [ebp-34h]
    int v6; // [esp+1Ch] [ebp-24h]
    int v7; // [esp+20h] [ebp-20h]
    int v8; // [esp+20h] [ebp-20h]
    int i; // [esp+24h] [ebp-1Ch]
    int v10; // [esp+28h] [ebp-18h]
    int j; // [esp+2Ch] [ebp-14h]
    int v12; // [esp+30h] [ebp-10h]

    if (*(_DWORD*)(thisx + 12))
        sub_480950(*(char**)(thisx + 12), 3);
    *(_DWORD*)(thisx + 20) = 0;
    *(_DWORD*)(thisx + 24) = 0;
    *(_BYTE*)(thisx + 28) = 3;
    v10 = 0;
    v7 = 0;
    for (i = 0; ; ++i)
    {
        v6 = lstrlenA((LPCSTR)(v7 + a2));
        if (!v6)
            break;
        v7 += v6 + 1;
        if (v10 < v6)
            v10 = v6;
    }
    *(_DWORD*)(thisx + 16) = i;
    v12 = *(_DWORD*)(thisx + 16);
    Block = (int*)operator new(32 * v12 + 4);
    if (Block)
    {
        *Block = v12;
        eh_vector_constructor_iterator(Block + 1, 0x20u, v12, sub_47FD4E, sub_47FDAB);
            v3 = Block + 1;
    }
    else
    {
        v3 = 0;
    }
    *(_DWORD*)(thisx + 12) = (_DWORD)v3;
    v8 = 0;
    for (j = 0; j < i; ++j)
    {
        sub_47FE72((int*)*(_DWORD*)(thisx + 12) + 32 * j, (LPCSTR)(v8 + a2), 0, 0, 0, 0);
        v8 += lstrlenA((LPCSTR)(v8 + a2)) + 1;
    }
    *(_BYTE*)(thisx + 6) = v10 / 2 + 5;
    result = 2 * i + 2;
    *(_BYTE*)(thisx + 7) = result;
    return result;
}

