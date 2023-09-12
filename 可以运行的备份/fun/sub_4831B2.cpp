#include "sub.h" 
int sub_4831B2(_DWORD* thisx, LPCSTR a2, LPCSTR lpString1)
{
    _DWORD* v5; // [esp+4h] [ebp-108h]
    CHAR String2[256]; // [esp+8h] [ebp-104h] BYREF
    int v7; // [esp+108h] [ebp-4h]

    v5 = (_DWORD*)thisx[2];
    v7 = 0;
    if (!lpString1)
        return -1;
    if (!a2)
        goto LABEL_7;
    if (!sub_48328F(thisx,a2))
        return -1;
    sub_482FAA(thisx);
    while (1)
    {
    LABEL_7:
        if (!sub_482D44(thisx, String2))
        {
            sub_483173(thisx, v5);
            return -1;
        }
        if (!lstrcmpiA(lpString1, String2))
            break;
        ++v7;
        sub_482FAA(thisx);
    }
    sub_483173(thisx, v5);
    return v7;
}
