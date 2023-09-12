#include "sub.h" 
int  sub_49DB00(_DWORD* thisx, int a2)
{
    int result; // eax
    int v3[25]; // [esp+4h] [ebp-64h] BYREF

    result = (int)thisx;
    if (*thisx)
    {
        v3[0] = 100;
        v3[20] = a2;
        return (*(int(__stdcall**)(_DWORD, _DWORD, _DWORD, _DWORD, int, int*))(*(_DWORD*)*thisx + 20))(
            *thisx,
            0,
            0,
            0,
            16778240,
            v3);
    }
    return result;
}
