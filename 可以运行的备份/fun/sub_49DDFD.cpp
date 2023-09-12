#include "sub.h" 
int  sub_49DDFD(unsigned __int16* thisx, int a2, int a3)
{
    int result; // eax
    CHAR Text[256]; // [esp+4h] [ebp-27Ch] BYREF
    int v6; // [esp+104h] [ebp-17Ch]
    int v7; // [esp+108h] [ebp-178h]
    int v8; // [esp+10Ch] [ebp-174h]
    __int16 v9; // [esp+110h] [ebp-170h]
    int v10; // [esp+114h] [ebp-16Ch]
    int v11; // [esp+118h] [ebp-168h]
    int v12[4]; // [esp+11Ch] [ebp-164h] BYREF
    int v13; // [esp+12Ch] [ebp-154h]
    int v14; // [esp+140h] [ebp-140h]
    __int16 v15; // [esp+15Ch] [ebp-124h]
    int v16; // [esp+198h] [ebp-E8h]
    int v17; // [esp+19Ch] [ebp-E4h]
    int v18; // [esp+1A0h] [ebp-E0h]
    int v19; // [esp+1A4h] [ebp-DCh]
    int v20; // [esp+1A8h] [ebp-D8h] BYREF
    int v21; // [esp+1ACh] [ebp-D4h]
    int v22; // [esp+1B0h] [ebp-D0h]
    int v23; // [esp+1B4h] [ebp-CCh]
    int v24; // [esp+1B8h] [ebp-C8h]
    int v25[4]; // [esp+1BCh] [ebp-C4h] BYREF
    int v26; // [esp+1CCh] [ebp-B4h]
    int v27; // [esp+1E0h] [ebp-A0h]
    int v28[7]; // [esp+238h] [ebp-48h] BYREF
    __int16 v29; // [esp+254h] [ebp-2Ch]
    int v30; // [esp+258h] [ebp-28h]
    int v31; // [esp+25Ch] [ebp-24h]
    int v32; // [esp+260h] [ebp-20h]
    int v33; // [esp+264h] [ebp-1Ch] BYREF
    int v34; // [esp+268h] [ebp-18h]
    int v35; // [esp+26Ch] [ebp-14h]
    int v36; // [esp+270h] [ebp-10h]
    int v37; // [esp+274h] [ebp-Ch]
    int v38; // [esp+278h] [ebp-8h]
    int v39; // [esp+27Ch] [ebp-4h]

    v17 = 0;
    v31 = 0;
    v19 = 0;
    v32 = 0;
    v37 = 0;
    v8 = 0;
    v6 = thisx[3];
    v38 = thisx[4];
    if (**(_DWORD**)(a3 + 12) > *(_DWORD*)(a3 + 4))
        v32 = **(_DWORD**)(a3 + 12) - *(_DWORD*)(a3 + 4);
    if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 4) > *(_DWORD*)(a3 + 8))
        v19 = *(_DWORD*)(*(_DWORD*)(a3 + 12) + 4) - *(_DWORD*)(a3 + 8);
    if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 8) < v6 + *(_DWORD*)(a3 + 4))
        v31 = v6 + *(_DWORD*)(a3 + 4) - *(_DWORD*)(*(_DWORD*)(a3 + 12) + 8);
    if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 12) < v38 + *(_DWORD*)(a3 + 8))
        v17 = v38 + *(_DWORD*)(a3 + 8) - *(_DWORD*)(*(_DWORD*)(a3 + 12) + 12);
    if (*(_DWORD*)(a3 + 24))
    {
        v33 = v31;
        v35 = thisx[3] - v32;
    }
    else
    {
        v33 = v32;
        v35 = thisx[3] - v31;
    }
    if (*(_DWORD*)(a3 + 28))
    {
        v34 = v17;
        result = (int)thisx;
        v36 = thisx[4] - v19;
    }
    else
    {
        v34 = v19;
        result = thisx[4] - v17;
        v36 = result;
    }
    if (v33 < v35 && v34 < v36)
    {
        v20 = v32 + *(_DWORD*)(a3 + 4);
        v21 = v19 + *(_DWORD*)(a3 + 8);
        v22 = v6 + v20 - v32 - v31;
        v23 = v38 + v21 - v19 - v17;
        v12[0] = 124;
        v25[0] = 124;
        result = (*(int(__stdcall**)(_DWORD, int*, int*, int, _DWORD))(**(_DWORD**)thisx + 100))(
            *(_DWORD*)thisx,
            &v33,
            v12,
            1,
            0);
        v39 = result;
        if (result)
        {
            if (v39 == -2147024809)
            {
                wsprintfA(Text, "LockError ( %d, %d )-( %d, %d )", v33, v34, v35, v36);
                return sub_499850(Text);
            }
        }
        else
        {
            v39 = (*(int(__stdcall**)(int, int*, int*, int, _DWORD))(*(_DWORD*)a2 + 100))(a2, &v20, v25, 1, 0);
            if (v39)
            {
                (*(void(__stdcall**)(_DWORD, int*))(**(_DWORD**)thisx + 128))(*(_DWORD*)thisx, &v33);
                return sub_499850(aLockerror2);
            }
            else
            {
                v10 = v14;
                if (*(_DWORD*)(a3 + 24))
                    v10 = v10 + 2 * (v35 - v33) - 2;
                if (*(_DWORD*)(a3 + 28))
                    v10 += 2 * (v13 * (v36 - v34 - 1) / 2);
                v16 = (*(_DWORD*)(a3 + 24) == 0) - *(_DWORD*)(a3 + 24);
                v11 = v13 * ((*(_DWORD*)(a3 + 28) == 0) - *(_DWORD*)(a3 + 28)) / 2;
                v7 = v27;
                v18 = v26 / 2;
                v9 = v15;
                LOWORD(v24) = *(_WORD*)(a3 + 40);
                v28[0] = (int)&v33;
                v28[1] = (int)&v20;
                v28[2] = v10;
                v28[3] = v27;
                v28[4] = v16;
                v28[5] = v11;
                v28[6] = v26 / 2;
                v29 = v15;
                v30 = (unsigned __int16)v24;
                if ((unsigned __int16)v24 == 32)
                    sub_49E561((char*)thisx, (int)v28);
                else
                    sub_49E288((char*)thisx, (short*)v28);
                (*(void(__stdcall**)(_DWORD, int*))(**(_DWORD**)thisx + 128))(*(_DWORD*)thisx, &v33);
                return (*(int(__stdcall**)(int, int*))(*(_DWORD*)a2 + 128))(a2, &v20);
            }
        }
    }
    return result;
}

