#include "sub.h" 
int sub_46D5C0(_BYTE* thisx)
{
    int j; // [esp+4h] [ebp-10h]
    int v3; // [esp+8h] [ebp-Ch]
    int i; // [esp+Ch] [ebp-8h]
    signed int k; // [esp+Ch] [ebp-8h]
    int v6; // [esp+10h] [ebp-4h]

    if (thisx[81])
        return rand() % (int)Size;
    v3 = 0;
    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 6 && *(int*)&thisx[244 * i + 1392 + 28 * j] >= 0; ++j)
            ++v3;
    }
    v6 = rand() % (int)(Size - v3);
    for (k = 0; k < (int)Size; ++k)
    {
        if (*((_BYTE*)dword_4B92DC + k))
        {
            if (--v3 <= 0)
            {
                k += v6 + 1;
                return k;
            }
        }
        else if (--v6 < 0)
        {
            return k;
        }
    }
    return k;
}

