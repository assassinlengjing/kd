#include "sub.h" 
int sub_459DE1(int thisx)
{
    int result; // eax

    *(_DWORD*)(thisx + 104) = 14;
    *(_BYTE*)(thisx + 2516) = 1;
    sub_47C25B(0);
    *(_WORD*)(thisx + 2564) = 0;
    *(_WORD*)(thisx + 2566) = 0;
    if ((*(_BYTE*)(thisx + 2562) == 1 || *(_BYTE*)(thisx + 2562) == 3) && (unsigned __int16)sub_475850((short*)thisx + 11816) == 1)
        *(_WORD*)(thisx + 2564) = 1;
    sub_459E91(thisx, -1);
    result = thisx;
    if (*(_BYTE*)(thisx + 2562) == 2)
        return sub_456D33((const CHAR*)thisx, aMenuWav_0, 1, 0);
    return result;
}

