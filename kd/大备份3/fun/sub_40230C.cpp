#include "sub.h"
void __fastcall sub_40230C(int a1)
{
    int v1; // esi
    unsigned __int8 v2; // al
    unsigned __int8 v3; // al
    char v4; // al
    char v5; // al
    int v6; // esi
    int* v7; // eax
    int* v8; // eax
    char v10[16]; // [esp+8h] [ebp-C0h] BYREF
    char v11[16]; // [esp+18h] [ebp-B0h] BYREF
    int v12; // [esp+28h] [ebp-A0h]
    int v13; // [esp+2Ch] [ebp-9Ch]
    int j; // [esp+30h] [ebp-98h]
    int v15; // [esp+34h] [ebp-94h]
    int v16; // [esp+38h] [ebp-90h]
    int v17; // [esp+3Ch] [ebp-8Ch]
    int v18; // [esp+40h] [ebp-88h]
    int v19; // [esp+44h] [ebp-84h]
    int yTop; // [esp+48h] [ebp-80h]
    char* v21; // [esp+4Ch] [ebp-7Ch] BYREF
    int v22; // [esp+50h] [ebp-78h]
    int v23[2]; // [esp+54h] [ebp-74h] BYREF
    int v24; // [esp+5Ch] [ebp-6Ch]
    int v25; // [esp+60h] [ebp-68h]
    int v26; // [esp+64h] [ebp-64h]
    int v27; // [esp+68h] [ebp-60h]
    int v28; // [esp+6Ch] [ebp-5Ch]
    int v29; // [esp+70h] [ebp-58h]
    int v30; // [esp+74h] [ebp-54h]
    int i; // [esp+78h] [ebp-50h]
    int v32; // [esp+7Ch] [ebp-4Ch]
    _BYTE* v33; // [esp+80h] [ebp-48h]
    int v34; // [esp+84h] [ebp-44h]
    char v35; // [esp+88h] [ebp-40h]
    _BYTE* v36; // [esp+8Ch] [ebp-3Ch]
    int Src; // [esp+90h] [ebp-38h] BYREF
    int v38; // [esp+94h] [ebp-34h]
    int v39; // [esp+98h] [ebp-30h]
    int v40; // [esp+A8h] [ebp-20h]
    BOOL v41; // [esp+ACh] [ebp-1Ch]
    int v42; // [esp+C4h] [ebp-4h]

    if (*(_DWORD*)(a1 + 428) != 80)
    {
        v22 = *(_DWORD*)(a1 + 328);
        if (*(_BYTE*)(a1 + 474) && *(_BYTE*)(a1 + 475) && (*(_BYTE*)(a1 + 474) & 1) == 0)
            *(_DWORD*)(a1 + 328) += 100 * (*(_DWORD*)(a1 + 424) - (*(_DWORD*)(a1 + 424) == 0));
        sub_446442((int*)unk_4B9B10, a1, (int)v23);
        v26 = v23[0];
        v24 = v23[1];
        v36 = (_BYTE*)sub_4741F8((int)unk_4B9B10, v22 / 800, *(_DWORD*)(a1 + 332) / 800);
        v32 = sub_446497((int*)unk_4B9B10, v22 / 100, *(_DWORD*)(a1 + 332) / 100);
        if (v36 && sub_425C50(v36))
            v32 = 4 * (unsigned __int8)unknown_libname_6(v36);
        v30 = 0;
        LOBYTE(v28) = 0;
        v29 = 0;
        if (v36)
        {
            LOBYTE(v30) = sub_425C30(v36);
            v30 = (unsigned __int8)v30;
            LOBYTE(v28) = sub_425C70(v36);
            v29 = sub_425C90(v36);
        }
        v35 = sub_4464F6((int*)unk_4B9B10, v22 / 800, *(_DWORD*)(a1 + 332) / 800);
        sub_49C15E((int)&Src);
        if ((_BYTE)v28 && (*(_DWORD*)(a1 + 392) || v29))
        {
            v38 = v26 - 8;
            v1 = *(_DWORD*)(a1 + 332) / 100 - v32;
            v39 = v1 + sub_4464BA((int)unk_4B9B10) - 2;
            if (v36)
                v39 -= v30;
            Src = unk_4B9214;
            if ((unsigned __int8)v28 == 2)
            {
                if (unk_4B93B0 % 2u == (*(_BYTE*)(a1 + 184) & 1))
                    sub_49AB05((int)unk_4BDC60, &Src);
            }
            else if ((unsigned __int8)v28 == 1)
            {
                sub_49AB05((int)unk_4BDC60, &Src);
            }
        }
        if (!*(_BYTE*)(a1 + 176))
        {
            v38 = v26;
            v39 = v24;
            v40 = *(_DWORD*)(a1 + 424);
            if (Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)unk_4B9B10) == (struct Concurrency::details::UMSThreadProxy*)23)
            {
                Src = *(unsigned __int8*)(a1 + 195) + unk_4B9234;
                v42 = 8 * *(unsigned __int8*)(a1 + 193) + 4952720;
            }
            else if (*(unsigned __int8*)(a1 + 195) < 4u && sub_41BA53(a1, 0x26u, 0) || *(_DWORD*)(a1 + 524))
            {
                Src = *((__int16*)unk_4B9394 + *(unsigned __int16*)(a1 + 498)) + *(_DWORD*)(a1 + 196);
            }
            else
            {
                Src = *(unsigned __int8*)(a1 + 195) < 4u
                    && (sub_41BA53(a1, 0x26u, 0) || *(_DWORD*)(a1 + 524) || sub_425CD0((int*)unk_4B9B10) == 3 && *(_BYTE*)(a1 + 184)) ? *((__int16*)*(&unk_4B9370 + *(unsigned __int8*)(a1 + 195)) + *(unsigned __int16*)(a1 + 498)) + *(_DWORD*)(a1 + 196) : *(_DWORD*)(a1 + 196);
            }
            sub_41CA3D((void*)a1, (int*)&v21);
            if (v21)
            {
                LOBYTE(v34) = sub_401DFE(v21);
                v34 = (unsigned __int8)v34;
                v25 = v38;
                v27 = v39;
                for (i = 0; i < v34 + 1; ++i)
                {
                    v2 = sub_425C10(v21);
                    if (v2 == i)
                        sub_409096(a1);
                    if (*(_DWORD*)(a1 + 480))
                    {
                        if (sub_425B70(v21))
                        {
                            v3 = sub_475EB0(v21);
                            if (v3 == i)
                            {
                                if (*(_DWORD*)(a1 + 428) == 142 && sub_425CB0(*(_BYTE**)(a1 + 480)) == 1)
                                    v19 = 0;
                                sub_498F3D(*(_DWORD*)(a1 + 480));
                                sub_490D23(*(_DWORD*)(a1 + 480));
                            }
                        }
                    }
                    if (i != v34)
                    {
                        v33 = (_BYTE*)sub_41EEB5((_BYTE*)a1, (int*)v21, i);
                        v4 = sub_401C1E((int*)v21, i, *(_DWORD*)(a1 + 424));
                        v38 = v4 + v25;
                        v5 = sub_401C5B((int*)v21, i, 0);
                        v39 = v5 + v27;
                        if (sub_401C98((int*)v21, i))
                            v40 = *(_DWORD*)(a1 + 424) == 0;
                        else
                            v40 = *(_DWORD*)(a1 + 424);
                        v41 = sub_401CC6((int*)v21, i) != 0;
                        yTop = 0;
                        if (*(_DWORD*)(a1 + 208))
                        {
                            v6 = sub_401C5B((int*)v21, i, 0) + *(_DWORD*)(a1 + 208);
                            yTop = v6 + 8 * (unsigned __int8)sub_425F90(v33);
                        }
                        sub_48FB00((int)v33, (int)&Src, (int)unk_4BDC60, &Src, yTop);
                    }
                }
                if (unk_4B93A8)
                {
                    v40 = 0;
                    v41 = 0;
                    for (j = 0; j < 2; ++j)
                    {
                        if (j)
                        {
                            if (j == 1)
                            {
                                v8 = sub_425B90(v21, (int*)v10, *(_DWORD*)(a1 + 424), 0);
                                v15 = *v8;
                                v16 = v8[1];
                                v17 = v8[2];
                                v18 = v8[3];
                            }
                        }
                        else
                        {
                            v7 = sub_425BD0(v21, (int*)v11, *(_DWORD*)(a1 + 424), 0);
                            v15 = *v7;
                            v16 = v7[1];
                            v17 = v7[2];
                            v18 = v7[3];
                        }
                        if (v15 || v16 || v17 || v18)
                        {
                            if (v15 > v17)
                            {
                                v13 = v15;
                                v15 = v17;
                                v17 = v13;
                            }
                            if (v16 > v18)
                            {
                                v12 = v16;
                                v16 = v18;
                                v18 = v12;
                            }
                            v38 = v15 + v26;
                            v39 = v16 + v24;
                            Src = unk_4B9210 + 4 * j;
                            sub_49AB05((int)unk_4BDC60, &Src);
                            v38 = v26 + v17 - 8;
                            v39 = v16 + v24;
                            Src = unk_4B9210 + 4 * j + 1;
                            sub_49AB05((int)unk_4BDC60, &Src);
                            v38 = v15 + v26;
                            v39 = v24 + v18 - 8;
                            Src = unk_4B9210 + 4 * j + 2;
                            sub_49AB05((int)unk_4BDC60, &Src);
                            v38 = v26 + v17 - 8;
                            v39 = v24 + v18 - 8;
                            Src = unk_4B9210 + 4 * j + 3;
                            sub_49AB05((int)unk_4BDC60, &Src);
                        }
                    }
                }
                if (*(_BYTE*)(a1 + 474) && *(_BYTE*)(a1 + 475) && (*(_BYTE*)(a1 + 474) & 1) == 0)
                    *(_DWORD*)(a1 + 328) = v22;
            }
        }
    }
}