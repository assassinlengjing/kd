#include "sub.h" 
_DWORD* sub_488E76(_DWORD* thisx)
{
    _DWORD* result; // eax

    *thisx = 0;
    thisx[1] = 0;
    thisx[2] = 0;
    result = thisx;
    *((_BYTE*)thisx + 13) = 0;
    *((_BYTE*)thisx + 12) = 0;
    return result;
}

