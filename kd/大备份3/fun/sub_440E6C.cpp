#include "sub.h" 
char* sub_440E6C(_DWORD* thisx, int a2, int a3)
{
    int i; // [esp+8h] [ebp-14h]
    int v6; // [esp+Ch] [ebp-10h]
    char* v7; // [esp+14h] [ebp-8h]

    if (a2 < 0)
        return 0;
    if (!a3 && thisx[34] <= a2)
        return 0;
    if (a3 && thisx[35] <= a2)
    {
        v6 = (a2 - thisx[34] + 1) / 64 + 1;
        for (i = 0; i < v6; ++i)
            sub_440F3C(thisx);
    }
    v7 = (char*)sub_44101E(thisx, a2 / 64);
    return sub_44106A(v7, a2 & 0x3F);
}
