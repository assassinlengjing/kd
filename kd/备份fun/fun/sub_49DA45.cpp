#include "sub.h" 
int  sub_49DA45(_DWORD* thisx, LPCSTR lpFileName, int a3)
{
    int v5; // [esp+4h] [ebp-4h]

    sub_49B9E0(thisx, lpFileName);
    if (!thisx[12609])
        return 0;
    v5 = sub_49D318((int)thisx, a3);
    sub_49B98C(thisx);
    return v5;
}
