#include "sub.h" 
_BYTE* sub_480A00(_BYTE* thisx)
{
    *(_DWORD*)thisx = off_4AC2FC;
    thisx[7] = 0;
    thisx[6] = 0;
    thisx[4] = 0;
    thisx[5] = 0;
    *((_DWORD*)thisx + 2) = 0;
    return thisx;
}
