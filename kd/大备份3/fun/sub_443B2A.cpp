#include "sub.h" 
BOOL __stdcall sub_443B2A(_DWORD* a1, _DWORD* a2)
{
    int v3; // eax
    int v4; // eax
    int* v5; // eax
    int v6; // esi
    int v7; // esi
    int v8; // esi
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // eax
    int v13; // eax
    int ExecutingProxy; // eax
    int v15; // eax
    int v16; // eax
    int v17; // eax
    int v18; // eax
    int v19; // eax
    int v20; // [esp+4h] [ebp-68h]
    int v21[4]; // [esp+Ch] [ebp-60h] BYREF
    struct tagRECT v22; // [esp+1Ch] [ebp-50h] BYREF
    int v23[4]; // [esp+2Ch] [ebp-40h] BYREF
    int v24; // [esp+3Ch] [ebp-30h]
    int v25; // [esp+40h] [ebp-2Ch]
    int v26; // [esp+44h] [ebp-28h]
    int v27; // [esp+48h] [ebp-24h]
    struct tagRECT v28; // [esp+4Ch] [ebp-20h]
    char* v29; // [esp+5Ch] [ebp-10h]
    char* v30; // [esp+60h] [ebp-Ch]
    Concurrency::details::UMSFreeVirtualProcessorRoot* v31; // [esp+64h] [ebp-8h]
    int v32; // [esp+68h] [ebp-4h]

    v30 = (char*)sub_41C915((_DWORD)a1);
    v29 = (char*)sub_41C915((_DWORD)a2);
    if (!v30 || !v29)
        return 0;
    v3 = sub_425D70(a1);
    v28 = *(struct tagRECT*)sub_425B90(v30, v23, v3, 0);
    v31 = (Concurrency::details::UMSFreeVirtualProcessorRoot*)sub_426910(a1);
    v32 = 0;
    if (v31 && !v28.left && !v28.top && !v28.right && !v28.bottom)
    {
        v28 = *sub_491709((int)v31, &v22, 0);
        v32 = 1;
    }
    v4 = sub_425D70(a2);
    v5 = sub_425BD0(v29, v21, v4, 0);
    v24 = *v5;
    v25 = v5[1];
    v26 = v5[2];
    v27 = v5[3];
    if (!sub_474E10((unsigned char*)a1) && !v28.left && !v28.top && !v28.right && !v28.bottom)
        return 0;
    if (!v24 && !v25 && !v26 && !v27)
        return 0;
    if (sub_474E10((unsigned char*)a1))
        return 1;
    v6 = sub_4260B0(a1) / 100;
    if (v6 - sub_4260B0(a2) / 100 <= 0)
    {
        v8 = sub_4260B0(a1) / 100;
        v20 = sub_4260B0(a2) / 100 - v8;
    }
    else
    {
        v7 = sub_4260B0(a1) / 100;
        v20 = v7 - sub_4260B0(a2) / 100;
    }
    if (v20 > (unsigned __int8)sub_4264B0((char*)a1))
        return 0;
    if (v32)
    {
        v13 = sub_426470((_DWORD*)v31);
        v28.left += v13 / 100;
        ExecutingProxy = (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(v31);
        v28.top += ExecutingProxy / 100;
        v15 = sub_426470((_DWORD*)v31);
        v28.right += v15 / 100;
        v12 = (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(v31);
    }
    else
    {
        v9 = sub_426090(a1);
        v28.left += v9 / 100;
        v10 = sub_4260D0(a1);
        v28.top += v10 / 100;
        v11 = sub_426090(a1);
        v28.right += v11 / 100;
        v12 = sub_4260D0(a1);
    }
    v28.bottom += v12 / 100;
    v16 = sub_426090(a2);
    v24 += v16 / 100;
    v17 = sub_4260D0(a2);
    v25 += v17 / 100;
    v18 = sub_426090(a2);
    v26 += v18 / 100;
    v19 = sub_4260D0(a2);
    v27 += v19 / 100;
    return v28.left - v24 <= v26 - v24
        && v24 - v28.left <= v28.right - v28.left
        && v28.top - v25 <= v27 - v25
        && v25 - v28.top <= v28.bottom - v28.top;
}

