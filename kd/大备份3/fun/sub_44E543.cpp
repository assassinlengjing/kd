#include "sub.h" 
_DWORD*  sub_44E543(_DWORD* thisx)
{
    int v1; // eax
    _DWORD* result; // eax
    _DWORD* v3; // eax

    sub_45F935((int)thisx);
    sub_45FD81((int)thisx);
    thisx[3276] = -1;
    v1 = unknown_libname_10(thisx + 32);
    sub_49DA8A((_DWORD*)unk_4BDC60, v1);
    result = (_DWORD*)sub_4894E3(thisx + 32, 0);
    if ((int)result >= 0)
    {
        v3 = (_DWORD*)sub_4894E3(thisx + 32, 0);
        return sub_43FED3((_DWORD*)unk_4BDB28, v3);
    }
    return result;
}


