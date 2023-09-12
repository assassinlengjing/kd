#include "sub.h" 
int sub_48151A(int thisx)
{
    int result; // eax

    if (*(_DWORD*)(thisx + 4))
        (***(void(****)(_DWORD, int))(thisx + 4))(*(_DWORD*)(thisx + 4), 3);
    if (*(_DWORD*)(thisx + 8))
        operator delete(*(void**)(thisx + 8));
    *(_DWORD*)(thisx + 4) = 0;
    *(_DWORD*)(thisx + 8) = 0;
    result = thisx;
    *(_BYTE*)(thisx + 13) = 0;
    *(_BYTE*)(thisx + 12) = 0;
    return result;
}
