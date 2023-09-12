#include "sub.h" 
char sub_468591(_BYTE* thisx, int a2, int a3)
{
    char result; // al
    int v4; // [esp+4h] [ebp-4h]

    v4 = a3 + (unsigned __int8)thisx[a2 + 71];
    if (v4 < 0 || v4 > 255)
        LOBYTE(v4) = 0;
    result = v4;
    thisx[a2 + 71] = v4;
    return result;
}

