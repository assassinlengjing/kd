#include "sub.h" 
int sub_49C15E(int thisx)
{
    *(_DWORD*)(thisx + 24) = 0;
    *(_DWORD*)(thisx + 28) = 0;
    *(_DWORD*)(thisx + 4) = 0;
    *(_DWORD*)(thisx + 8) = 0;
    *(_DWORD*)(thisx + 36) = -1;
    *(_DWORD*)(thisx + 12) = 0;
    *(_DWORD*)(thisx + 20) = 256;
    *(_DWORD*)(thisx + 16) = 256;
    *(_DWORD*)(thisx + 40) = 64;
    *(_BYTE*)(thisx + 44) = 0;
    *(_DWORD*)(thisx + 32) = 1;
    *(_BYTE*)(thisx + 45) = 0;
    *(_WORD*)(thisx + 50) = 0;
    *(_WORD*)(thisx + 48) = 0;
    *(_WORD*)(thisx + 46) = 0;
    *(_DWORD*)(thisx + 52) = 0;
    return thisx;
}
