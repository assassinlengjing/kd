#include "sub.h" 
int sub_466127(char* thisx, _BYTE* a2, int a3)
{
    unsigned __int8 v3; // al
    unsigned __int8* v6; // [esp+4h] [ebp-1Ch]
    int i; // [esp+Ch] [ebp-14h]
    char v8[8]; // [esp+10h] [ebp-10h]
    int v9; // [esp+18h] [ebp-8h]
    int v10; // [esp+1Ch] [ebp-4h]

    LOBYTE(v9) = 0;
    LOBYTE(v10) = sub_426070(a2);
    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
    {
        v6 = (unsigned __int8*)&thisx[612 * i + 2628];
        if (unknown_libname_7((_DWORD*)v6))
        {
            if (!sub_41BE56((_DWORD*)v6))
            {
                v3 = sub_426070((char*)v6);
                if (v3 != (unsigned __int8)v10 && !sub_4263D0(v6) && !*(_BYTE*)(i + a3))
                {
                    v8[(unsigned __int8)v9] = i;
                    LOBYTE(v9) = v9 + 1;
                }
            }
        }
    }
    if ((_BYTE)v9)
        return (int)&thisx[612 * (unsigned __int8)v8[rand() % (unsigned __int8)v9] + 2628];
    else
        return 0;
}

