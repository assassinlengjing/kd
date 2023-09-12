#include "sub.h" 
int sub_494979(int thisx)
{
    int result; // eax

    result = thisx;
    if (*(_DWORD*)(thisx + 12) != 8)
    {
        *(_DWORD*)(thisx + 16) = 3;
        *(_DWORD*)(thisx + 12) = 3;
        *(_DWORD*)(thisx + 96) = sub_426090(*(_DWORD**)(thisx + 56));
        *(_DWORD*)(thisx + 100) = sub_4260B0(*(_DWORD**)(thisx + 56));
        *(_DWORD*)(thisx + 56) = 0;
        *(_DWORD*)(thisx + 168) = 0;
        *(_DWORD*)(thisx + 172) = 1;
        *(_BYTE*)(thisx + 180) = 0;
        *(_DWORD*)(thisx + 76) = 0;
        if (*(_BYTE*)(thisx + 72) != 11 && *(_BYTE*)(thisx + 72) != 13)
            *(_DWORD*)(thisx + 80) = 0;
        *(_DWORD*)(thisx + 152) = 0;
        *(_DWORD*)(thisx + 148) = 0;
        *(_DWORD*)(thisx + 144) = 0;
        *(_DWORD*)(thisx + 128) = 0;
        *(_DWORD*)(thisx + 124) = 0;
        *(_DWORD*)(thisx + 120) = 0;
        result = thisx;
        *(_DWORD*)(thisx + 152) = 30;
        if (*(_BYTE*)(thisx + 72) == 2)
        {
            result = thisx;
            *(_DWORD*)(thisx + 76) = 3;
        }
        else if (*(_BYTE*)(thisx + 72) == 3)
        {
            result = thisx;
            *(_DWORD*)(thisx + 76) = 4;
        }
    }
    return result;
}
