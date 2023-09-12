#include "sub.h" 
int sub_480DDD(streambuf* thisx, int a2)
{
    int v4; // [esp+4h] [ebp-4h]

    sub_48070C(thisx, a2);
    v4 = (_DWORD)sub_480F10((char*)byte_4B9B10);
    sub_480016(*((_DWORD**)thisx + 3), *(unsigned __int8*)(v4 + 1085));
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 32), *(_DWORD*)(v4 + 976));
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 64), *(unsigned __int8*)(v4 + 990));
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 96), *(unsigned __int8*)(v4 + 1059));
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 128), *(unsigned __int8*)(v4 + 1010));
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 160), *(_DWORD*)(v4 + 980));
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 192), *(unsigned __int8*)(v4 + 1079));
    return sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 224), *(unsigned __int8*)(v4 + 1080));
}

