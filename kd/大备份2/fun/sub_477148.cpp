#include "sub.h" 
char sub_477148()
{
    int v1; // [esp+4h] [ebp-8h]
    unsigned __int8 i; // [esp+8h] [ebp-4h]

    v1 = rand() % 140;
    for (i = 0; i < 0xEu; ++i)
    {
        if (v1 < (unsigned __int16)word_4B99AC[i])
            return i + 1;
        v1 -= (unsigned __int16)word_4B99AC[i];
    }
    return 0;
}
