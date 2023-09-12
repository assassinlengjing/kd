#include "sub.h" 
int sub_46622B(char* thisx, _BYTE* a2, unsigned __int8 a3)
{
    char v3; // al
    unsigned __int8 v5; // al
    int v6; // eax
    int v7; // eax
    int v8; // eax
    int v9; // edx
    char v10; // al
    char v11; // al
    char v12; // al
    int v13; // [esp+0h] [ebp-7Ch]
    int v14; // [esp+4h] [ebp-78h]
    int v16; // [esp+Ch] [ebp-70h]
    SchedulerBase* v17; // [esp+10h] [ebp-6Ch]
    struct Concurrency::ISchedulerProxy* SchedulerProxy; // [esp+14h] [ebp-68h]
    _DWORD* v19; // [esp+18h] [ebp-64h]
    int m; // [esp+1Ch] [ebp-60h]
    int v21; // [esp+20h] [ebp-5Ch]
    int k; // [esp+24h] [ebp-58h]
    char* v23; // [esp+28h] [ebp-54h]
    int v24; // [esp+2Ch] [ebp-50h]
    char* v25; // [esp+30h] [ebp-4Ch]
    _DWORD* v26; // [esp+34h] [ebp-48h]
    int i; // [esp+38h] [ebp-44h]
    int v28; // [esp+3Ch] [ebp-40h]
    int v29; // [esp+40h] [ebp-3Ch]
    int v30[8]; // [esp+44h] [ebp-38h] BYREF
    int j; // [esp+64h] [ebp-18h]
    unsigned __int8 v32; // [esp+68h] [ebp-14h]
    _BYTE v33[9]; // [esp+6Bh] [ebp-11h]
    int v34; // [esp+74h] [ebp-8h]
    int v35; // [esp+78h] [ebp-4h]

    v32 = sub_425EF0(a2);
    LOBYTE(v35) = sub_426070(a2);
    if (a3 == 3)
    {
        for (i = 0; i < (unsigned __int8)byte_4B9985; ++i)
        {
            if (v32 != i)
            {
                v25 = &thisx[612 * i + 2628];
                if (unknown_libname_7((_DWORD*)v25))
                {
                    if (!sub_41BE56((_DWORD*)v25) && (unsigned __int8)sub_426070(v25) == (unsigned __int8)v35)
                    {
                        if (sub_41BEA6((_DWORD*)v25))
                        {
                            v26 = sub_41F0A9((_DWORD*)v25);
                            v24 = unknown_libname_30(v26);
                            if ((_BYTE*)v26[32] == a2 && (v24 == 6 || v24 == 7))
                            {
                                sub_4210E3(v26, (int)a2, (int)a2, a3);
                                v3 = rand() % 2;
                                sub_4210A8(v25, v3 + 0x80);
                            }
                        }
                    }
                }
            }
        }
        return 0;
    }
    else
    {
        memset(v30, 0, sizeof(v30));
        LOBYTE(v34) = 0;
        v29 = sub_426090((_DWORD*)a2);
        v28 = sub_4260B0((_DWORD*)a2);
        for (j = 0; j < (unsigned __int8)byte_4B9985; ++j)
        {
            if (j != v32)
            {
                v23 = &thisx[612 * j + 2628];
                if (unknown_libname_7((_DWORD*)v23))
                {
                    if (!sub_41BE56((_DWORD*)v23))
                    {
                        v5 = sub_426070(v23);
                        if (v5 == (unsigned __int8)v35)
                        {
                            if (sub_41BEA6((_DWORD*)v23))
                            {
                                v6 = sub_426090((_DWORD*)v23);
                                if (v6 - v29 <= 0)
                                {
                                    v8 = sub_426090((_DWORD*)v23);
                                    v14 = v29 - v8;
                                }
                                else
                                {
                                    v7 = sub_426090((_DWORD*)v23);
                                    v14 = v7 - v29;
                                }
                                if (sub_4260B0((_DWORD*)v23) - v28 <= 0)
                                    v13 = v28 - sub_4260B0((_DWORD*)v23);
                                else
                                    v13 = sub_4260B0((_DWORD*)v23) - v28;
                                v21 = v13 + v14;
                                for (k = 0; k < (unsigned __int8)v34 + 1; ++k)
                                {
                                    if (!v30[k] || v30[k] > v21)
                                    {
                                        for (m = (unsigned __int8)v34; m > k; --m)
                                        {
                                            v30[m] = v30[m - 1];
                                            v33[m + 1] = v33[m];
                                        }
                                        v30[k] = v21 + 1;
                                        v33[k + 1] = j;
                                        LOBYTE(v34) = v34 + 1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((_BYTE)v34)
        {
            for (j = 0; j < (unsigned __int8)v34; ++j)
            {
                v17 = (SchedulerBase*)&thisx[612 * (unsigned __int8)v33[j + 1] + 2628];
                SchedulerProxy = SchedulerBase::GetSchedulerProxy(v17);
                if (sub_425FF0((_DWORD*)v17)
                    || sub_426410((_DWORD*)v17)
                    || sub_425D50((_DWORD*)v17)
                    || sub_426430((_DWORD*)v17)
                    || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)82
                    || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)84
                    || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)85
                    || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)94)
                {
                    sub_4210A8((char*)v17, 130);
                }
                else
                {
                    v19 = sub_41F0A9((_DWORD*)v17);
                    v16 = unknown_libname_30(v19);
                    if (v16 != 6 && v16 != 7 && v16 != 8)
                        goto LABEL_67;
                    if (a2 == (_BYTE*)v19[32])
                    {
                        if (a3 == 1 && v16 == 6 || (v9 = a3, a3 == 2) && v16 == 7)
                        {
                            v10 = rand() % 2;
                            sub_4210A8((char*)v17, v10 - 124);
                            break;
                        }
                    LABEL_67:
                        sub_4210E3(v19, v9, (int)a2, a3);
                        v12 = rand() % 2;
                        sub_4210A8((char*)v17, v12 + 0x80);
                        break;
                    }
                    v11 = rand() % 2;
                    sub_4210A8((char*)v17, v11 - 126);
                }
            }
            if (j == (unsigned __int8)v34)
                return 0;
            else
                return (int)&thisx[612 * (unsigned __int8)v33[j + 1] + 2628];
        }
        else
        {
            return 0;
        }
    }
}

