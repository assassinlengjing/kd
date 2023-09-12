#include "sub.h" 
int sub_48A5DA(int thisx, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, char a10)
{
    int result; // eax

    *(_BYTE*)(thisx + 8) = a2;
    *(_DWORD*)(thisx + 104) = 100 * a3;
    *(_DWORD*)(thisx + 20) = *(_DWORD*)(thisx + 104);
    *(_DWORD*)(thisx + 108) = 100 * a4;
    *(_DWORD*)(thisx + 24) = *(_DWORD*)(thisx + 108);
    *(_DWORD*)(thisx + 112) = 100 * a5;
    *(_DWORD*)(thisx + 28) = *(_DWORD*)(thisx + 112);
    *(_DWORD*)(thisx + 116) = 0;
    *(_DWORD*)(thisx + 120) = 0;
    *(_DWORD*)(thisx + 124) = 0;
    *(_DWORD*)(thisx + 128) = 0;
    *(_DWORD*)(thisx + 132) = 0;
    *(_DWORD*)(thisx + 136) = 0;
    *(_DWORD*)(thisx + 16) = a6;
    *(_DWORD*)(thisx + 140) = a7;
    *(_DWORD*)(thisx + 32) = a7;
    *(_DWORD*)(thisx + 144) = a8;
    *(_DWORD*)(thisx + 36) = a8;
    *(_DWORD*)(thisx + 4) = a9;
    *(_BYTE*)(thisx + 86) = a10;
    *(_BYTE*)(thisx + 85) = a10;
    *(_BYTE*)(thisx + 148) = 0;
    *(_DWORD*)(thisx + 156) = 0;
    *(_DWORD*)(thisx + 52) = 0;
    result = thisx;
    *(_DWORD*)(thisx + 100) = 0;
    *(_DWORD*)(thisx + 96) = 0;
    return result;
}
