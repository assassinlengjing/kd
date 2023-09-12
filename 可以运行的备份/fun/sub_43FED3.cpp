#include "sub.h" 
_DWORD* sub_43FED3(_DWORD* thisx, _DWORD* a2)
{
    _DWORD* result; // eax
    _DWORD* v4; // [esp+4h] [ebp-8h]
    _DWORD* i; // [esp+8h] [ebp-4h]
    int j; // [esp+8h] [ebp-4h]

    for (i = a2; (int)i < thisx[35]; i = (_DWORD*)((char*)i + 1))
    {
        v4 = (_DWORD*)sub_440E6C(thisx, (int)i, 0);
        if (v4)
            sub_43F91E(v4);
    }
    result = a2;
    thisx[34] = (_DWORD)a2;
    for (j = 0; j < 16; ++j)
    {
        result = thisx;
        thisx[j + 18] = -1;
    }
    return result;
}

