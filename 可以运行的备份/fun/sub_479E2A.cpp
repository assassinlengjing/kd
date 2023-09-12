#include "sub.h" 
int sub_479E2A()
{
    void* v0; // esp
    char* v2; // eax
    int v3; // [esp+0h] [ebp-1574h]
    _DWORD* Block; // [esp+10h] [ebp-1564h]
    int j; // [esp+24h] [ebp-1550h]
    int v6[4]; // [esp+28h] [ebp-154Ch] BYREF
    int v7[1280]; // [esp+38h] [ebp-153Ch] BYREF
    int i; // [esp+1438h] [ebp-13Ch]
    int v9; // [esp+143Ch] [ebp-138h]
    int v10[4]; // [esp+1440h] [ebp-134h] BYREF
    int v11[4]; // [esp+1450h] [ebp-124h]
    CHAR String1[256]; // [esp+1460h] [ebp-114h] BYREF
    int v13; // [esp+1560h] [ebp-14h]
    int v14; // [esp+1564h] [ebp-10h]
    int v15; // [esp+1570h] [ebp-4h]

    v0 = alloca(5480);
    sub_482BF0(v6);
    v15 = 0;
    if (sub_482C74((int)v6, aDataCheergirld))
    {
        dword_4B92D8 = 0;
        LOBYTE(v13) = 0;
        v9 = 0;
        while (sub_482D44(v6, String1))
        {
            if (lstrcmpiA(String1, aStart_8))
            {
                if (!lstrcmpiA(String1, aEnd_4))
                    break;
                if ((unsigned __int8)v13 != 1 || v9 || lstrcmpiA(String1, aDef))
                {
                    if ((unsigned __int8)v13 == 1 && v9 && !lstrcmpiA(String1, aDefend_0))
                    {
                        v9 = 0;
                        ++dword_4B92D8;
                        sub_482FAA(v6);
                    }
                    else
                    {
                        sub_482FAA(v6);
                    }
                }
                else
                {
                    v9 = 1;
                    sub_482FAA(v6);
                }
            }
            else
            {
                LOBYTE(v13) = 1;
                dword_4B92D8 = 0;
                sub_482FAA(v6);
            }
        }
        if (dword_4B92D4)
            (**(void(__thiscall***)(int, int))dword_4B92D4)(dword_4B92D4, 3);
        v14 = dword_4B92D8;
        Block = (_DWORD*)operator new(84 * dword_4B92D8 + 4);
        LOBYTE(v15) = 1;
        if (Block)
        {
            *Block = v14;
            eh_vector_constructor_iterator(Block + 1, 0x54u, v14, sub_43E640, sub_43E6E5);
                v3 = (int)(Block + 1);
        }
        else
        {
            v3 = 0;
        }
        LOBYTE(v15) = 0;
        dword_4B92D4 = v3;
        sub_48314A(v6);
        sub_482BF0(v10);
        LOBYTE(v15) = 2;
        if (sub_482C74((int)v10, aDemoKkResult1T_0))
        {
            sub_402080((int)v7, 20, 256, (void(*)(int))sub_48A44E);
            v2 = sub_426210((char*)byte_4B9B10);
            sub_489927(v2, (int)v10, (int)v7, 256, 0);
            v11[0] = sub_485ED0((int)v7, 256, a1st_1, -1);
            v11[1] = sub_485ED0((int)v7, 256, a2nd_1, -1);
            v11[2] = sub_485ED0((int)v7, 256, a3rd_1, -1);
            v11[3] = sub_485ED0((int)v7, 256, aBiri_0, -1);
            sub_48314A(v6);
            while (sub_482D44(v6, String1))
            {
                if (!lstrcmpiA(String1, aStart_9))
                {
                    sub_482FAA(v6);
                    break;
                }
                if (!lstrcmpiA(String1, aEnd_5))
                    break;
                sub_482FAA(v6);
            }
            for (i = 0; i < dword_4B92D8; ++i)
            {
                for (j = 0; j < 4; ++j)
                    sub_47ECA0((_WORD*)(84 * i + dword_4B92D4), j, v11[j]);
                sub_43E7AA(84 * i + dword_4B92D4, (_DWORD)v6, (int)v7);
            }
            LOBYTE(v15) = 0;
            sub_482C2F(v10);
            v15 = -1;
            sub_482C2F(v6);
            return 1;
        }
        else
        {
            LOBYTE(v15) = 0;
            sub_482C2F(v10);
            v15 = -1;
            sub_482C2F(v6);
            return 0;
        }
    }
    else
    {
        v15 = -1;
        sub_482C2F(v6);
        return 0;
    }
}