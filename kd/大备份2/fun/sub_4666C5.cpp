#include "sub.h" 
int sub_4666C5(char* thisx, _BYTE* a2)
{
    char* v4; // [esp+4h] [ebp-14h]
    int i; // [esp+8h] [ebp-10h]
    unsigned __int8 v6; // [esp+Ch] [ebp-Ch]
    unsigned __int8 v7; // [esp+10h] [ebp-8h]
    char v8; // [esp+14h] [ebp-4h]

    v8 = sub_426070(a2);
    v6 = sub_425EF0(a2);
    v7 = 0;
    for (i = 0; i < (unsigned __int8)byte_4B9985; ++i)
    {
        if (i != v6)
        {
            v4 = &thisx[612 * i + 2628];
            if (unknown_libname_7((_DWORD*)v4))
            {
                if (!sub_41BE56((_DWORD*)v4) && sub_426070(v4) == v8)
                {
                    if (sub_41BEA6((_DWORD*)v4))
                        ++v7;
                }
            }
        }
    }
    return v7;
}

