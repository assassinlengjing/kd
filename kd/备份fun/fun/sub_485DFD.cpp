#include "sub.h" 
int sub_485DFD(int thisx, int a2)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < *(unsigned __int16*)(thisx + 12); ++i)
    {
        memcpy(
            (void*)(a2 + 4 * *(unsigned __int8*)(*(_DWORD*)(thisx + 16) + i)),
            (const void*)(*(_DWORD*)(thisx + 20) + 4 * i),
            4u);
        result = i + 1;
    }
    return result;
}
