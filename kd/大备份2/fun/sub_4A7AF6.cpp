#include "sub.h" 
int __cdecl sub_4A7AF6(_DWORD* a1, int a2)
{
    unsigned __int16 v3[6]; // [esp+0h] [ebp-Ch] BYREF

    __strgtold12((_DWORD)v3, (char**)&a2, (char*)a2, 0, 0, 0, 0);
    return sub_4A7AB3(v3, a1);
}
