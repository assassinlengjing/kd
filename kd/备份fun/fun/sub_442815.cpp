#include "sub.h" 
int sub_442815(int thisx)
{
    int result; // eax

    *(_BYTE*)(thisx + 20) = 0;
    *(_DWORD*)(thisx + 12) = 0;
    *(_DWORD*)(thisx + 24) = 0;
    *(_DWORD*)(thisx + 4) = 0;
    *(_DWORD*)(thisx + 8) = 0;
    *(_DWORD*)(thisx + 28) = 0;
    result = thisx;
    *(_DWORD*)(thisx + 16) = 0;
    return result;
}

