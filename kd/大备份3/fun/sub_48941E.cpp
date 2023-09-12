#include "sub.h" 
int sub_48941E(_DWORD* thisx, LPCSTR lpFileName)
{
    int v4[15]; // [esp+4h] [ebp-3Ch] BYREF

    sub_49DB90(v4);
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = -1;
    v4[4] = -1;
    v4[9] = -1;
    v4[0] = thisx[8];
    return sub_49DA45((_DWORD*)unk_4BDC60, lpFileName, (int)v4);
}
