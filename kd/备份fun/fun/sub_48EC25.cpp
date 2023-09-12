#include "sub.h" 
int __fastcall sub_48EC25(int a1, int a2, unsigned __int8 a3, unsigned __int8 a4)
{
    int result; // eax

    result = a3;
    if (a3 < 8u && a4 < 8u)
    {
        result = a1;
        *(_BYTE*)(a1 + a3 + 44) = a4;
    }
    return result;
}
