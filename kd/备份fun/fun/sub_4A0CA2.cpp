#include "sub.h" 
int sub_4A0CA2(int thisx, int a2, int a3, struct tagRECT* p_rc)
{
    int result; // eax
    unsigned __int8 v6; // [esp+8h] [ebp-108h]
    unsigned __int8* v7; // [esp+Ch] [ebp-104h]
    LONG j; // [esp+10h] [ebp-100h]
    _WORD* v9; // [esp+14h] [ebp-FCh]
    int v10; // [esp+18h] [ebp-F8h]
    int v11; // [esp+1Ch] [ebp-F4h]
    int v12; // [esp+20h] [ebp-F0h]
    int v13; // [esp+24h] [ebp-ECh]
    int v14; // [esp+28h] [ebp-E8h]
    int v15; // [esp+2Ch] [ebp-E4h]
    int bottom; // [esp+30h] [ebp-E0h]
    int v17; // [esp+34h] [ebp-DCh]
    int v18; // [esp+38h] [ebp-D8h]
    int v19; // [esp+3Ch] [ebp-D4h]
    LONG right; // [esp+40h] [ebp-D0h]
    LONG left; // [esp+44h] [ebp-CCh]
    LONG top; // [esp+48h] [ebp-C8h]
    int v23; // [esp+5Ch] [ebp-B4h]
    int v24; // [esp+60h] [ebp-B0h]
    int v25; // [esp+64h] [ebp-ACh]
    int v26[4]; // [esp+68h] [ebp-A8h] BYREF
    __int16 v27; // [esp+78h] [ebp-98h]
    int v28[31]; // [esp+7Ch] [ebp-94h] BYREF
    int i; // [esp+F8h] [ebp-18h]
    struct tagRECT rc; // [esp+FCh] [ebp-14h] BYREF
    int v31; // [esp+10Ch] [ebp-4h]

    result = thisx;
    if (*(_DWORD*)(thisx + 16) && *(_DWORD*)(thisx + 12))
    {
        if (!p_rc)
        {
            SetRect(&rc, 0, 0, *(unsigned __int16*)(thisx + 6), *(unsigned __int16*)(thisx + 8));
            p_rc = &rc;
        }
        left = p_rc->left;
        top = p_rc->top;
        v15 = *(_DWORD*)(a3 + 4);
        v14 = *(_DWORD*)(a3 + 8);
        right = p_rc->right;
        bottom = p_rc->bottom;
        if (**(_DWORD**)(a3 + 12) > v15)
        {
            v13 = **(_DWORD**)(a3 + 12) - v15;
            v15 = **(_DWORD**)(a3 + 12);
            right -= v13;
            if (!*(_DWORD*)(a3 + 24))
                left += v13;
        }
        if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 4) > v14)
        {
            v12 = *(_DWORD*)(*(_DWORD*)(a3 + 12) + 4) - v14;
            v14 = *(_DWORD*)(*(_DWORD*)(a3 + 12) + 4);
            bottom -= v12;
            if (!*(_DWORD*)(a3 + 28))
                top += v12;
        }
        if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 8) < v15 + right)
        {
            v11 = v15 + right - *(_DWORD*)(*(_DWORD*)(a3 + 12) + 8);
            right = *(_DWORD*)(*(_DWORD*)(a3 + 12) + 8) - v15;
            if (*(_DWORD*)(a3 + 24))
                left += v11;
        }
        if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 12) < v14 + bottom)
        {
            v10 = v14 + bottom - *(_DWORD*)(*(_DWORD*)(a3 + 12) + 12);
            bottom = *(_DWORD*)(*(_DWORD*)(a3 + 12) + 12) - v14;
            if (*(_DWORD*)(a3 + 28))
                top += v10;
        }
        v26[0] = v15;
        v26[1] = v14;
        v26[2] = right + v15;
        v26[3] = bottom + v14;
        v28[0] = 124;
        result = (*(int(__stdcall**)(int, int*, int*, int, _DWORD))(*(_DWORD*)a2 + 100))(a2, v26, v28, 1, 0);
        v31 = result;
        if (!result)
        {
            v17 = v28[9];
            v25 = v28[4] / 2;
            v27 = *(_WORD*)(a3 + 40);
            v18 = *(unsigned __int16*)(thisx + 6) * ((bottom - 1) * *(_DWORD*)(a3 + 28) + top)
                + (right - 1) * *(_DWORD*)(a3 + 24)
                + left
                + *(_DWORD*)(thisx + 12);
            v24 = 1 - 2 * *(_DWORD*)(a3 + 24);
            v23 = *(unsigned __int16*)(thisx + 6) * (1 - 2 * *(_DWORD*)(a3 + 28));
            v19 = unknown_libname_30((_DWORD*)*(_DWORD*)(thisx + 16));
            if (*(_DWORD*)(a3 + 52))
                v19 = unknown_libname_30((_DWORD*)*(_DWORD*)(a3 + 52));
            for (i = 0; i < bottom; ++i)
            {
                v7 = (unsigned __int8*)v18;
                v9 = (_WORD*)v17;
                for (j = 0; j < right; ++j)
                {
                    v6 = *v7;
                    if (!*(_BYTE*)(thisx + 5) || v6)
                        *v9 = *(_WORD*)(v19 + 2 * v6);
                    v7 += v24;
                    ++v9;
                }
                v18 += v23;
                v17 += 2 * v25;
            }
            return (*(int(__stdcall**)(int, int*))(*(_DWORD*)a2 + 128))(a2, v26);
        }
    }
    return result;
}
