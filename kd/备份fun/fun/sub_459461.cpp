#include "sub.h" 
char sub_459461(_BYTE* thisx, int a2, int a3)
{
    char result; // al

    if (a2 > 0)
    {
        result = (char)thisx;
        thisx[13] = a2;
    }
    if (a3 > 0)
    {
        result = a3;
        thisx[14] = a3;
    }
    return result;
}

