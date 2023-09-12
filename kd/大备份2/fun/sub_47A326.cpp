#include "sub.h" 
int __cdecl sub_47A326(HANDLE hFile, int a2, LPVOID lpBuffer)
{
    _DWORD* v4; // [esp+0h] [ebp-28h]
    int* Block; // [esp+4h] [ebp-24h]
    int i; // [esp+Ch] [ebp-1Ch]
    char Buffer[4]; // [esp+10h] [ebp-18h] BYREF
    DWORD NumberOfBytesRead; // [esp+14h] [ebp-14h] BYREF
    int v9; // [esp+18h] [ebp-10h]
    int v10; // [esp+24h] [ebp-4h]

    ReadFile(hFile, Buffer, 2u, (LPDWORD)&NumberOfBytesRead, 0);
    ReadFile(hFile, lpBuffer, 2u, (LPDWORD)&NumberOfBytesRead, 0);
    v9 = *(unsigned __int16*)lpBuffer;
    Block = (int*)operator new(12 * v9 + 4);
    v10 = 0;
    if (Block)
    {
        *Block = v9;
        eh_vector_constructor_iterator(Block + 1, 0xCu, v9, sub_48F630, sub_48F666);
            v4 = Block + 1;
    }
    else
    {
        v4 = 0;
    }
    v10 = -1;
    *(_DWORD*)a2 = (_DWORD)v4;
    for (i = 0; i < *(unsigned __int16*)lpBuffer; ++i)
        sub_48F6C5((LPVOID*)(12 * i + *(_DWORD*)a2), hFile);
    return 1;
}

