#include "sub.h" 
char sub_43EF5D(int thisx, int a2, char a3)
{
    char result; // al

    *(_DWORD*)(thisx + 4) = a2;
    result = a3;
    *(_BYTE*)(thisx + 20) = a3;
    *(_DWORD*)(thisx + 16) = 0;
    return result;
}

