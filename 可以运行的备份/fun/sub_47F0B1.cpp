#include "sub.h" 
unsigned __int16* sub_47F0B1(int thisx)
{
    unsigned __int16* result; // eax
    int v2; // esi
    int v4[14]; // [esp+8h] [ebp-38h] BYREF

    result = (unsigned __int16*)thisx;
    if (*(_BYTE*)(thisx + 28))
    {
        if (!*(_DWORD*)(thisx + 36))
        {
            sub_49C15E((int)v4);
            v4[1] = *(_DWORD*)(thisx + 4) - sub_446465((char*)byte_4B9B10) - 8;
            v2 = *(_DWORD*)(thisx + 8) - 16 - *(_DWORD*)(thisx + 12);
            v4[2] = sub_4464BA((int)byte_4B9B10) + v2;
            v4[0] = dword_4B91EC + *(unsigned __int8*)(thisx + 28) - 1;
            return sub_49AB05((int)byte_4BDC60, v4);
        }
    }
    return result;
}
