#include "sub.h" 
int sub_4A1299(int thisx, int a2, size_t Size, int a4)
{
    int i; // [esp+4h] [ebp-4h]

    if (!*(_DWORD*)(thisx + 12))
        return 0;
    for (i = 0; i < a4; ++i)
        memcpy((void*)(*(unsigned __int16*)(thisx + 6) * i + *(_DWORD*)(thisx + 12)), (const void*)(Size * i + a2), Size);
    return 1;
}

