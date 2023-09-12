#include "sub.h"
int sub_401404(int thisx)
{
    int result; // eax

    if (*(_DWORD*)(thisx + 8))
        (***(void(****)(_DWORD, int))(thisx + 8))(*(_DWORD*)(thisx + 8), 3);
    *(_WORD*)(thisx + 4) = 0;
    *(_DWORD*)(thisx + 8) = 0;
    if (*(_DWORD*)(thisx + 16))
        (***(void(****)(_DWORD, int))(thisx + 16))(*(_DWORD*)(thisx + 16), 3);
    result = thisx;
    *(_WORD*)(thisx + 12) = 0;
    *(_DWORD*)(thisx + 16) = 0;
    return result;
}