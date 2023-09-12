#include "sub.h" 
int sub_41BEBA(int thisx)
{
    if (*(_DWORD*)(thisx + 428) == 81)
        return 1;
    *(_BYTE*)(thisx + 178) = 0;
    if (*(_DWORD*)(thisx + 392) || !*(_DWORD*)(thisx + 396))
        return 0;
    *(_DWORD*)(thisx + 432) = 81;
    *(_DWORD*)(thisx + 444) = 0;
    return 1;
}

