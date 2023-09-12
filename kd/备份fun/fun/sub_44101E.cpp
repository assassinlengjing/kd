#include "sub.h" 
_DWORD* sub_44101E(_DWORD* thisx, int a2)
{
    int i; // [esp+4h] [ebp-8h]
    _DWORD* v4; // [esp+8h] [ebp-4h]

    v4 = (_DWORD*)thisx[1];
    for (i = 0; i < a2; ++i)
    {
        if (!v4)
            return 0;
        v4 = (_DWORD*)sub_441090(v4);
    }
    return v4;
}
