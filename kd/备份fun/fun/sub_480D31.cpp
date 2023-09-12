#include "sub.h" 
int sub_480D31(_DWORD* thisx)
{
    int v3; // [esp+18h] [ebp-4h]

    sub_476D78(0);
    sub_476D29(0);
    sub_476CDA(0);
    sub_476C8B(0);
    sub_476DC7(0, 0);
    sub_476DC7(0, 1);
    v3 = sub_480227(thisx);
    if (_GetToken((_CancellationTokenRegistration*)(thisx[3] + 32)))
        sub_48083C((_DWORD*)(thisx[3] + 64), 8);
    else
        sub_48083C((_DWORD*)(thisx[3] + 64), 4);
    return v3;
}
