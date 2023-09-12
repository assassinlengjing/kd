#include "sub.h" 
int sub_48328F(_DWORD* thisx, LPCSTR lpString1)
{
    CHAR String2[256]; // [esp+8h] [ebp-100h] BYREF

    while (1)
    {
        if (!sub_482D44(thisx, String2))
            return 0;
        if (!lstrcmpiA(lpString1, String2))
            break;
        sub_482FAA(thisx);
    }
    sub_48330A(thisx);
    return 1;
}
