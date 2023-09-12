#include "sub.h" 
_DWORD* sub_4814A3(_DWORD* thisx)
{
    *thisx = off_4AC330;
    thisx[1] = 0;
    thisx[2] = 0;
    *((_BYTE*)thisx + 13) = 0;
    *((_BYTE*)thisx + 12) = 0;
    *((_BYTE*)thisx + 14) = 0;
    thisx[4] = 0;
    *((_WORD*)thisx + 10) = 0;
    return thisx;
}
