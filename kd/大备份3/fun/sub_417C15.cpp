#include "sub.h" 
void sub_417C15(int thisx, unsigned __int8 a2)
{
    if (!a2)
        a2 = 1;
    sub_41261C((_WORD*)thisx, a2, *(_DWORD*)(thisx + 304), 1);
    if (*(_DWORD*)(thisx + 428) == 44)
    {
        *(_DWORD*)(thisx + 432) = 46;
    }
    else if (*(_DWORD*)(thisx + 428) == 45)
    {
        *(_DWORD*)(thisx + 432) = 47;
    }
}

