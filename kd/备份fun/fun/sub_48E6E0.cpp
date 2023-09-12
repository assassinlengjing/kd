#include "sub.h" 
int sub_48E6E0(streambuf* thisx, int a2)
{
    unsigned __int8* v4; // [esp+4h] [ebp-4h]

    sub_48070C(thisx, a2);
    v4 = (unsigned __int8*)sub_47EFA0((char*)byte_4B9B10);
    sub_480016(*((_DWORD**)thisx + 3), v4[369]);
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 32), v4[228]);
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 64), v4[371]);
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 96), v4[178]);
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 128), v4[252]);
    delbuf((ios*)(*((_DWORD*)thisx + 3) + 128), v4[376]);
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 160), v4[376]);
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 192), v4[224]);
    sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 224), v4[247]);
    return sub_480016((_DWORD*)(*((_DWORD*)thisx + 3) + 256), v4[248]);
}
