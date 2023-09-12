#include "sub.h" 
void sub_486947(_DWORD* thisx, int a2, int a3)
{
    if (a3)
    {
        if (a2 > 160)
        {
            if (a2 + 160 < 8 * (unsigned __int8)unknown_libname_25((char*)thisx + 1))
                thisx[7] = a2 - 160;
            else
                thisx[7] = 8 * (unsigned __int8)unknown_libname_25((char*)thisx + 1) - 320;
        }
        else
        {
            thisx[7] = 0;
        }
    }
    else
    {
        thisx[7] = a2 - 160;
    }
}
