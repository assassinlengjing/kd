#include "sub.h" 
int __cdecl sub_477F0C(unsigned __int8 a1)
{
    int result; // eax
    int i; // [esp+Ch] [ebp-4h]
    int j; // [esp+Ch] [ebp-4h]

    result = sub_476009(&unk_4B9410[108 * a1]);
    for (i = 0; i < 4; ++i)
    {
        if (sub_476928((_DWORD*)&unk_4B9410[108 * a1], -(char)(i + 1)))
        {
            if ((unsigned __int8)unk_4B4154 <= (int)(unsigned __int8)unk_4B93EC[4 * a1 + i])
                unk_4B93EC[4 * a1 + i] = unk_4B4154 - 4;
            ++unk_4B93EC[4 * a1 + i];
        }
        else
        {
            unk_4B93EC[4 * a1 + i] = 0;
        }
        result = i + 1;
    }
    for (j = 0; j < 7; ++j)
    {
        if (sub_476485((_DWORD*)&unk_4B9410[108 * a1], j))
        {
            if (j < 5 && (unsigned __int8)unk_4B4154 <= (int)(unsigned __int8)unk_4B93B4[7 * a1 + j])
                unk_4B93B4[7 * a1 + j] = 0;
            ++unk_4B93B4[7 * a1 + j];
        }
        else
        {
            unk_4B93B4[7 * a1 + j] = 0;
        }
        result = j + 1;
    }
    return result;
}