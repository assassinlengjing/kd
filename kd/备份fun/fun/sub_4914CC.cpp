#include "sub.h" 
void sub_4914CC(int thisx, double a2, double st5_0, double a4)
{
    sub_4967E4(thisx, a2, st5_0, a4);
    if (*(_DWORD*)(thisx + 12) != *(_DWORD*)(thisx + 16))
    {
        *(_DWORD*)(thisx + 12) = *(_DWORD*)(thisx + 16);
        *(_DWORD*)(thisx + 156) = 0;
        sub_4967E4(thisx, a2, st5_0, a4);
    }
    if (*(_BYTE*)(thisx + 72) == 11)
    {
        if (*(int*)(thisx + 84) > 0)
        {
            if (*(int*)(thisx + 84) >= 60)
            {
                if (*(int*)(thisx + 84) >= 180)
                    *(_BYTE*)(thisx + 22) = *(_DWORD*)(thisx + 84) / 3 % 2;
                else
                    *(_BYTE*)(thisx + 22) = *(_DWORD*)(thisx + 84) / 3 % 2 + 2;
            }
            else
            {
                *(_BYTE*)(thisx + 22) = *(_DWORD*)(thisx + 84) / 3 % 2 + 4;
            }
        }
        else
        {
            *(_BYTE*)(thisx + 22) = 0;
        }
    }
    else if (*(_BYTE*)(thisx + 72) == 13)
    {
        if (*(int*)(thisx + 84) > 0)
        {
            if (*(int*)(thisx + 84) >= 60)
                *(_BYTE*)(thisx + 71) = 2 * (*(_DWORD*)(thisx + 84) % (*(_DWORD*)(thisx + 84) / 60 + 2) <= 1);
            else
                *(_BYTE*)(thisx + 71) = 2 * (*(_DWORD*)(thisx + 84) % 2);
        }
        else
        {
            *(_BYTE*)(thisx + 71) = 0;
        }
    }
    if (*(_DWORD*)(thisx + 12) != 1)
        sub_499622(thisx);
}