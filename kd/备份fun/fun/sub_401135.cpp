#include "sub.h"
int sub_401135(_CancellationTokenRegistration** thisx)
{
    unsigned __int8* v3; // [esp+4h] [ebp-8h]
    int v4; // [esp+8h] [ebp-4h]

    v3 = (unsigned __int8*)unknown_libname_1((char*)byte_4B9B10);
    sub_480016((_DWORD*)thisx[3], v3[75]);
    sub_480016((_DWORD*)thisx[3] + 8, v3[76]);
    sub_480016((_DWORD*)thisx[3] + 16, v3[72]);
    sub_480016((_DWORD*)thisx[3] + 24, v3[26]);
    sub_480016((_DWORD*)thisx[3] + 32, v3[95]);
    sub_480016((_DWORD*)thisx[3] + 40, v3[96]);
    v4 = sub_480227((_DWORD*)thisx);
    v3[75] = (unsigned __int8)_GetToken(thisx[3]);
    v3[76] = (unsigned __int8)_GetToken((_CancellationTokenRegistration*)((char*)thisx[3] + 32));
    v3[72] = (unsigned __int8)_GetToken((_CancellationTokenRegistration*)((char*)thisx[3] + 64));
    v3[26] = (unsigned __int8)_GetToken((_CancellationTokenRegistration*)((char*)thisx[3] + 96));
    v3[95] = (unsigned __int8)_GetToken((_CancellationTokenRegistration*)((char*)thisx[3] + 128));
    v3[96] = (unsigned __int8)_GetToken((_CancellationTokenRegistration*)((char*)thisx[3] + 160));
    return v4;
}