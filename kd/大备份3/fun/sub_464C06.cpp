#include "sub.h" 
int sub_464C06(char* thisx, char a2, int a3)
{
    int result; // eax
    int v5; // [esp+4h] [ebp-8h]
    int i; // [esp+8h] [ebp-4h]

    result = (unsigned __int16)sub_41F52F(a3, 1);
    v5 = result;
    for (i = 0; i < (unsigned __int8)unk_4B999A; ++i)
    {
        if (unknown_libname_22((_DWORD*)&thisx[196 * i + 7524]))
            sub_494D01((int)&thisx[196 * i + 7524], (int)thisx, a2, (char*)a3, v5);
        result = i + 1;
    }
    return result;
}

