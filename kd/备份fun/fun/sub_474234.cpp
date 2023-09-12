#include "sub.h" 
BOOL sub_474234(void* thisx, Concurrency::details::ContextBase* a2, int a3)
{
    struct _TaskCollectionBase* ExecutingCollection; // eax
    int* v5; // eax
    int v6; // eax
    int* v7; // eax
    int* v8; // eax
    int v9; // edx
    int v10; // eax
    int v11; // eax
    int v12; // eax
    int v13; // eax
    int v14; // eax
    int v15; // eax
    int v16; // eax
    int v17; // eax
    int v18; // eax
    int v19; // eax
    char v20[8]; // [esp+4h] [ebp-58h] BYREF
    int v21[4]; // [esp+Ch] [ebp-50h] BYREF
    char v22[16]; // [esp+1Ch] [ebp-40h] BYREF
    int v23; // [esp+2Ch] [ebp-30h]
    int v24; // [esp+30h] [ebp-2Ch]
    int v25; // [esp+34h] [ebp-28h]
    int v26; // [esp+38h] [ebp-24h]
    int v27; // [esp+3Ch] [ebp-20h]
    int v28; // [esp+40h] [ebp-1Ch]
    int v29; // [esp+44h] [ebp-18h]
    int v30; // [esp+48h] [ebp-14h]
    int v31; // [esp+4Ch] [ebp-10h]
    int v32; // [esp+50h] [ebp-Ch]
    int v33; // [esp+54h] [ebp-8h]
    char* v34; // [esp+58h] [ebp-4h]

    v34 = (char*)sub_41C915(a3);
    if (!v34)
        return 0;
    ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(a2);
    v5 = sub_475F00((_DWORD*)a2, (_DWORD*)v22, (int)ExecutingCollection);
    v29 = *v5;
    v30 = v5[1];
    v31 = v5[2];
    v32 = v5[3];
    v6 = sub_425D70((_DWORD*)a3);
    v7 = sub_425BD0(v34, v21, v6, 0);
    v25 = *v7;
    v26 = v7[1];
    v27 = v7[2];
    v28 = v7[3];
    v8 = sub_475ED0((_DWORD*)a2, (_DWORD*)v20);
    v9 = v8[1];
    v23 = *v8;
    v24 = v9;
    if (!v29 && !v30 && !v31 && !v32)
        return 0;
    if (!v25 && !v26 && !v27 && !v28)
        return 0;
    v33 = sub_4260B0((_DWORD*)a3) / 100;
    if (sub_4754B0((char*)a2) == 2 || sub_4754B0((char*)a2) == 3)
    {
        v10 = sub_475F40((_DWORD*)a2);
        v29 += v10;
        v11 = unknown_libname_19((_DWORD*)a2);
        v30 -= v11 / 100;
        v12 = sub_475F40((_DWORD*)a2);
        v31 += v12;
        v13 = unknown_libname_19((_DWORD*)a2);
        v32 -= v13 / 100;
        v14 = sub_474DD0((_DWORD*)a2);
        v23 += v14;
        v15 = sub_474DD0((_DWORD*)a2);
        v24 += v15;
    }
    if (v33 < v23 || v33 > v24)
        return 0;
    v16 = sub_426090((_DWORD*)a3);
    v25 += v16 / 100;
    v17 = sub_4260D0((_DWORD*)a3);
    v26 += v17 / 100;
    v18 = sub_426090((_DWORD*)a3);
    v27 += v18 / 100;
    v19 = sub_4260D0((_DWORD*)a3);
    v28 += v19 / 100;
    return v29 - v25 <= v27 - v25 && v25 - v29 <= v31 - v29 && v30 - v26 <= v28 - v26 && v26 - v30 <= v32 - v30;
}