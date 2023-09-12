#include "sub.h" 
int sub_457930(int thisx)
{
    *(_DWORD*)(thisx + 104) = 13;
    *(_BYTE*)(thisx + 2516) = 1;
    *(_DWORD*)(thisx + 2528) = 0;
    *(_DWORD*)(thisx + 2532) = 0;
    *(_WORD*)(thisx + 2564) = 0;
    *(_WORD*)(thisx + 2566) = 4;
    *(_WORD*)(thisx + 2570) = 0;
    if (*(_DWORD*)(thisx + 112) == 14)
    {
        sub_45938D((_BYTE*)(thisx + 76 * *(unsigned __int16*)(thisx + 2568) + 11816));
    }
    else
    {
        *(_WORD*)(thisx + 2568) = 0;
        sub_45938D((_BYTE*)(thisx + 11816));
        sub_45938D((_BYTE*)(thisx + 11892));
    }
    return sub_4579E8(thisx, -1);
}

