#include "sub.h" 
int sub_48102C(streambuf* thisx, int a2)
{
    char* v4; // [esp+4h] [ebp-4h]

    sub_48070C(thisx, a2);
    v4 = sub_480F10((char*)byte_4B9B10);
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 32), (unsigned __int8)v4[1056]);
    return sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 64), (unsigned __int8)v4[1060]);
}

