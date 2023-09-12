#include "sub.h"
// positive sp value has been detected, the output may be wrong!
void AugmentSinCos(int a1, long double a2)
{
    long double v2; // st7
    __int16 v3; // fps
    long double v4; // st6
    bool v5; // c0
    char v6; // c2
    bool v7; // c3

    v2 = fabs(a2);
    v4 = (1.0 - v2) * (v2 + 1.0);
    v5 = v4 < 0.0;
    v6 = 0;
    v7 = v4 == 0.0;
    *(_WORD*)(a1 - 160) = v3;
    if ((*(_BYTE*)(a1 - 159) & 1) != 0)
    {
        if (*(char*)(a1 - 144) > 0)
            ////£¿£¿£¿JUMPOUT(0x4A4790); ???
        _rttosnpopde(a1);
    }
}