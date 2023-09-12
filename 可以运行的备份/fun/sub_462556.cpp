#include "sub.h" 
int sub_462556(_DWORD* thisx, int a2)
{
    if (a2 < 0 || a2 >= 3)
        return 0;
    if (a2)
        return sub_475AC0(&thisx[153 * a2 + 504]);
    return thisx[3276];
}

