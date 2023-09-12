#include "sub.h" 
int sub_494AC9(int thisx)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]
    int j; // [esp+4h] [ebp-4h]

    *(_DWORD*)(thisx + 164) = 0;
    *(_DWORD*)(thisx + 172) = 0;
    *(_DWORD*)(thisx + 168) = 0;
    *(_DWORD*)(thisx + 176) = 0;
    *(_DWORD*)(thisx + 4) = 0;
    *(_BYTE*)(thisx + 195) = 5;
    *(_BYTE*)(thisx + 194) = 0;
    *(_BYTE*)(thisx + 180) = 0;
    for (i = 0; i < 8; ++i)
        *(_BYTE*)(i + thisx + 181) = 0;
    *(_BYTE*)(thisx + 69) = 1;
    *(_BYTE*)(thisx + 68) = 0;
    *(_BYTE*)(thisx + 71) = 0;
    *(_BYTE*)(thisx + 72) = 0;
    *(_BYTE*)(thisx + 22) = 0;
    *(_DWORD*)(thisx + 8) = 3;
    *(_BYTE*)(thisx + 70) = -1;
    for (j = 0; j < 2; ++j)
        *(_WORD*)(thisx + 16 * j + 24) = -2;
    *(_DWORD*)(thisx + 156) = 0;
    *(_DWORD*)(thisx + 64) = 0;
    *(_DWORD*)(thisx + 152) = 0;
    *(_DWORD*)(thisx + 144) = 0;
    *(_DWORD*)(thisx + 148) = 0;
    *(_DWORD*)(thisx + 116) = 0;
    *(_DWORD*)(thisx + 108) = 0;
    *(_DWORD*)(thisx + 112) = 0;
    *(_DWORD*)(thisx + 104) = 0;
    *(_DWORD*)(thisx + 96) = 0;
    *(_DWORD*)(thisx + 100) = 0;
    *(_DWORD*)(thisx + 160) = 0;
    *(_DWORD*)(thisx + 88) = 0;
    *(_DWORD*)(thisx + 92) = 0;
    *(_DWORD*)(thisx + 76) = 0;
    *(_DWORD*)(thisx + 80) = 0;
    *(_DWORD*)(thisx + 84) = 0;
    *(_DWORD*)(thisx + 128) = 0;
    *(_DWORD*)(thisx + 120) = 0;
    *(_DWORD*)(thisx + 124) = 0;
    *(_DWORD*)(thisx + 140) = 1;
    *(_DWORD*)(thisx + 136) = 1;
    *(_DWORD*)(thisx + 132) = 1;
    *(_DWORD*)(thisx + 16) = 0;
    *(_DWORD*)(thisx + 12) = 0;
    *(_DWORD*)(thisx + 56) = 0;
    *(_DWORD*)(thisx + 60) = 0;
    *(_WORD*)(thisx + 190) = 0;
    result = thisx;
    *(_WORD*)(thisx + 20) = 0;
    *(_WORD*)(thisx + 192) = 0;
    return result;
}

