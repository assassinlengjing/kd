#include "sub.h" 
unsigned int __stdcall sub_49FFEC(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
    int j; // [esp+4h] [ebp-28h]
    int v5; // [esp+8h] [ebp-24h]
    int i; // [esp+14h] [ebp-18h]
    int v7[3]; // [esp+20h] [ebp-Ch]

    for (i = 0; i < 3; ++i)
    {
        v5 = 8 - byte_4CA218[i];
        v7[i] = 1;
        for (j = 0; j < v5; ++j)
            v7[i] *= 2;
    }
    return (((unsigned int)a3 / v7[2]) << byte_4CA212) | (((unsigned int)a2 / v7[1]) << byte_4CA211) | (((unsigned int)a1 / v7[0]) << byte_4CA210[0]);
}

