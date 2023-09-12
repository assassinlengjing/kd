#include "sub.h" 
int sub_45CF31(unsigned __int8* thisx, int a2)
{
    int v3; // [esp+4h] [ebp-8h]
    int v4; // [esp+8h] [ebp-4h]

    v3 = a2 + thisx[27];
    v4 = 0;
    while (v3 >= 100)
    {
        ++v4;
        v3 -= 100;
    }
    thisx[27] = v3;
    return v4;
}

