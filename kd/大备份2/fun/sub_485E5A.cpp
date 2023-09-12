#include "sub.h" 
int sub_485E5A(int thisx, unsigned __int16* a2)
{
    int result; // eax
    int i; // [esp+4h] [ebp-8h]

    for (i = 0; i < *(unsigned __int16*)(thisx + 12); ++i)
    {
        sub_4A0B26(
            a2,
            *(_BYTE*)(*(_DWORD*)(thisx + 16) + i),
            *(_BYTE*)(*(_DWORD*)(thisx + 20) + 4 * i + 2),
            *(_BYTE*)(*(_DWORD*)(thisx + 20) + 4 * i + 1),
            *(_BYTE*)(*(_DWORD*)(thisx + 20) + 4 * i));
        result = i + 1;
    }
    return result;
}
