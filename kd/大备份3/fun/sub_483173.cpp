#include "sub.h" 
_DWORD* sub_483173(_DWORD* thisx, _DWORD* a2)
{
    _DWORD* result; // eax

    if (thisx[1] <= (unsigned int)a2)
        return sub_48314A(thisx);
    result = a2;
    thisx[2] = (_DWORD)a2;
    thisx[3] = 0;
    unk_4CA1D0 = 0;
    return result;
}

