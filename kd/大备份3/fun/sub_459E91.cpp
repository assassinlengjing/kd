#include "sub.h" 
void sub_459E91(int thisx, int a2)
{
    int v2; // eax
    int v3; // edx
    bool RuntimeOwnsLifetime; // al
    char* v5; // eax
    unsigned __int16 v6; // ax
    bool v7; // al
    char* v8; // eax
    char* v9; // eax
    int v10; // [esp-4h] [ebp-494h]
    int v11; // [esp-4h] [ebp-494h]
    int v12; // [esp-4h] [ebp-494h]
    CHAR v14[256]; // [esp+Ch] [ebp-484h] BYREF
    CHAR v15[256]; // [esp+10Ch] [ebp-384h] BYREF
    int v16; // [esp+20Ch] [ebp-284h]
    int v17; // [esp+210h] [ebp-280h]
    int v18; // [esp+214h] [ebp-27Ch]
    int v19; // [esp+218h] [ebp-278h]
    int v20; // [esp+21Ch] [ebp-274h]
    int j; // [esp+220h] [ebp-270h]
    Concurrency::details::_UnrealizedChore* v22; // [esp+224h] [ebp-26Ch]
    int v23; // [esp+228h] [ebp-268h]
    CHAR String[256]; // [esp+22Ch] [ebp-264h] BYREF
    int v25; // [esp+32Ch] [ebp-164h] BYREF
    int v26; // [esp+330h] [ebp-160h]
    int v27; // [esp+334h] [ebp-15Ch]
    struct tagRECT rc; // [esp+364h] [ebp-12Ch] BYREF
    CHAR v29[256]; // [esp+374h] [ebp-11Ch] BYREF
    int v30; // [esp+474h] [ebp-1Ch]
    int v31; // [esp+478h] [ebp-18h]
    int i; // [esp+47Ch] [ebp-14h]
    int v33[4]; // [esp+480h] [ebp-10h] BYREF

    switch (a2)
    {
    case -1:
        sub_451EB5((_BYTE*)thisx, 1, 0);
        sub_459E91(thisx, 0);
        sub_459E91(thisx, 1);
        sub_459E91(thisx, 2);
        return;
    case 0:
        sub_452045((_BYTE*)thisx, 3, 1, 7, 7);
        v33[0] = 28;
        v33[1] = 12;
        v33[2] = 76;
        v33[3] = 60;
        v10 = unk_4B9248;
        v2 = sub_49FFEC(197, 113, 0);
        sub_4A02E9((_DWORD*)unk_4BDC60, v3, (int)v33, v2, v10);
        sub_452045((_BYTE*)thisx, 13, 1, 24, 7);
        sub_452045((_BYTE*)thisx, 1, 9, 21, 14);
        sub_452045((_BYTE*)thisx, 23, 9, 15, 11);
        sub_47B91A(200, 78, &unk_4B2748, 0, unk_4B9248);
        v31 = 20;
        v30 = 84;
        for (i = 0; i < 10; ++i)
        {
            switch (i)
            {
            case 0:
                wsprintfA(v29, &unk_4B2758);
                break;
            case 1:
                wsprintfA(v29, &unk_4B2760);
                break;
            case 2:
                wsprintfA(v29, &unk_4B2768);
                break;
            case 3:
                wsprintfA(v29, &unk_4B2774);
                break;
            case 4:
                wsprintfA(v29, &unk_4B2780);
                break;
            case 5:
                wsprintfA(v29, &unk_4B2788);
                break;
            case 6:
                wsprintfA(v29, &unk_4B2790);
                break;
            case 7:
                wsprintfA(v29, &unk_4B279C);
                break;
            case 8:
                wsprintfA(v29, &unk_4B27A8);
                break;
            case 9:
                wsprintfA(v29, &unk_4B27B4);
                break;
            default:
                break;
            }
            sub_47B91A(80 * (i / 5) + v31, 20 * (i % 5) + v30, v29, 0, unk_4B9248);
        }
        return;
    case 1:
        v23 = *(unsigned __int16*)(thisx + 2564);
        if (!*(_BYTE*)(thisx + 2562) || *(_BYTE*)(thisx + 2562) == 3)
            v23 = *(unsigned __int16*)(thisx + 2568);
        if (*(_BYTE*)(thisx + 2562))
        {
            if (*(_BYTE*)(thisx + 2562) == 1 || *(_BYTE*)(thisx + 2562) == 3)
            {
                if (*(_BYTE*)(thisx + 2562) == 3)
                {
                    sub_45B346(
                        (_WORD*)(thisx + 76 * v23 + 11816),
                        (char*)(36 * *(unsigned __int16*)(thisx + 2564) + unk_4B92E0));
                    v22 = (Concurrency::details::_UnrealizedChore*)(thisx + 76 * v23 + 11816);
                }
                else
                {
                    sub_45B346((_WORD*)(thisx + 11892), (char*)(36 * *(unsigned __int16*)(thisx + 2564) + unk_4B92E0));
                    v22 = (Concurrency::details::_UnrealizedChore*)(thisx + 11892);
                }
            }
            else if (*(_BYTE*)(thisx + 2562) == 2)
            {
                v22 = (Concurrency::details::_UnrealizedChore*)(thisx + 76 * *(unsigned __int16*)(thisx + 2564) + 11816);
            }
        }
        else
        {
            v22 = (Concurrency::details::_UnrealizedChore*)(thisx + 76 * *(unsigned __int16*)(thisx + 2568) + 11816);
        }
        v20 = 0;
        v19 = 0;
        sub_49C15E((int)&v25);
        v26 = 40;
        v27 = 28;
        v25 = *((__int16*)Src + (unsigned __int8)sub_426550((char*)v22)) + unk_4B9234;
        RuntimeOwnsLifetime = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime(v22);
        SetRect(&rc, 24 * RuntimeOwnsLifetime, 0, 24, 24);
        sub_4A03B3((short*)unk_4BDC60, unk_4B9248, &v25, (_DWORD*)&rc);
        v26 += 4;
        v27 -= 8;
        if (*(_BYTE*)(thisx + 2562))
        {
            if (*(_BYTE*)(thisx + 2562) == 1 || *(_BYTE*)(thisx + 2562) == 3)
            {
                sub_47900E(&v25, 1, *(unsigned __int16*)(thisx + 2564), unk_4B9248);
            LABEL_38:
                v20 = 144;
                v19 = 20;
                if (*(_BYTE*)(thisx + 2562) != 3
                    && (*(_BYTE*)(thisx + 2562) == 1 || *(unsigned __int8*)(thisx + 11968) <= v23))
                {
                    wsprintfA(String, aCpu);
                }
                else
                {
                    wsprintfA(String, " %dP", v23 + 1);
                }
                sub_47B7ED(v20 - 8, v19, String, 0, unk_4B9248);
                v11 = unk_4B9248;
                v5 = sub_4266D0((char*)v22);
                sub_47B91A(v20 + 24, v19, v5, 0, v11);
                v6 = sub_4750D0(v22);
                wsprintfA(String, "LV%2d", v6);
                sub_47B7ED(v20 + 80, v19, String, 0, unk_4B9248);
                v12 = unk_4B9248;
                v7 = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime(v22);
                sub_47B91A(v20, v19 + 24, (LPCSTR)&unk_4B4664[18 * v7], 0, v12);
                v20 = 52;
                v19 = 84;
                for (j = 0; j < 10; ++j)
                {
                    v18 = 0;
                    switch (j)
                    {
                    case 0:
                        v18 = (unsigned __int16)sub_426710((short*)v22);
                        break;
                    case 1:
                        v18 = (unsigned __int16)sub_426730((short*)v22);
                        break;
                    case 2:
                        v18 = (unsigned __int16)sub_426750((short*)v22);
                        break;
                    case 3:
                        v18 = (unsigned __int16)sub_426770((short*)v22);
                        break;
                    case 4:
                        v18 = (unsigned __int16)sub_426810((short*)v22);
                        break;
                    case 5:
                        v18 = (unsigned __int16)sub_426790((short*)v22);
                        break;
                    case 6:
                        v18 = (unsigned __int16)sub_4267B0((short*)v22);
                        break;
                    case 7:
                        v18 = (unsigned __int16)sub_4267D0((short*)v22);
                        break;
                    case 8:
                        v18 = (unsigned __int16)sub_4267F0((short*)v22);
                        break;
                    case 9:
                        v18 = (unsigned __int16)sub_426830((short*)v22);
                        break;
                    default:
                        break;
                    }
                    wsprintfA(String, "%4d", v18);
                    sub_47B7ED(80 * (j / 5) + v20, 20 * (j % 5) + v19, String, 0, unk_4B9248);
                }
                v20 = 192;
                v19 = 96;
                for (j = 0; j < 3; ++j)
                {
                    LOBYTE(v17) = sub_426850((char*)v22, j);
                    if ((unsigned __int8)v17 >= 0x49u)
                    {
                        v16 = (unsigned __int8)v17 - 128;
                        if (v16 >= 13)
                            sub_47B91A(v20, 24 * j + v19, &unk_4B27D8, 0, unk_4B9248);
                        else
                            sub_47B91A(v20, 24 * j + v19, (LPCSTR)&unk_4B4E74[21 * v16], 0, unk_4B9248);
                    }
                    else
                    {
                        sub_47B91A(v20, 24 * j + v19, (LPCSTR)&unk_4B46C0[27 * (unsigned __int8)v17], 0, unk_4B9248);
                    }
                }
                return;
            }
            if (*(_BYTE*)(thisx + 2562) != 2)
                goto LABEL_38;
        }
        sub_47900E(&v25, 1, -(v23 + 1), unk_4B9248);
        goto LABEL_38;
    case 2:
        sub_451EB5((_BYTE*)thisx, 0, 1);
        if (*(_BYTE*)(thisx + 2562))
        {
            switch (*(_BYTE*)(thisx + 2562))
            {
            case 1:
                if (*(_WORD*)(thisx + 2566))
                {
                    if (*(_WORD*)(thisx + 2566) == 1)
                    {
                        sub_47B91A(16, 208, &unk_4B2858, 0, unk_4B9248);
                        sub_47B91A(80, 224, &unk_4B2878, 0, unk_4B9248);
                    }
                }
                else
                {
                    sub_47B91A(16, 208, &unk_4B2838, 0, unk_4B9248);
                }
                break;
            case 2:
                v9 = sub_4266D0((char*)(thisx + 76 * *(unsigned __int16*)(thisx + 2564) + 11816));
                wsprintfA(v14, aS_5, v9);
                sub_47B91A(16, 208, v14, 0, unk_4B9248);
                break;
            case 3:
                if (*(_WORD*)(thisx + 2566))
                {
                    if (*(_WORD*)(thisx + 2566) == 1)
                    {
                        sub_47B91A(16, 208, &unk_4B28D4, 0, unk_4B9248);
                        sub_47B91A(80, 224, &unk_4B28F4, 0, unk_4B9248);
                    }
                }
                else
                {
                    sub_47B91A(16, 208, &unk_4B28AC, 0, unk_4B9248);
                }
                break;
            }
        }
        else
        {
            v8 = sub_4266D0((char*)(thisx + 76 * *(unsigned __int16*)(thisx + 2568) + 11816));
            wsprintfA(v15, aS_4, v8);
            sub_47B91A(16, 208, v15, 0, unk_4B9248);
            sub_47B91A(120, 224, &unk_4B2820, 0, unk_4B9248);
        }
        break;
    }
}

