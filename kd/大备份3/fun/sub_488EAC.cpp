#include "sub.h" 
unsigned __int8* sub_488EAC(unsigned __int8* thisx, int a2, int a3)
{
    int v5; // [esp+4h] [ebp-Ch]
    int i; // [esp+8h] [ebp-8h]
    unsigned __int8 v7; // [esp+Ch] [ebp-4h]

    for (i = 0; i < thisx[356]; ++i)
    {
        v5 = thisx[3 * i + 358] - a2;
        if ((!v5 || v5 == -1) && thisx[3 * i + 359] == a3)
            break;
    }
    if (i >= thisx[356])
        return 0;
    v7 = thisx[3 * i + 360];
    if (v7)
    {
        if (v7 > (int)thisx[357])
            return 0;
    }
    else
    {
        v7 = rand() % thisx[357] + 1;
    }
    return &thisx[16 * v7 + 368];
}
