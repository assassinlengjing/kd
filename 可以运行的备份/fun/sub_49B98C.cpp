#include "sub.h" 
_DWORD* sub_49B98C(_DWORD* thisx)
{
    _DWORD* result; // eax

    result = thisx;
    if (thisx[12609])
    {
        result = (_DWORD*)thisx[12609];
        if (result)
            result = (_DWORD*)sub_4A1390((void*)thisx[12609], 1);
        thisx[12609] = 0;
    }
    return result;
}

