#include "sub.h" 
int sub_45B8F5(int thisx)
{
    if (*(_DWORD*)(thisx + 104) == 19)
    {
        sub_49DA8A((_DWORD*)unk_4BDC60, *(_DWORD*)(thisx + 13104));
        *(_DWORD*)(thisx + 13104) = -1;
        sub_45F935(thisx);
        sub_45FD81(thisx);
    }
    *(_DWORD*)(thisx + 104) = 15;
    *(_BYTE*)(thisx + 2516) = 1;
    *(_WORD*)(thisx + 2564) = 0;
    *(_WORD*)(thisx + 2566) = *(unsigned __int8*)(thisx + 12969);
    sub_45B98A(thisx, -1);
    return sub_456D33((const CHAR*)thisx, aMenuWav_1, 1, 0);
}

