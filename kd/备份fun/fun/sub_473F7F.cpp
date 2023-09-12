#include "sub.h" 
int(*** sub_473F7F(_DWORD* thisx))(_DWORD, int)
{
    int v1; // eax
    _DWORD* v2; // eax

    sub_45F935((int)thisx);
    sub_45FD81((int)thisx);
    thisx[3276] = -1;
    v1 = unknown_libname_10(thisx + 32);
    sub_49DA8A((int*)byte_4BDC60, v1);
    if (sub_4894E3(thisx + 32, 0) >= 0)
    {
        v2 = (_DWORD*)sub_4894E3(thisx + 32, 0);
        sub_43FED3((int*)dword_4BDB28, v2);
    }
    thisx[323] = 0;
    return sub_4898D3(thisx + 32);
}
