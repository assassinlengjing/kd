#include "sub.h" 
int sub_47FBA3(int thisx)
{
    int result; // eax

    memset((void*)(thisx + 4), 0, 0x100u);
    memset((void*)(thisx + 296), 0, 0x100u);
    *(_BYTE*)(thisx + 264) = 0;
    *(_BYTE*)(thisx + 265) = 0;
    *(_DWORD*)(thisx + 260) = 0;
    *(_DWORD*)(thisx + 272) = 4;
    result = thisx;
    *(_DWORD*)(thisx + 268) = 0;
    *(_DWORD*)(thisx + 292) = -1;
    *(_DWORD*)(thisx + 552) = 0;
    return result;
}

