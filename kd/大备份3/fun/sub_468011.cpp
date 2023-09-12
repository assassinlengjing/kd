#include "sub.h" 
char sub_468011(_BYTE* thisx, _BYTE* a2)
{
    unsigned __int8 v2; // al
    char result; // al
    int i; // [esp+8h] [ebp-8h]
    unsigned __int8 v6; // [esp+Ch] [ebp-4h]

    v2 = sub_426070(a2);
    sub_4631D0(thisx, v2);
    v6 = sub_425EF0(a2);
    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
    {
        if (i != v6 && thisx[i + 13052] && (unsigned __int8)thisx[i + 13052] <= (int)(unsigned __int8)thisx[v6 + 13052])
            ++thisx[i + 13052];
    }
    thisx[v6 + 13052] = 0;
    result = thisx[13043] + 1;
    thisx[13043] = result;
    return result;
}

