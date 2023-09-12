#include "sub.h" 
_DWORD*  sub_49DB43(_DWORD* thisx)
{
    thisx[4] = 0;
    thisx[2] = 320;
    *thisx = 0;
    thisx[1] = 240;
    thisx[3] = 256;
    *((_BYTE*)thisx + 20) = 1;
    *((_BYTE*)thisx + 21) = 0;
    return thisx;
}
