#include "sub.h" 
int sub_467C6D(int thisx)
{
    int result; // eax

    if (*(_DWORD*)(thisx + 13392))
        (***(void(****)(_DWORD, int))(thisx + 13392))(*(_DWORD*)(thisx + 13392), 3);
    result = thisx;
    *(_DWORD*)(thisx + 13392) = 0;
    *(_DWORD*)(thisx + 13388) = 0;
    return result;
}

