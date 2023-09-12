#include "sub.h" 
int sub_45F935(int thisx)
{
    int result; // eax

    if (*(_DWORD*)(thisx + 13112))
        (***(void(****)(_DWORD, int))(thisx + 13112))(*(_DWORD*)(thisx + 13112), 3);
    result = thisx;
    *(_DWORD*)(thisx + 13112) = 0;
    *(_DWORD*)(thisx + 13108) = 0;
    return result;
}

