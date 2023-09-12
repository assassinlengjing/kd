#include "sub.h" 
int __fastcall sub_483927(int a1, int a2, HANDLE hFile, int a4, int a5)
{
    int result; // eax
    int v7; // [esp+4h] [ebp-1Ch]
    unsigned __int8 v8; // [esp+8h] [ebp-18h]
    int v9; // [esp+Ch] [ebp-14h]
    char Buffer[4]; // [esp+10h] [ebp-10h] BYREF
    DWORD NumberOfBytesWritten; // [esp+14h] [ebp-Ch] BYREF
    unsigned int v12; // [esp+18h] [ebp-8h]
    int i; // [esp+1Ch] [ebp-4h]

    v12 = 0;
    result = a1;
    if ((*(_BYTE*)(a1 + 24) & 0xF) == 0 || a5)
    {
        v9 = *(unsigned __int8*)(a1 + 24);
        if (a5)
            v9 += 16;
        v12 = (16 * (v9 / 16) + 16) % 0x20u;
        result = a1;
        if (*(_BYTE*)(a1 + 2 * v12 + 30))
        {
            Buffer[0] = a4;
            WriteFile(hFile, Buffer, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
            WriteFile(hFile, (LPCVOID)(a1 + 2 * v12 + 29), 0x20u, (LPDWORD)&NumberOfBytesWritten, 0);
            result = (int)memset((void*)(a1 + 2 * v12 + 29), 0, 0x20u);
        }
    }
    for (i = 0; i < 4; ++i)
    {
        result = i + a1;
        if ((*(_BYTE*)(i + a1 + 25) & 0xF) == 0 || a5)
        {
            v7 = *(unsigned __int8*)(i + a1 + 25);
            if (a5)
                v7 += 16;
            v12 = (16 * (v7 / 16) + 16) % 0x20u;
            v8 = *(_BYTE*)(a1 + 32 * i + v12 + 93) & 0x7F;
            result = v8;
            if (v8)
            {
                Buffer[0] = a4 | (16 * (i + 1));
                WriteFile(hFile, Buffer, 1u, (LPDWORD)&NumberOfBytesWritten, 0);
                WriteFile(hFile, (LPCVOID)(a1 + 32 * i + v12 + 93), 0x10u, (LPDWORD)&NumberOfBytesWritten, 0);
                result = (int)memset((void*)(a1 + 32 * i + v12 + 93), 0, 0x10u);
            }
        }
    }
    return result;
}
