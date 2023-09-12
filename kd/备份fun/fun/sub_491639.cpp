#include "sub.h" 
int sub_491639(int thisx, int a2)
{
    *(_DWORD*)(thisx + 16) = 1;
    *(_DWORD*)(thisx + 12) = 1;
    *(_DWORD*)(thisx + 56) = a2;
    *(_DWORD*)(thisx + 172) = 0;
    *(_DWORD*)(thisx + 168) = 0;
    *(_BYTE*)(thisx + 68) = 0;
    *(_BYTE*)(thisx + 71) = 0;
    *(_DWORD*)(thisx + 76) = 0;
    if (*(_BYTE*)(thisx + 72) != 11 && *(_BYTE*)(thisx + 72) != 13)
        *(_DWORD*)(thisx + 80) = 0;
    *(_DWORD*)(thisx + 120) = 0;
    *(_DWORD*)(thisx + 124) = 0;
    *(_DWORD*)(thisx + 128) = 0;
    *(_DWORD*)(thisx + 144) = 0;
    *(_DWORD*)(thisx + 148) = 0;
    *(_DWORD*)(thisx + 152) = 0;
    return sub_4995EB((_WORD*)thisx);
}
