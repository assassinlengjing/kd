#include "sub.h" 
_DWORD* sub_43F1A3(int thisx)
{
    _DWORD* result; // eax

    result = (_DWORD*)thisx;
    if (*(_DWORD*)(thisx + 12))
    {
        result = (_DWORD*)thisx;
        if ((int)++ * (_DWORD*)(thisx + 8) > 24)
        {
            *(_DWORD*)(thisx + 12) = 0;
            *(_WORD*)(thisx + 4) = 0;
            *(_DWORD*)(thisx + 8) = 0;
            return sub_4532B9((_DWORD*) & byte_4B9B10);
        }
    }
    return result;
}

