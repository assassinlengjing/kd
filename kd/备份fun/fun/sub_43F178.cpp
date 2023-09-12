#include "sub.h" 
int sub_43F178(int thisx, __int16 a2, int a3)
{
    int result; // eax

    *(_WORD*)(thisx + 4) = a2;
    result = a3;
    *(_DWORD*)(thisx + 12) = a3;
    *(_DWORD*)(thisx + 8) = 0;
    return result;
}

