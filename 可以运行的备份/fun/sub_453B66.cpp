#include "sub.h" 
int sub_453B66(int thisx)
{
    int result; // eax

    result = thisx;
    *(_BYTE*)(thisx + 2516) = 2;
    *(_DWORD*)(thisx + 108) = 2;
    return result;
}

