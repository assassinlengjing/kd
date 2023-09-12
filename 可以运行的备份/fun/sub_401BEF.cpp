#include "sub.h" 
__int16 __stdcall sub_401BEF(_DWORD* thisx, char a2)
{
    int v2; // [esp+4h] [ebp-4h]

    v2 = sub_401BD0(thisx,a2);
    if (v2)
        return *(_WORD*)v2;
    else
        return 0;
}

