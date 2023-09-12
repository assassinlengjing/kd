#include "sub.h" 
int sub_45CBC2(int thisx)
{
    *(_DWORD*)(thisx + 104) = 17;
    *(_BYTE*)(thisx + 2516) = 1;
    sub_45FF40((unsigned char*)thisx);
    *(_WORD*)(thisx + 2564) = 0;
    *(_WORD*)(thisx + 2566) = ((*(_BYTE*)(thisx + 11688) & 3) != 0) + *(unsigned __int8*)(thisx + 11688) / 4;
    sub_465102(thisx);
    return sub_456D33((const CHAR*)thisx, aMenuWav_3, 1, 0);
}

