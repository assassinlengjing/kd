#include "sub.h" 
_DWORD* sub_41745B(_DWORD* thisx, unsigned __int8 a2)
{
    _DWORD* result; // eax
    int v3; // esi
    int v5; // [esp+8h] [ebp-4h]

    if (thisx[107] == 44)
    {
        thisx[108] = 136;
    }
    else
    {
        if (thisx[107] != 45)
            return (_DWORD*)sub_417173((int)thisx, a2);
        thisx[108] = 137;
    }
    thisx[73] = 0;
    *((_BYTE*)thisx + a2 + 453) = -1;
    thisx[76] = sub_446714(unk_4B9B10, a2);
    thisx[79] = thisx[76];
    if (thisx[76])
    {
        v5 = sub_4175B4(thisx[76], 1) / 10;
        sub_41EF8A((short*)thisx, v5);
        sub_41F169((short*)thisx, *((unsigned __int16*)thisx + 121));
        v3 = sub_425D70((_DWORD*)thisx[76]);
        thisx[93] = 500 * ((__PAIR64__(v3, sub_425D70((_DWORD*)thisx[76])) - 1) >> 32);
    }
    *((_BYTE*)thisx + 248) = 2;
    result = thisx;
    thisx[87] = 400;
    thisx[90] = 30;
    thisx[109] = 0;
    return result;
}
