#include "sub.h" 
int sub_4790CD()
{
    unsigned __int16 v0; // ax
    char v1; // al
    char v2; // al
    char v3; // al
    char v4; // al
    char v5; // al
    char v6; // al
    char v7; // al
    char v8; // al
    char v9; // al
    char v10; // al
    char v11; // al
    char v12; // al
    unsigned __int8 v14; // al
    int v15; // [esp+0h] [ebp-4ACh]
    int v16; // [esp+4h] [ebp-4A8h]
    _DWORD* Block; // [esp+54h] [ebp-458h]
    int n; // [esp+68h] [ebp-444h]
    int ii; // [esp+6Ch] [ebp-440h]
    int v20; // [esp+70h] [ebp-43Ch]
    char v21; // [esp+78h] [ebp-434h]
    signed int j; // [esp+7Ch] [ebp-430h]
    int k; // [esp+7Ch] [ebp-430h]
    int m; // [esp+7Ch] [ebp-430h]
    int v25; // [esp+80h] [ebp-42Ch]
    int v26[4]; // [esp+84h] [ebp-428h] BYREF
    int i; // [esp+94h] [ebp-418h]
    int v28; // [esp+98h] [ebp-414h]
    CHAR String1[1024]; // [esp+9Ch] [ebp-410h] BYREF
    int v30; // [esp+49Ch] [ebp-10h]
    int v31; // [esp+4A8h] [ebp-4h]

    sub_482BF0(v26);
    v31 = 0;
    if (sub_482C74((int)v26, aChardataTxt))
    {
        LOBYTE(v30) = 0;
        while (sub_482D44(v26, String1))
        {
            if (lstrcmpiA(String1, aStart_6))
            {
                if (!lstrcmpiA(String1, aEnd_2))
                    break;
                if ((unsigned __int8)v30 == 1)
                {
                    ++Size;
                    sub_482FAA(v26);
                }
            }
            else
            {
                LOBYTE(v30) = 1;
                Size = 0;
                sub_482FAA(v26);
            }
        }
        if (dword_4B92E0)
            (**(void(__thiscall***)(int, int))dword_4B92E0)(dword_4B92E0, 3);
        v28 = Size;
        Block = (_DWORD*)operator new(36 * Size + 4);
        LOBYTE(v31) = 1;
        if (Block)
        {
            *Block = v28;
            eh_vector_constructor_iterator(Block + 1, 0x24u, v28, sub_401730, sub_40174E);
                v16 = (int)(Block + 1);
        }
        else
        {
            v16 = 0;
        }
        LOBYTE(v31) = 0;
        dword_4B92E0 = v16;
        dword_4B92DC = (_DWORD)operator new(Size);
        memset((void*)dword_4B92DC, 0, Size);
        sub_48314A(v26);
        while (sub_482D44(v26, String1))
        {
            if (!lstrcmpiA(String1, aStart_7))
            {
                sub_482FAA(v26);
                break;
            }
            if (!lstrcmpiA(String1, aEnd_3))
                break;
            sub_482FAA(v26);
        }
        for (i = 0; i < (int)Size; ++i)
        {
            if (!sub_482D44(v26, String1))
                goto LABEL_78;
            if (String1[0] == 110)
                goto LABEL_78;
            sub_401762((CHAR*)(36 * i + dword_4B92E0), String1);
            if (!sub_482D44(v26, String1))
                goto LABEL_78;
            if (String1[0] == 110)
                goto LABEL_78;
            v0 = atoi(String1);
            sub_4017EE((_WORD*)(36 * i + dword_4B92E0), v0);
            if (!sub_482D44(v26, String1))
                goto LABEL_78;
            if (String1[0] == 110)
                goto LABEL_78;
            v1 = atoi(String1);
            sub_47EA90((_BYTE*)(dword_4B92E0 + 36 * i), v1);
            if (!sub_482D44(v26, String1) || String1[0] == 110)
                goto LABEL_78;
            v25 = atoi(String1);
            for (j = 0; j < (int)dword_4B93A0 && unknown_libname_22((_DWORD*)dword_4B93A4 + 6 * j) != v25; ++j)
                ;
            if (j == dword_4B93A0)
                j = 0;
            streambuf::unbuffered((streambuf*)((char*)dword_4B93A4 + 24 * j), 1);
            sub_47EAB0((_BYTE*)(dword_4B92E0 + 36 * i), j);
            if (!sub_482D44(v26, String1))
                goto LABEL_78;
            if (String1[0] == 110)
                goto LABEL_78;
            v2 = atoi(String1);
            sub_47EAD0((_BYTE*)(36 * i + dword_4B92E0), v2);
            if (!sub_482D44(v26, String1))
                goto LABEL_78;
            if (String1[0] == 110)
                goto LABEL_78;
            v3 = atoi(String1);
            sub_47EAF0((_BYTE*)(dword_4B92E0 + 36 * i), v3);
            if (!sub_482D44(v26, String1))
                goto LABEL_78;
            if (String1[0] == 110)
                goto LABEL_78;
            v4 = atoi(String1);
            sub_47EB10((_BYTE*)(36 * i + dword_4B92E0), v4);
            if (!sub_482D44(v26, String1))
                goto LABEL_78;
            if (String1[0] == 110)
                goto LABEL_78;
            v5 = atoi(String1);
            sub_47EB30((_BYTE*)(dword_4B92E0 + 36 * i), v5);
            if (!sub_482D44(v26, String1))
                goto LABEL_78;
            if (String1[0] == 110)
                goto LABEL_78;
            v6 = atoi(String1);
            sub_47EB50((_BYTE*)(36 * i + dword_4B92E0), v6);
            if (!sub_482D44(v26, String1))
                goto LABEL_78;
            if (String1[0] == 110)
                goto LABEL_78;
            v7 = atoi(String1);
            sub_47EB70((_BYTE*)(dword_4B92E0 + 36 * i), v7);
            if (!sub_482D44(v26, String1))
                goto LABEL_78;
            if (String1[0] == 110)
                goto LABEL_78;
            v8 = atoi(String1);
            sub_47EB90((_BYTE*)(36 * i + dword_4B92E0), v8);
            if (!sub_482D44(v26, String1))
                goto LABEL_78;
            if (String1[0] == 110)
                goto LABEL_78;
            v9 = atoi(String1);
            sub_47EBB0((_BYTE*)(dword_4B92E0 + 36 * i), v9);
            if (!sub_482D44(v26, String1))
                goto LABEL_78;
            if (String1[0] == 110)
                goto LABEL_78;
            v10 = atoi(String1);
            sub_489E30((_BYTE*)(36 * i + dword_4B92E0), v10);
            if (!sub_482D44(v26, String1))
                goto LABEL_78;
            if (String1[0] == 110)
                goto LABEL_78;
            v11 = atoi(String1);
            sub_47EBF0((_BYTE*)(dword_4B92E0 + 36 * i), v11);
            if (!sub_482D44(v26, String1) || String1[0] == 110)
                goto LABEL_78;
            v12 = atoi(String1);
            sub_47EBD0((_BYTE*)(36 * i + dword_4B92E0), v12);
            for (k = 0; k < 3; ++k)
            {
                if (!sub_482D44(v26, String1) || String1[0] == 110)
                    goto LABEL_78;
                if (atoi(String1) <= 0)
                    v15 = -atoi(String1);
                else
                    v15 = atoi(String1);
                v21 = v15;
                if (v15 != 255 && v15 != 254 && v15 >= 73 && (v15 - 128 < 2 || v15 - 128 >= 13))
                    v21 = 0;
                sub_47EC10((_BYTE*)(36 * i + dword_4B92E0), k, v21);
            }
            for (m = 0; m < 3; ++m)
            {
                if ((unsigned __int8)sub_4266B0((_BYTE*)(36 * i + dword_4B92E0), m) == 254)
                {
                    v20 = 0;
                    while (!v20)
                    {
                        v20 = rand() % 86 + 1;
                        if (v20 < 73)
                        {
                            for (n = 0; n < 3; ++n)
                            {
                                if (n != m)
                                {
                                    v14 = sub_4266B0((_BYTE*)(dword_4B92E0 + 36 * i), n);
                                    if (sub_47744C(v20, v14))
                                        v20 = 0;
                                }
                            }
                        }
                        else
                        {
                            v20 += 55;
                            if (v20 >= 131)
                            {
                                for (ii = 0; ii < 3; ++ii)
                                {
                                    if (ii != m && v20 == (unsigned __int8)sub_4266B0((_BYTE*)(36 * i + dword_4B92E0), ii))
                                        v20 = 0;
                                }
                            }
                            else
                            {
                                v20 = 0;
                            }
                        }
                    }
                    sub_47EC10((_BYTE*)(36 * i + dword_4B92E0), m, v20);
                }
            }
            sub_482FAA(v26);
        }
        dword_4B92D0 = (int)(Size - 6) / 2;
        if ((int)(Size - 6) / 2 % 4 == 1)
            --dword_4B92D0;
        if (dword_4B92D0 < 0)
            dword_4B92D0 = 0;
        if (dword_4B92D0 > 16)
            dword_4B92D0 = 16;
        v31 = -1;
        sub_482C2F(v26);
        return 1;
    }
    else
    {
    LABEL_78:
        v31 = -1;
        sub_482C2F(v26);
        return 0;
    }
}