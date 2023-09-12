#include "sub.h" 
void sub_454469(_BYTE* thisx, int a2)
{
    int v2; // edx
    int v3; // eax
    char* v4; // eax
    unsigned __int8 v5; // al
    unsigned __int8 v6; // al
    unsigned __int8 v7; // al
    unsigned __int8 v8; // al
    unsigned __int8 v9; // al
    unsigned __int8 v10; // al
    unsigned __int8 v11; // al
    int v12; // [esp-4h] [ebp-1D0h]
    int v13; // [esp-4h] [ebp-1D0h]
    unsigned int v15; // [esp+4h] [ebp-1C8h]
    int v16; // [esp+4h] [ebp-1C8h]
    int v17; // [esp+4h] [ebp-1C8h]
    unsigned int v18; // [esp+8h] [ebp-1C4h]
    int v19; // [esp+8h] [ebp-1C4h]
    int m; // [esp+Ch] [ebp-1C0h]
    int v21; // [esp+10h] [ebp-1BCh]
    int v22; // [esp+10h] [ebp-1BCh]
    int v23; // [esp+10h] [ebp-1BCh]
    int yTop; // [esp+14h] [ebp-1B8h]
    int v25; // [esp+20h] [ebp-1ACh]
    int v26; // [esp+24h] [ebp-1A8h]
    _BYTE* v27; // [esp+28h] [ebp-1A4h]
    int v28; // [esp+2Ch] [ebp-1A0h]
    CHAR String[256]; // [esp+30h] [ebp-19Ch] BYREF
    struct tagRECT v30; // [esp+130h] [ebp-9Ch] BYREF
    int v31; // [esp+140h] [ebp-8Ch] BYREF
    int v32; // [esp+144h] [ebp-88h]
    int v33; // [esp+148h] [ebp-84h]
    int j; // [esp+178h] [ebp-54h]
    int k; // [esp+17Ch] [ebp-50h]
    int i; // [esp+180h] [ebp-4Ch]
    struct tagRECT rc; // [esp+184h] [ebp-48h] BYREF
    int v38; // [esp+194h] [ebp-38h] BYREF
    int v39; // [esp+198h] [ebp-34h]
    int v40; // [esp+19Ch] [ebp-30h]

    if (a2 == -1)
    {
        SetRect(&rc, 0, 0, 320, 16);
        sub_4A02E9((_DWORD*)byte_4BDC60, (int)&rc, (int)&rc, 0, dword_4B9248);
        sub_49C15E((int)&v38);
        v38 = dword_4B91F8;
        for (i = 1; i < 30; ++i)
        {
            v39 = 8 * ((i + 1) % 5) - 40;
            v40 = 8 * i + 4;
            for (j = 0; j < 9; ++j)
            {
                sub_49CC5B((short*)byte_4BDC60, dword_4B9248, &v38);
                v39 += 40;
            }
        }
        for (k = 0; k < (unsigned __int8)byte_4B9985; ++k)
            sub_454469(thisx, k);
    }
    else
    {
        yTop = 56 * (a2 % 4) + 20;
        SetRect(&v30, 160 * (a2 / 4) + 4, yTop, 160 * (a2 / 4) + 156, 56 * (a2 % 4) + 68);
        sub_4A02E9((_DWORD*)byte_4BDC60, v2, (int)&v30, 0, dword_4B9248);
        SetRect(&v30, 160 * (a2 / 4) + 8, 56 * (a2 % 4) + 40, 160 * (a2 / 4) + 32, 56 * (a2 % 4) + 64);
        v12 = dword_4B9248;
        v3 = sub_49FFEC(198, 113, 0);
        sub_4A02E9((_DWORD*)byte_4BDC60, (int)&v30, (int)&v30, v3, v12);
        v28 = (unsigned __int8)byte_4B9988[a2];
        if (thisx[a2 + 2588] == 1)
        {
            sub_47B91A(160 * (a2 / 4) + 8, 56 * (a2 % 4) + 24, &byte_4B1F1C, 0, dword_4B9248);
        }
        else if (v28 >= (unsigned __int8)byte_4B9986)
        {
            sub_47B91A(160 * (a2 / 4) + 8, 56 * (a2 % 4) + 24, &byte_4B1F2C, 0, dword_4B9248);
        }
        else if (!thisx[a2 + 2588])
        {
            wsprintfA(String, "%d", v28 + 1);
            sub_47BC5A(160 * (a2 / 4) + 8, 56 * (a2 % 4) + 24, String, 0, dword_4B9248);
            wsprintfA(String, &byte_4B1F28);
            sub_47B91A(160 * (a2 / 4) + 16, 56 * (a2 % 4) + 24, String, 0, dword_4B9248);
        }
        if (!thisx[a2 + 2596])
        {
            v13 = dword_4B9248;
            v4 = unknown_libname_18((char*)(36 * *(unsigned __int16*)&thisx[2 * a2 + 2564] + dword_4B92E0));
            sub_47B91A(160 * (a2 / 4) + 36, 56 * (a2 % 4) + 24, v4, 0, v13);
            sub_47B91A(
                160 * (a2 / 4) + 84,
                56 * (a2 % 4) + 24,
                (LPCSTR)&byte_4B4664[18 * (unsigned __int8)thisx[a2 + 2580]],
                0,
                dword_4B9248);
        }
        sub_49C15E((int)&v31);
        v32 = 160 * (a2 / 4) + 12;
        v33 = 56 * (a2 % 4) + 40;
        sub_47900E(&v31, 1, *(unsigned __int16*)&thisx[2 * a2 + 2564], dword_4B9248);
        v32 = 160 * (a2 / 4) + 8;
        v33 = 56 * (a2 % 4) + 48;
        v25 = (unsigned __int8)sub_4575B4((unsigned char*)thisx, a2, 1);
        v26 = (unsigned __int8)sub_401710((_BYTE*)(dword_4B92E0 + 36 * *(unsigned __int16*)&thisx[2 * a2 + 2564]));
        sub_4A1307((int)word_4B9290, (Concurrency::details::HardwareAffinity*)(8 * v25 + 4952656));
        sub_485E5A((int)dword_4B93A4 + 24 * v26, (unsigned short*)word_4B9290);
        SetRect(&v30, 24 * (unsigned __int8)thisx[a2 + 2580], 0, 24, 16);
        v31 = dword_4B9234;
        sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v31, (_DWORD*)&v30);
        v27 = (_BYTE*)(36 * *(unsigned __int16*)&thisx[2 * a2 + 2564] + dword_4B92E0);
        if (thisx[a2 + 2596])
        {
            if (thisx[a2 + 2596] == 1)
            {
                sub_47B91A(160 * (a2 / 4) + 34, 56 * (a2 % 4) + 24, &byte_4B1F6C, 0, dword_4B9248);
                v6 = sub_426610(v27);
                wsprintfA(String, "%3d", v6);
                sub_47BC5A(160 * (a2 / 4) + 68, 56 * (a2 % 4) + 24, String, 0, dword_4B9248);
                sub_47B91A(160 * (a2 / 4) + 34, 56 * (a2 % 4) + 40, &byte_4B1F78, 0, dword_4B9248);
                v7 = sub_426630(v27);
                wsprintfA(String, "%3d", v7);
                sub_47BC5A(160 * (a2 / 4) + 68, 56 * (a2 % 4) + 40, String, 0, dword_4B9248);
                sub_47B91A(160 * (a2 / 4) + 34, 56 * (a2 % 4) + 56, &byte_4B1F88, 0, dword_4B9248);
                v8 = sub_426670(v27);
                wsprintfA(String, "%3d", v8);
                sub_47BC5A(160 * (a2 / 4) + 68, 56 * (a2 % 4) + 56, String, 0, dword_4B9248);
                sub_47B91A(160 * (a2 / 4) + 96, 56 * (a2 % 4) + 24, &byte_4B1F98, 0, dword_4B9248);
                v9 = sub_426550(v27);
                wsprintfA(String, "%3d", v9);
                sub_47BC5A(160 * (a2 / 4) + 132, 56 * (a2 % 4) + 24, String, 0, dword_4B9248);
                sub_47B91A(160 * (a2 / 4) + 96, 56 * (a2 % 4) + 40, &byte_4B1FA8, 0, dword_4B9248);
                v10 = sub_426650(v27);
                wsprintfA(String, "%3d", v10);
                sub_47BC5A(160 * (a2 / 4) + 132, 56 * (a2 % 4) + 40, String, 0, dword_4B9248);
                sub_47B91A(160 * (a2 / 4) + 96, 56 * (a2 % 4) + 56, &byte_4B1FB4, 0, dword_4B9248);
                v11 = sub_426690(v27);
                wsprintfA(String, "%3d", v11);
                sub_47BC5A(160 * (a2 / 4) + 132, 56 * (a2 % 4) + 56, String, 0, dword_4B9248);
            }
            else if (thisx[a2 + 2596] == 2)
            {
                if (thisx[a2 + 13092])
                {
                    v15 = (unsigned __int8)sub_4266B0(v27, (unsigned __int8)thisx[a2 + 13092] - 1);
                    if (v15 >= 0x49)
                    {
                        v16 = v15 - 128;
                        if (v16 >= 13)
                            sub_47B91A(160 * (a2 / 4) + 36, 56 * (a2 % 4) + 24, &byte_4B1FD0, 0, dword_4B9248);
                        else
                            sub_47B91A(160 * (a2 / 4) + 36, 56 * (a2 % 4) + 24, (LPCSTR)&byte_4B4E74[21 * v16], 0, dword_4B9248);
                    }
                    else
                    {
                        sub_47B91A(160 * (a2 / 4) + 36, 56 * (a2 % 4) + 24, (LPCSTR)&byte_4B46C0[27 * v15], 0, dword_4B9248);
                    }
                    v17 = (unsigned __int8)sub_4266B0(v27, (unsigned __int8)thisx[a2 + 13092] - 1);
                    sub_47BD8E(160 * (a2 / 4) + 36, 56 * (a2 % 4) + 40, v17, dword_4B9248);
                }
                else
                {
                    for (m = 0; m < 3; ++m)
                    {
                        v18 = (unsigned __int8)sub_4266B0(v27, m);
                        if (v18 >= 0x49)
                        {
                            v19 = v18 - 128;
                            if (v19 >= 13)
                                sub_47B91A(160 * (a2 / 4) + 36, yTop + 16 * m + 4, &byte_4B1FC4, 0, dword_4B9248);
                            else
                                sub_47B91A(160 * (a2 / 4) + 36, yTop + 16 * m + 4, (LPCSTR)&byte_4B4E74[21 * v19], 0, dword_4B9248);
                        }
                        else
                        {
                            sub_47B91A(160 * (a2 / 4) + 36, yTop + 16 * m + 4, (LPCSTR)&byte_4B46C0[27 * v18], 0, dword_4B9248);
                        }
                    }
                }
            }
        }
        else
        {
            sub_47B91A(160 * (a2 / 4) + 34, 56 * (a2 % 4) + 40, &byte_4B1F34, 0, dword_4B9248);
            v5 = sub_4265B0(v27);
            wsprintfA(String, "%3d", v5);
            sub_47BC5A(160 * (a2 / 4) + 68, 56 * (a2 % 4) + 40, String, 0, dword_4B9248);
            sub_47B91A(160 * (a2 / 4) + 34, 56 * (a2 % 4) + 56, &byte_4B1F40, 0, dword_4B9248);
            v21 = (unsigned __int8)sub_426570(v27);
            if (thisx[a2 + 2580])
            {
                if (thisx[a2 + 2580] == 1)
                    v21 += 15;
            }
            else
            {
                v21 += 5;
            }
            wsprintfA(String, "%3d", v21);
            sub_47BC5A(160 * (a2 / 4) + 68, 56 * (a2 % 4) + 56, String, 0, dword_4B9248);
            sub_47B91A(160 * (a2 / 4) + 96, 56 * (a2 % 4) + 40, &byte_4B1F4C, 0, dword_4B9248);
            v22 = (unsigned __int8)sub_4265D0(v27);
            if (thisx[a2 + 2580])
            {
                if (thisx[a2 + 2580] == 2)
                    v22 += 15;
            }
            else
            {
                v22 += 5;
            }
            wsprintfA(String, "%3d", v22);
            sub_47BC5A(160 * (a2 / 4) + 132, 56 * (a2 % 4) + 40, String, 0, dword_4B9248);
            sub_47B91A(160 * (a2 / 4) + 96, 56 * (a2 % 4) + 56, &byte_4B1F5C, 0, dword_4B9248);
            v23 = (unsigned __int8)sub_4265F0(v27);
            if (thisx[a2 + 2580])
            {
                if (thisx[a2 + 2580] == 3)
                    v23 += 15;
            }
            else
            {
                v23 += 5;
            }
            wsprintfA(String, "%3d", v23);
            sub_47BC5A(160 * (a2 / 4) + 132, 56 * (a2 % 4) + 56, String, 0, dword_4B9248);
        }
    }
}

