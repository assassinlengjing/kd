#include "sub.h" 
int sub_471036(unsigned __int8* thisx, int a2)
{
    int v3; // [esp+4h] [ebp-4h]

    v3 = 0;
    if (a2)
    {
        if (a2 >= 1 && a2 <= 4)
            v3 = (int)&thisx[244 * a2 + 1148];
    }
    else
    {
        v3 = (int)&thisx[244 * thisx[thisx[2562] + 13047] + 1392];
    }
    if (v3)
        return v3 + 172;
    else
        return 0;
}

