#include "sub.h" 
int sub_440D69(int thisx, char a2, int a3)
{
    int result; // eax

    *(_BYTE*)(thisx + 296) = a2;
    result = a3;
    *(_DWORD*)(thisx + 300) = a3;
    *(_DWORD*)(thisx + 304) = 0;
    return result;
}

