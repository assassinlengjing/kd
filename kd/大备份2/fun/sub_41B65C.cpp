#include "sub.h" 
BOOL sub_41B65C(int thisx)
{
    if (!*(_WORD*)(thisx + 214))
        return 0;
    if (*(_DWORD*)(thisx + 296))
        return 0;
    if (*(_DWORD*)(thisx + 428) != 44 && *(_DWORD*)(thisx + 428) != 45)
        return 0;
    if (*(_DWORD*)(thisx + 292))
        return 0;
    return *(_BYTE*)(thisx + 177) == 0;
}

