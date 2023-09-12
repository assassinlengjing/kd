#include "sub.h" 
char sub_4868F8(_DWORD* thisx, unsigned __int8 a2, unsigned __int8 a3)
{
    _BYTE* v5; // [esp+4h] [ebp-4h]

    if (!unknown_libname_24(thisx + 1))
        return 0;
    v5 = (_BYTE*)sub_4816F5((int)(thisx + 1), a2, a3);
    if (v5)
        return unknown_libname_5(v5);
    else
        return -1;
}
