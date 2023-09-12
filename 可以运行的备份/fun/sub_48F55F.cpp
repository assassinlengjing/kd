#include "sub.h" 
int sub_48F55F(int thisx)
{
    if (*(_DWORD*)(thisx + 20))
        return sub_47B91A(
            20 * (*(_DWORD*)(thisx + 20) - 1) + 8 * *(unsigned __int8*)(thisx + 4) + 64,
            8 * *(unsigned __int8*)(thisx + 5) + 30,
            (LPCSTR)dword_4B7180,
            0,
            -1);
    else
        return sub_47B91A(
            8 * *(unsigned __int8*)(thisx + 4) + 32,
            8 * *(unsigned __int8*)(thisx + 5) + 30,
            &byte_4B717C,
            0,
            -1);
}
