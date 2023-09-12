#include "sub.h" 
int sub_46259F(_BYTE* thisx)
{
    char RuntimeOwnsLifetime; // al
    BOOL v2; // ebx
    unsigned __int8 v3; // cl
    int v4; // ebx
    signed int n; // [esp+8h] [ebp-10h]
    int m; // [esp+Ch] [ebp-Ch]
    signed int j; // [esp+10h] [ebp-8h]
    int i; // [esp+14h] [ebp-4h]
    int k; // [esp+14h] [ebp-4h]

    for (i = 0; i < dword_4B9368; ++i)
    {
        for (j = 0; j < (int)dword_4B93A0; ++j)
            *(_DWORD*)(*((_DWORD*)dword_4B9360 + i) + 4 * j) = 0;
    }
    for (k = 0; k < 2; ++k)
    {
        sub_475050(&thisx[612 * k + 2628], 0);
        RuntimeOwnsLifetime = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((Concurrency::details::_UnrealizedChore*)&thisx[76 * k + 11816]);
        sub_474FF0(&thisx[612 * k + 2628], RuntimeOwnsLifetime);
        for (m = 0; m < 4; ++m)
        {
            for (n = 0; n < (int)dword_4B93A0; ++n)
                *((_WORD*)*(&dword_4B9370 + m) + n) = -1;
        }
        v2 = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((Concurrency::details::_UnrealizedChore*)&thisx[76 * k + 11816]);
        *((_WORD*)*(&dword_4B9370 + v2) + (unsigned __int8)sub_426550(&thisx[76 * k + 11816])) = 0;
        v3 = sub_426550(&thisx[76 * k + 11816]);
        sub_475AE0((short*) & thisx[612 * k + 2628], v3);
        sub_41C48F((int)&thisx[612 * k + 2628], -1);
        v4 = (unsigned __int8)sub_426570(&thisx[76 * k + 11816]);
        *(_DWORD*)(*((_DWORD*)dword_4B9360 + v4) + 4 * (unsigned __int8)sub_426550(&thisx[76 * k + 11816])) = 1;
    }
    sub_4680EF();
    return 1;
}

