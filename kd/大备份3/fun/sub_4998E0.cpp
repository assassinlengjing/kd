#include "sub.h" 
int sub_4998E0(int thisx, int a2)
{
    int v4[31]; // [esp+4h] [ebp-198h] BYREF
    int v5[4]; // [esp+80h] [ebp-11Ch] BYREF
    unsigned int v6; // [esp+90h] [ebp-10Ch]
    char j; // [esp+94h] [ebp-108h]
    int v8[31]; // [esp+98h] [ebp-104h] BYREF
    int i; // [esp+114h] [ebp-88h]
    int* v10; // [esp+118h] [ebp-84h]
    int v11[31]; // [esp+11Ch] [ebp-80h] BYREF
    int v12; // [esp+198h] [ebp-4h]

    *(_DWORD*)(thisx + 50500) = *(_DWORD*)a2;
    *(_WORD*)(thisx + 50448) = *(_WORD*)(a2 + 4);
    *(_WORD*)(thisx + 50450) = *(_WORD*)(a2 + 8);
    *(_WORD*)(thisx + 50446) = *(_WORD*)(a2 + 12);
    *(_BYTE*)(thisx + 50442) = *(_BYTE*)(a2 + 16);
    if (*(_BYTE*)(thisx + 50442))
    {
        *(_BYTE*)(thisx + 50443) = *(_BYTE*)(a2 + 20);
        *(_BYTE*)(thisx + 50444) = *(_BYTE*)(a2 + 21);
    }
    else
    {
        *(_BYTE*)(thisx + 50443) = 1;
        *(_BYTE*)(thisx + 50444) = 0;
    }
    SetRect((LPRECT)(thisx + 50452), 0, 0, *(__int16*)(thisx + 50448), *(__int16*)(thisx + 50450));
    SetRect(&rc, 0, 0, *(__int16*)(thisx + 50448), *(__int16*)(thisx + 50450));
    if (DirectDrawCreate(0, (LPDIRECTDRAW*)(thisx + 50504), 0))
    {
        MessageBoxA(0, aDirectdrawObje, aDdrawerror, 0);
    LABEL_52:
        sub_49A184((_DWORD**)thisx);
        return 0;
    }
    if ((***(int(__stdcall****)(_DWORD, void*, int))(thisx + 50504))(
        *(_DWORD*)(thisx + 50504),
        &unk_4ACA48,
        thisx + 50508))
    {
        MessageBoxA(0, aQueryinterface, aDdrawerror_0, 0);
        goto LABEL_52;
    }
    if (*(_BYTE*)(thisx + 50442))
        v12 = 17;
    else
        v12 = 8;
    if ((*(int(__stdcall**)(_DWORD, _DWORD, int))(**(_DWORD**)(thisx + 50508) + 80))(
        *(_DWORD*)(thisx + 50508),
        *(_DWORD*)(thisx + 50500),
        v12))
    {
        MessageBoxA(*(HWND*)(thisx + 50500), &unk_4B749C, aDdrawerror_1, 0);
        goto LABEL_52;
    }
    if (*(_BYTE*)(thisx + 50442))
    {
        if ((*(int(__stdcall**)(_DWORD, int, int, int, _DWORD, _DWORD))(**(_DWORD**)(thisx + 50508) + 84))(
            *(_DWORD*)(thisx + 50508),
            (*(__int16*)(thisx + 50446) * *(__int16*)(thisx + 50448)) >> 8,
            (*(__int16*)(thisx + 50446) * *(__int16*)(thisx + 50450)) >> 8,
            16,
            0,
            0))
        {
            *(_WORD*)(thisx + 50446) *= 2;
            if ((*(int(__stdcall**)(_DWORD, int, int, int, _DWORD, _DWORD))(**(_DWORD**)(thisx + 50508) + 84))(
                *(_DWORD*)(thisx + 50508),
                (*(__int16*)(thisx + 50446) * *(__int16*)(thisx + 50448)) >> 8,
                (*(__int16*)(thisx + 50446) * *(__int16*)(thisx + 50450)) >> 8,
                16,
                0,
                0))
            {
                MessageBoxA(*(HWND*)(thisx + 50500), &unk_4B74C8, aError03, 0);
                goto LABEL_52;
            }
        }
    }
    memset(v8, 0, sizeof(v8));
    v8[0] = 124;
    v8[1] = 2095598;
    (*(void(__stdcall**)(_DWORD, int*))(**(_DWORD**)(thisx + 50508) + 48))(*(_DWORD*)(thisx + 50508), v8);
    if (!*(_BYTE*)(thisx + 50442) && ((v8[19] & 0x40) == 0 || v8[21] != 16))
    {
        MessageBoxA(*(HWND*)(thisx + 50500), &unk_4B74F8, aNot16bit, 0);
        goto LABEL_52;
    }
    v10 = &v8[18];
    unk_4CA1F0[0] = v8[22];
    unk_4CA1F2 = v8[23];
    unk_4CA1F4 = v8[24];
    for (i = 0; i < 3; ++i)
    {
        v6 = (unsigned __int16)unk_4CA1F0[i];
        for (j = 0; j < 16; ++j)
        {
            if ((v6 & 1) != 0)
            {
                unk_4CA210[i] = j;
                break;
            }
            v6 >>= 1;
        }
        if ((unk_4CA1F0[i] & 0x8000) != 0)
            unk_4CA208[i] = 0x8000;
        else
            unk_4CA208[i] = ((unsigned __int16)unk_4CA1F0[i] + 1) >> 1;
        unk_4CA214[i] = (int)(unsigned __int16)unk_4CA1F0[i] >> unk_4CA210[i];
        v6 = (unsigned __int8)unk_4CA214[i];
        unk_4CA218[i] = 0;
        while (v6)
        {
            ++unk_4CA218[i];
            v6 >>= 1;
        }
    }
    unk_4CB21C = ~((1 << unk_4CA212) | (1 << unk_4CA211) | (1 << unk_4CA210[0]));
    memset(v11, 0, sizeof(v11));
    v11[0] = 124;
    v11[1] = 1;
    v11[26] = 512;
    v11[5] = 1;
    if (*(_BYTE*)(thisx + 50442) && *(_BYTE*)(thisx + 50444) || !*(_BYTE*)(thisx + 50444) && !*(_BYTE*)(thisx + 50443))
    {
        v11[1] |= 0x20u;
        v11[26] |= 0x18u;
    }
    if ((*(int(__stdcall**)(_DWORD, int*, int, _DWORD))(**(_DWORD**)(thisx + 50508) + 24))(
        *(_DWORD*)(thisx + 50508),
        v11,
        thisx + 50512,
        0))
    {
        MessageBoxA(0, &unk_4B7528, aError04, 0);
        goto LABEL_52;
    }
    if (*(_BYTE*)(thisx + 50442) && *(_BYTE*)(thisx + 50444) || !*(_BYTE*)(thisx + 50444) && !*(_BYTE*)(thisx + 50443))
    {
        v5[0] = 4;
        if ((*(int(__stdcall**)(_DWORD, int*, int))(**(_DWORD**)(thisx + 50512) + 48))(
            *(_DWORD*)(thisx + 50512),
            v5,
            thisx + 50516))
        {
            MessageBoxA(0, &unk_4B7564, aError05, 0);
            goto LABEL_52;
        }
    }
    if (*(_BYTE*)(thisx + 50443)
        && (memset(v4, 0, sizeof(v4)),
            v4[0] = 124,
            v4[1] = 7,
            v4[26] = 2112,
            v4[3] = *(__int16*)(thisx + 50448),
            v4[2] = *(__int16*)(thisx + 50450),
            (*(int(__stdcall**)(_DWORD, int*, int, _DWORD))(**(_DWORD**)(thisx + 50508) + 24))(
                *(_DWORD*)(thisx + 50508),
                v4,
                thisx + 50520,
                0)))
    {
        MessageBoxA(0, &unk_4B75A0, aError_41, 0);
        sub_49A184((_DWORD**)thisx);
        return 0;
    }
    else
    {
        SetRect(
            (LPRECT)(thisx + 50468),
            0,
            0,
            (*(__int16*)(thisx + 50446) * *(__int16*)(thisx + 50448)) >> 8,
            (*(__int16*)(thisx + 50446) * *(__int16*)(thisx + 50450)) >> 8);
        SetRect((LPRECT)(thisx + 50484), 0, 0, *(__int16*)(thisx + 50448), *(__int16*)(thisx + 50450));
        return 1;
    }
}

