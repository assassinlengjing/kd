#include "sub.h" 
int sub_46279C(_DWORD* thisx)
{
    if (thisx[26] == 19)
    {
        sub_49DA8A((_DWORD*)byte_4BDC60, thisx[3276]);
        thisx[3276] = -1;
        sub_45F935((_DWORD)thisx);
        sub_45FD81((_DWORD)thisx);
    }
    thisx[26] = 1;
    thisx[31] = 3;
    thisx[324] = 0;
    thisx[632] = 0;
    thisx[633] = 0;
    thisx[622] = 100;
    thisx[623] = 0;
    dword_4B93AC = 0;
    sub_4891E4(thisx + 32, aDemoTigerdemo0_0);
    sub_47F958(thisx + 184);
    return sub_456169(thisx);
}

