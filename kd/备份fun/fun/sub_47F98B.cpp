#include "sub.h" 
_DWORD* sub_47F98B(_DWORD* thisx)
{
    _DWORD* result; // eax
    int v3[14]; // [esp+4h] [ebp-38h] BYREF

    result = thisx;
    if ((int)thisx[69] >= 0)
    {
        sub_49C15E((_DWORD)v3);
        v3[1] = 16;
        v3[2] = 200;
        v3[0] = thisx[69];
        return (_DWORD*)sub_49AB05((int)byte_4BDC60, v3);
    }
    return result;
}
