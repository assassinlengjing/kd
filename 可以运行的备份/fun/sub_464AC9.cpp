#include "sub.h" 
int sub_464AC9(char* thisx, _BYTE* a2, unsigned __int8* a3, int a4)
{
    int v4; // esi
    int v5; // esi
    unsigned __int8* v8; // [esp+8h] [ebp-20h]
    char v9[8]; // [esp+Ch] [ebp-1Ch]
    int i; // [esp+14h] [ebp-14h]
    int v11; // [esp+18h] [ebp-10h]
    int v12; // [esp+1Ch] [ebp-Ch]
    int v13; // [esp+20h] [ebp-8h]
    int v14; // [esp+24h] [ebp-4h]

    LOBYTE(v11) = sub_425EF0(a2);
    LOBYTE(v13) = sub_426070(a2);
    LOBYTE(v14) = 0;
    for (i = 0; i < (unsigned __int8)byte_4B9985; ++i)
    {
        v8 = (unsigned __int8*)&thisx[612 * i + 2628];
        if (v8 != a3)
        {
            v4 = (unsigned __int8)v11;
            if (v4 != (unsigned __int8)sub_425EF0((char*)v8) && unknown_libname_7((_DWORD*)v8) && !sub_41BE56((_DWORD*)v8) && !sub_4263D0(v8))
            {
                if (byte_4B99CC && !a4 || (v5 = (unsigned __int8)v13, v5 != (unsigned __int8)sub_426070((char*)v8)))
                {
                    v9[(unsigned __int8)v14] = i;
                    LOBYTE(v14) = v14 + 1;
                }
            }
        }
    }
    if (!(_BYTE)v14)
        return 0;
    v12 = rand() % (unsigned __int8)v14;
    return (int)&thisx[612 * (unsigned __int8)v9[v12] + 2628];
}

