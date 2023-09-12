#include "sub.h" 
char sub_4868C1(void* thisx, unsigned __int8 a2, unsigned __int8 a3)
{
    _BYTE* v4; // [esp+4h] [ebp-4h]

    v4 = (_BYTE*)sub_4816F5((int)thisx + 4, a2, a3);
    if (v4)
        return sub_425FD0(v4);
    else
        return 0;
}
