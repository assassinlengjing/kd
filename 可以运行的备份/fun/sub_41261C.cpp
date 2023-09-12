#include "sub.h" 
void sub_41261C(_WORD* thisx, int a2, int a3, int a4)
{
    if ((unsigned __int16)thisx[107] - a2 > 0)
        thisx[107] -= a2;
    else
        thisx[107] = 0;
    sub_4234E6((int)thisx, -a2);
    sub_4239D3((int)thisx, a2 / 5 + 1);
    if (a3)
    {
        sub_4234E6(a3, a2);
        sub_4239D3(a3, a2 / 5 + 1);
    }
    if (a4)
    {
        if (a2)
            sub_446744((_DWORD*)byte_4B9B10, a2, (int)thisx);
    }
}

