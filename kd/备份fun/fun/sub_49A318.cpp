#include "sub.h" 
int sub_49A318(int thisx)
{
    int k; // [esp+4h] [ebp-8h]
    int i; // [esp+8h] [ebp-4h]
    int j; // [esp+8h] [ebp-4h]

    eh_vector_constructor_iterator((void *)thisx, 0x18u, 2048, sub_499868, unknown_libname_28);
        * (_DWORD*)(thisx + 50516) = 0;
    *(_DWORD*)(thisx + 50520) = 0;
    *(_DWORD*)(thisx + 50512) = 0;
    *(_DWORD*)(thisx + 50504) = 0;
    *(_DWORD*)(thisx + 50508) = 0;
    *(_DWORD*)(thisx + 50524) = 0;
    *(_DWORD*)(thisx + 50528) = 0;
    *(_DWORD*)(thisx + 49152) = 0;
    *(_DWORD*)(thisx + 50436) = 0;
    *(_DWORD*)(thisx + 50500) = 0;
    *(_BYTE*)(thisx + 50441) = -1;
    *(_BYTE*)(thisx + 50445) = 0;
    memset((void*)(thisx + 49156), 0, 0x400u);
    memset((void*)(thisx + 50180), 0, 0x100u);
    for (i = 0; i < 256; ++i)
    {
        *(_BYTE*)(thisx + 4 * i + 49156) = (-1 - i) * (i % 3 == 0);
        *(_BYTE*)(thisx + 4 * i + 49157) = (-1 - i) * (i % 3 == 1);
        *(_BYTE*)(thisx + 4 * i + 49158) = (-1 - i) * (i % 3 == 2);
        *(_BYTE*)(thisx + 4 * i + 49159) = 1;
    }
    *(_BYTE*)(thisx + 50443) = 1;
    for (j = 0; j < 64; ++j)
    {
        for (k = 0; k < 64; ++k)
            byte_4CA21C[64 * k + j] = k * j / 64;
    }
    return thisx;
}

