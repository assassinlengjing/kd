#include "sub.h" 
char*  sub_440B04(_DWORD* thisx)
{
    char* result; // eax
    char* v2; // [esp+4h] [ebp-10h]
    int j; // [esp+8h] [ebp-Ch]
    char* i; // [esp+Ch] [ebp-8h]

    result = (char*)thisx;
    for (i = (char*)thisx[1]; i; i = result)
    {
        for (j = 0; j < 64; ++j)
        {
            v2 = sub_44106A(i, j);
            if (sub_425F90(v2))
                sub_441120(v2, -1);
        }
        result = (char*)sub_441090((_DWORD*)i);
    }
    return result;
}

