#include "sub.h" 
__int16 sub_489C95(_DWORD* thisx, unsigned __int8 a2, unsigned __int8 a3)
{
    int v5; // [esp+4h] [ebp-4h]

    if (!unknown_libname_24(thisx + 1))
        return 0;
    v5 = sub_4816F5((int)(thisx + 1), a2, a3);
    if (v5)
        return sub_4260F0((short*)v5);
    else
        return 0;
}
