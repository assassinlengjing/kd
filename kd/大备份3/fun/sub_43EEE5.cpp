#include "sub.h" 
unsigned __int16* sub_43EEE5(unsigned __int16* thisx)
{
    unsigned __int16* result; // eax
    int v3; // [esp+4h] [ebp-38h] BYREF
    int v4; // [esp+8h] [ebp-34h]
    int v5; // [esp+Ch] [ebp-30h]

    result = thisx;
    if (*((_DWORD*)thisx + 1))
    {
        sub_49C15E((int)&v3);
        v4 = *((_DWORD*)thisx + 2);
        v5 = *((_DWORD*)thisx + 3);
        v3 = unk_4B91E4;
        sub_49AB05((int)unk_4BDC60, &v3);
        v4 = v4 + *((_DWORD*)thisx + 4) / 10 - 4;
        ++v3;
        return sub_49AB05((int)unk_4BDC60, &v3);
    }
    return result;
}
