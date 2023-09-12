#include "sub.h" 
BOOL __stdcall sub_466BEC(int a1, Concurrency::details::UMSFreeVirtualProcessorRoot* a2)
{
    int v3; // eax
    int* v4; // eax
    int* v5; // eax
    int v6; // esi
    int v7; // esi
    int v8; // esi
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // eax
    int v13; // eax
    int v14; // eax
    int v15; // eax
    int v16; // [esp+4h] [ebp-58h]
    char v17[16]; // [esp+Ch] [ebp-50h] BYREF
    int v18[4]; // [esp+1Ch] [ebp-40h] BYREF
    char* v19; // [esp+2Ch] [ebp-30h]
    int v20; // [esp+30h] [ebp-2Ch]
    int v21; // [esp+34h] [ebp-28h]
    int v22; // [esp+38h] [ebp-24h]
    int v23; // [esp+3Ch] [ebp-20h]
    int v24; // [esp+40h] [ebp-1Ch]
    int v25; // [esp+44h] [ebp-18h]
    int v26; // [esp+48h] [ebp-14h]
    int v27; // [esp+4Ch] [ebp-10h]
    int v28; // [esp+50h] [ebp-Ch]
    int v29; // [esp+54h] [ebp-8h]
    int v30; // [esp+58h] [ebp-4h]

    v19 = (char*)sub_41C915(a1);
    if (!v19)
        return 0;
    v3 = sub_425D70((_DWORD*)a1);
    v4 = sub_425B90(v19, v18, v3, 0);
    v24 = *v4;
    v25 = v4[1];
    v26 = v4[2];
    v27 = v4[3];
    v5 = sub_49530B((int)a2, (_DWORD*)v17);
    v20 = *v5;
    v21 = v5[1];
    v22 = v5[2];
    v23 = v5[3];
    if (!v24 && !v25 && !v26 && !v27 || !v20 && !v21 && !v22 && !v23)
        return 0;
    v6 = sub_426470((_DWORD*)a2) / 100;
    v29 = sub_48A0E0((_DWORD*)a2) + v6;
    v7 = sub_426530((_DWORD*)a2) / 100;
    v28 = unknown_libname_16((_DWORD*)a2) + v7;
    v8 = (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(a2) / 100;
    v30 = sub_475BE0((_DWORD*)a2) + v8;
    v9 = sub_4260B0((_DWORD*)a1);
    if (v28 - v9 / 100 <= 0)
    {
        v11 = sub_4260B0((_DWORD*)a1);
        v16 = v11 / 100 - v28;
    }
    else
    {
        v10 = sub_4260B0((_DWORD*)a1);
        v16 = v28 - v10 / 100;
    }
    if (v16 > (unsigned __int8)sub_4264B0((char*)a1))
        return 0;
    v12 = sub_426090((_DWORD*)a1);
    v24 += v12 / 100;
    v13 = sub_4260D0((_DWORD*)a1);
    v25 += v13 / 100;
    v14 = sub_426090((_DWORD*)a1);
    v26 += v14 / 100;
    v15 = sub_4260D0((_DWORD*)a1);
    v27 += v15 / 100;
    v20 += v29;
    v21 += v30;
    v22 += v29;
    v23 += v30;
    return v24 - v20 <= v22 - v20 && v20 - v24 <= v26 - v24 && v25 - v21 <= v23 - v21 && v21 - v25 <= v27 - v25;
}

