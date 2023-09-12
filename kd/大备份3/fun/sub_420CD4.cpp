#include "sub.h" 
int sub_420CD4()
{
    _DWORD* v1; // [esp+4h] [ebp-Ch]
    int i; // [esp+8h] [ebp-8h]
    int v3; // [esp+Ch] [ebp-4h]

    if (!unk_4B999A)
        return 0;
    v3 = 0;
    for (i = 0; i < (unsigned __int8)unk_4B999A; ++i)
    {
        v1 = (_DWORD*)sub_4655B9(unk_4B9B10, i);
        if (v1)
        {
            if (!unknown_libname_12(v1))
                ++v3;
        }
    }
    return v3;
}

