#include "sub.h" 
int sub_43F308(int thisx)
{
    int result; // eax

    result = thisx;
    *(_WORD*)(thisx + 4) = 0;
    *(_DWORD*)(thisx + 8) = 0;
    *(_DWORD*)(thisx + 12) = 0;
    return result;
}

