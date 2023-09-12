#include "sub.h" 
int sub_4A0C45(unsigned __int16* thisx, int a1, unsigned __int16 a2)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < a2; ++i)
    {
        sub_4A0B26(thisx, i, *(_BYTE*)(a1 + 4 * i + 2), *(_BYTE*)(a1 + 4 * i + 1), *(_BYTE*)(a1 + 4 * i));
        result = i + 1;
    }
    return result;
}
