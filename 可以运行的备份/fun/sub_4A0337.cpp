#include "sub.h" 
_DWORD* sub_4A0337(_DWORD* thisx, _DWORD* a2, int a3)
{
    _DWORD* result; // eax
    int v5[25]; // [esp+4h] [ebp-64h] BYREF

    if (!a2 || (result = a2, *a2 < a2[2]) && (result = a2, a2[1] < a2[3]))
    {
        result = thisx;
        if (*thisx)
        {
            memset(v5, 0, sizeof(v5));
            v5[0] = 100;
            v5[20] = a3;
            return (_DWORD*)(*(int(__stdcall**)(_DWORD, _DWORD*, _DWORD, _DWORD, int, int*))(*(_DWORD*)*thisx + 20))(
                *thisx,
                a2,
                0,
                0,
                16778240,
                v5);
        }
    }
    return result;
}