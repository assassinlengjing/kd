#include "sub.h" 
int sub_4851F7(_DWORD* thisx)
{
    BOOL v1; // esi
    BOOL v2; // esi
    int v5; // [esp+8h] [ebp-2Ch]
    int v6; // [esp+Ch] [ebp-28h]
    int v7; // [esp+10h] [ebp-24h]
    int v8; // [esp+14h] [ebp-20h]
    int v9; // [esp+18h] [ebp-1Ch]
    int v10; // [esp+1Ch] [ebp-18h]
    BOOL v11; // [esp+20h] [ebp-14h]
    int v12; // [esp+24h] [ebp-10h]
    int v13; // [esp+28h] [ebp-Ch]
    BOOL v14; // [esp+2Ch] [ebp-8h]
    int v15; // [esp+30h] [ebp-4h]

    v1 = sub_476D78(0);
    v13 = v1 - sub_476D29(0);
    v2 = sub_476CDA(0);
    v12 = v2 - sub_476C8B(0);
    v11 = sub_476DC7(0, 0);
    v14 = sub_476DC7(0, 1);
    v15 = 0;
    if (v11)
    {
        sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
        return 1;
    }
    else if (v14)
    {
        return 2;
    }
    else
    {
        if (v13 || v12)
        {
            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
            if (v13)
            {
                thisx[5] = (thisx[5] + v13 + 3) % 3;
                return 4;
            }
            else if (v12)
            {
                v15 = 3;
                v10 = sub_425CD0((_DWORD*)unk_4B9B10);
                if (thisx[5])
                {
                    if (thisx[5] == 1)
                    {
                        v6 = v12 + (unsigned __int8)unk_4B9986;
                        if (v10 == 1)
                        {
                            if (v6 >= 0)
                            {
                                if (v6 > (unsigned __int8)unk_4B9985)
                                    v6 = (unsigned __int8)unk_4B9985;
                            }
                            else
                            {
                                v6 = 0;
                            }
                        }
                        else if (v10 == 2)
                        {
                            if (v6 >= 1)
                            {
                                if (v6 > (unsigned __int8)unk_4B9985 - 1)
                                    v6 = (unsigned __int8)unk_4B9985 - 1;
                            }
                            else
                            {
                                v6 = 1;
                            }
                        }
                        if ((unsigned __int8)unk_4B9986 != v6)
                            unk_4B9987 = unk_4B9985 - v6;
                        unk_4B9986 = v6;
                    }
                    else if (thisx[5] == 2)
                    {
                        v5 = v12 + (unsigned __int8)unk_4B9987;
                        if (v10 == 1)
                        {
                            if (v5 >= 0)
                            {
                                if (v5 > (unsigned __int8)unk_4B9985)
                                    v5 = (unsigned __int8)unk_4B9985;
                            }
                            else
                            {
                                v5 = 0;
                            }
                        }
                        else if (v10 == 2)
                        {
                            if (v5 >= 1)
                            {
                                if (v5 > (unsigned __int8)unk_4B9985 - 1)
                                    v5 = (unsigned __int8)unk_4B9985 - 1;
                            }
                            else
                            {
                                v5 = 1;
                            }
                        }
                        if ((unsigned __int8)unk_4B9987 != v5)
                            unk_4B9986 = unk_4B9985 - v5;
                        unk_4B9987 = v5;
                    }
                }
                else
                {
                    v9 = v12 + (unsigned __int8)unk_4B9985;
                    if (v9 >= 2)
                    {
                        if (v9 > 8)
                            v9 = 8;
                    }
                    else
                    {
                        v9 = 2;
                    }
                    if ((unsigned __int8)unk_4B9985 != v9)
                    {
                        v8 = 0;
                        v7 = 8;
                        if (v10 == 2)
                        {
                            v8 = 1;
                            v7 = 7;
                        }
                        if ((v12 >= 0 || (unsigned __int8)unk_4B9987 <= v8) && (v12 <= 0 || (unsigned __int8)unk_4B9987 >= v7))
                            unk_4B9986 += v12;
                        else
                            unk_4B9987 += v12;
                    }
                    unk_4B9985 = v9;
                }
            }
        }
        return v15;
    }
}
