#include "sub.h"
BOOL sub_4014A3(void* thisx, LPCSTR lpString2, LPCSTR a3)
{
    CHAR FileName[260]; // [esp+4h] [ebp-218h] BYREF
    CHAR String1[260]; // [esp+108h] [ebp-114h] BYREF
    int v7; // [esp+20Ch] [ebp-10h]
    int v8; // [esp+210h] [ebp-Ch]
    int v9; // [esp+214h] [ebp-8h]
    int v10; // [esp+218h] [ebp-4h]

    sub_401404((int)thisx);
    v8 = (int)thisx + 8;
    v7 = (int)thisx + 16;
    v10 = (int)thisx + 4;
    v9 = (int)thisx + 12;
    lstrcpyA(String1, lpString2);
    lstrcpyA(FileName, a3);
    return sub_47A55C(FileName) != 0;
}