#include "sub.h" 
int sub_4891E4(_DWORD* thisx, LPCSTR lpFileName)
{
    int v4; // [esp+4h] [ebp-4h]

    sub_48151A((int)(thisx + 1));
    thisx[7] = 0;
    thisx[85] = 100;
    thisx[86] = 0;
    v4 = sub_49CB92((int)unk_4BDC60, -1, 320, 240, 0, 0);
    if (v4 < 0)
        return 0;
    thisx[8] = v4;
    sub_489289(thisx);
    if (!sub_486B0E((int)thisx, lpFileName))
        return 0;
    thisx[9] = 0;
    sub_46259F((char*)unk_4B9B10);
    return 1;
}
