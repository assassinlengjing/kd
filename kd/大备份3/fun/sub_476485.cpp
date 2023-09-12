#include "sub.h" 
BOOL sub_476485(_DWORD* thisx, char a2)
{
    BOOL result; // eax
    char v3; // [esp+8h] [ebp-4h]

    if (!*thisx)
        return ((BOOL(*)(_DWORD*))funcs_476478[a2])(thisx);
    v3 = *((_BYTE*)thisx + a2 + 80);
    if (v3 >= 0)
        return ((BOOL(*)(_DWORD*))funcs_476478[v3])(thisx);
    switch (v3)
    {
    case -4:
        result = sub_476274(thisx);
        break;
    case -3:
        result = sub_476259(thisx);
        break;
    case -2:
        result = sub_47623E(thisx);
        break;
    case -1:
        result = sub_476223(thisx);
        break;
    default:
        result = 0;
        break;
    }
    return result;
}
