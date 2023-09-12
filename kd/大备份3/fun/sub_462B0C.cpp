#include "sub.h" 
int sub_462B0C(int thisx)
{
    *(_DWORD*)(thisx + 104) = 1;
    *(_DWORD*)(thisx + 124) = 4;
    *(_DWORD*)(thisx + 1296) = 0;
    *(_DWORD*)(thisx + 2528) = 0;
    *(_DWORD*)(thisx + 2532) = 0;
    *(_DWORD*)(thisx + 2488) = 100;
    *(_DWORD*)(thisx + 2492) = 0;
    unk_4B93AC = 0;
    sub_4891E4((_DWORD*)(thisx + 128), aDemoTigerdemo0_1);
    sub_47F958((_DWORD*)thisx + 736);
    *(_BYTE*)(thisx + 2516) = 1;
    return sub_456169((void*)thisx);
}

