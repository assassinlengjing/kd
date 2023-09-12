#include "sub.h" 
int sub_48EC62(_BYTE* thisx)
{
    int result; // eax
    int j; // [esp+8h] [ebp-Ch]
    int v3; // [esp+Ch] [ebp-8h]
    int i; // [esp+10h] [ebp-4h]

    for (i = 0; i < 8; ++i)
    {
        v3 = i;
        for (j = 0; j < 8; ++j)
        {
            v3 -= (unsigned __int8)thisx[j + 44];
            if (v3 < 0)
                break;
        }
        thisx[(unsigned __int8)byte_4B9988[i] + 36] = j;
        result = i + 1;
    }
    return result;
}
