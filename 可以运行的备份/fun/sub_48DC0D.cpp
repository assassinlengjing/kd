#include "sub.h" 
void sub_48DC0D(int thisx, int a2)
{
    if (a2 >= 0)
    {
        *(_DWORD*)(thisx + 40) = a2;
        *(_BYTE*)(thisx + 148) = 0;
        *(_DWORD*)(thisx + 152) = 0;
        sub_48A94C(thisx, 0, 1);
    }
}

