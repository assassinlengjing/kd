#include "sub.h" 
_BYTE* sub_46D26F(_BYTE* thisx)
{
    _BYTE* result; // eax

    thisx[11] = 0;
    thisx[10] = 0;
    thisx[4] = 0;
    *(_DWORD*)thisx = -1;
    *((_WORD*)thisx + 4) = 0;
    *((_WORD*)thisx + 3) = 0;
    *((_DWORD*)thisx + 3) = 0;
    *((_DWORD*)thisx + 4) = 0;
    thisx[20] = 0;
    result = thisx;
    thisx[26] = 0;
    *((_WORD*)thisx + 11) = 0;
    *((_WORD*)thisx + 12) = 0;
    return result;
}

