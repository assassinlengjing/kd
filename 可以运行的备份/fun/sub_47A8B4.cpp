#include "sub.h" 
int __cdecl sub_47A8B4(HANDLE hFile)
{
    int v2; // [esp+0h] [ebp-128h]
    _DWORD* Block; // [esp+4h] [ebp-124h]
    int i; // [esp+Ch] [ebp-11Ch]
    int v5; // [esp+10h] [ebp-118h] BYREF
    int v6; // [esp+14h] [ebp-114h]
    DWORD NumberOfBytesRead; // [esp+18h] [ebp-110h] BYREF
    CHAR Buffer[256]; // [esp+1Ch] [ebp-10Ch] BYREF
    int v9; // [esp+124h] [ebp-4h]

    ReadFile(hFile, Buffer, 0xCu, (LPDWORD)&NumberOfBytesRead, 0);
    if (lstrcmpiA(Buffer, aWpgraphic))
        return 0;
    ReadFile(hFile, &v5, 1u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, &word_4B92EC, 2u, (LPDWORD)&NumberOfBytesRead, 0);
    v6 = (unsigned __int16)word_4B92EC;
    Block = (_DWORD*)operator new(140 * (unsigned __int16)word_4B92EC + 4);
    v9 = 0;
    if (Block)
    {
        *Block = v6;
        eh_vector_constructor_iterator(Block + 1, 0x8Cu, v6, sub_4909B0, sub_4909D5);
            v2 = (int)(Block + 1);
    }
    else
    {
        v2 = 0;
    }
    v9 = -1;
    dword_4B92E8 = v2;
    for (i = 0; i < (unsigned __int16)word_4B92EC; ++i)
        sub_4909F7((unsigned char*)(dword_4B92E8 + 140 * i), hFile, (unsigned __int8)v5);
    return 1;
}
