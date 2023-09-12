#include "sub.h" 
_DWORD* sub_4020B0(_DWORD* thisx)
{
    thisx[9] = 3;
    *thisx = 0;
    thisx[3] = 0;
    *((_BYTE*)thisx + 4) = 0;
    thisx[2] = 0;
    *((_BYTE*)thisx + 17) = -1;
    *((_BYTE*)thisx + 40) = 0;
    thisx[8] = 0;
    thisx[11] = 0;
    thisx[12] = 83;
    *((_BYTE*)thisx + 30) = 0;
    return thisx;
}

