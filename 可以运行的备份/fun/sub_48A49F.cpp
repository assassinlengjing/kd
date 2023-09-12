#include "sub.h" 
char sub_48A49F(_WORD* thisx, unsigned __int8 a2, __int16 a3, char a4)
{
    char result; // al

    result = a2;
    if (a2 < 0x10u)
    {
        thisx[a2 + 1] = a3;
        result = a4;
        *((_BYTE*)thisx + a2 + 34) = a4;
    }
    return result;
}

