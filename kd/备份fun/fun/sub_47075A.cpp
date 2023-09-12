#include "sub.h" 
__int16 sub_47075A(_DWORD* thisx)
{
    __int16 v1; // bx
    __int16 v4; // [esp+8h] [ebp-4h]

    v1 = (unsigned __int8)sub_4265B0((_BYTE*)(dword_4B92E0 + 36 * *thisx));
    v4 = (char)sub_43EE02((unsigned __int8*)(dword_4B92D4 + 84 * *(__int16*)(thisx[3] + 236)), 0, thisx[3]) + v1;
    if (v4 <= 0)
        return 1;
    return v4;
}

