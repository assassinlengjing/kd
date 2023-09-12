#include "sub.h" 
int sub_443E80(int thisx)
{
    int v1; // eax
    int v2; // eax
    unsigned __int16 v3; // ax
    int v4; // esi
    int v5; // eax
    int v6; // eax
    unsigned __int16 v7; // ax
    char v8; // al
    int result; // eax
    int v10; // [esp-10h] [ebp-5F0h]
    CHAR v12[1024]; // [esp+10h] [ebp-5D0h] BYREF
    struct tagRECT v13; // [esp+410h] [ebp-1D0h] BYREF
    struct tagRECT v14; // [esp+420h] [ebp-1C0h] BYREF
    int v15; // [esp+430h] [ebp-1B0h]
    int v16; // [esp+434h] [ebp-1ACh]
    int v17; // [esp+438h] [ebp-1A8h]
    __int16 v18; // [esp+43Ch] [ebp-1A4h]
    struct tagRECT v19; // [esp+440h] [ebp-1A0h] BYREF
    int v20; // [esp+450h] [ebp-190h]
    struct tagRECT v21; // [esp+454h] [ebp-18Ch] BYREF
    int v22; // [esp+464h] [ebp-17Ch]
    struct tagRECT v23; // [esp+468h] [ebp-178h] BYREF
    struct tagRECT rc; // [esp+478h] [ebp-168h] BYREF
    int v25; // [esp+488h] [ebp-158h]
    int v26; // [esp+48Ch] [ebp-154h]
    int v27; // [esp+490h] [ebp-150h]
    int v28; // [esp+494h] [ebp-14Ch]
    int v29; // [esp+498h] [ebp-148h]
    int xLeft; // [esp+49Ch] [ebp-144h]
    int v31; // [esp+4A0h] [ebp-140h]
    int i; // [esp+4A4h] [ebp-13Ch]
    CHAR String[256]; // [esp+4A8h] [ebp-138h] BYREF
    int v34; // [esp+5A8h] [ebp-38h] BYREF
    int v35; // [esp+5ACh] [ebp-34h]
    int v36; // [esp+5B0h] [ebp-30h]

    sub_49C15E((int)&v34);
    v35 = 0;
    v36 = 176;
    if (*(_DWORD*)(thisx + 116) == 3)
        v34 = dword_4B9208;
    else
        v34 = dword_4B920C;
    sub_49AB05((int)byte_4BDC60, &v34);
    for (i = 0; i < 8 && (*(_DWORD*)(thisx + 116) != 3 || i <= 0); ++i)
    {
        LOBYTE(v29) = byte_4B9988[i];
        LOBYTE(v27) = sub_425E70((_BYTE*)(thisx + 612 * (unsigned __int8)v29 + 2628));
        if (unknown_libname_7((_DWORD*)(thisx + 612 * (unsigned __int8)v29 + 2628)))
        {
            xLeft = 79 * (i % 4) + 8;
            v28 = 28 * (i / 4) + 182;
            if (sub_41BEA6((_DWORD*)(thisx + 612 * (unsigned __int8)v29 + 2628)))
            {
                v35 = xLeft;
                v36 = v28;
                v34 = dword_4B9200 + 9;
                sub_49AB05((int)byte_4BDC60, &v34);
                v35 += 8;
                v34 = dword_4B9200 + 10;
            }
            else
            {
                v35 = xLeft;
                v36 = v28;
                v34 = (unsigned __int8)v29 + dword_4B9200;
                sub_49AB05((int)byte_4BDC60, &v34);
                v35 += 8;
                v34 = dword_4B9200 + 8;
            }
            sub_49AB05((int)byte_4BDC60, &v34);
            sub_422C10((char*)(thisx + 612 * (unsigned __int8)v29 + 2628), String);
            sub_47B91A(xLeft + 18, v28, String, 0, -1);
            v35 = xLeft + 17;
            v36 = v28 + 10;
            if ((unsigned __int8)byte_4B9985 <= 4u && *(_DWORD*)(thisx + 116) == 4)
            {
                v1 = sub_474E70((_DWORD*)thisx + 612 * (unsigned __int8)v29 + 2628);
                wsprintfA(String, "%3d", v1);
                sub_47B7ED(v35 - 3, v36 + 24, String, 0, -1);
                sub_47B91A(v35 + 21, v36 + 24, &byte_4B0884, 0, -1);
            }
            if (*(_DWORD*)(thisx + 2504) && (unsigned __int8)byte_4B9985 > 4u && *(_DWORD*)(thisx + 116) == 4)
            {
                v2 = sub_474E70((_DWORD*)thisx + 612 * (unsigned __int8)v29 + 2628);
                wsprintfA(String, "%3d", v2);
                sub_47B7ED(v35 + 16, v36 + 4, String, 0, -1);
                sub_47B91A(v35 + 40, v36 + 4, &byte_4B088C, 0, -1);
            }
            else if (*(_BYTE*)(thisx + (unsigned __int8)v29 + 13052) && *(_DWORD*)(thisx + 116) != 3)
            {
                LOBYTE(v22) = *(_BYTE*)(thisx + (unsigned __int8)v29 + 13052);
                wsprintfA(String, "%d", (unsigned __int8)v22);
                if ((unsigned __int8)byte_4B9985 > 4u && *(_DWORD*)(thisx + 116) == 4)
                {
                    sub_47B7ED(xLeft + 20, v28 + 12, String, 0, -1);
                    sub_47B91A(xLeft + 28, v28 + 12, &byte_4B0898, 0, -1);
                    v6 = sub_474E70((_DWORD*)thisx + 612 * (unsigned __int8)v29 + 2628);
                    wsprintfA(String, "%3d", v6);
                    sub_47B7ED(xLeft + 40, v28 + 12, String, 0, -1);
                    sub_47B91A(xLeft + 64, v28 + 12, &byte_4B08A0, 0, -1);
                }
                else
                {
                    sub_47B7ED(xLeft + 30, v28 + 12, String, 0, -1);
                    sub_47B91A(xLeft + 38, v28 + 12, &byte_4B08A4, 0, -1);
                }
            }
            else
            {
                v3 = sub_474EB0((short*)thisx + 612 * (unsigned __int8)v29 + 2628);
                v25 = v3 / 256;
                v26 = v3 % 256;
                if (v26 >= 128)
                {
                    if (v26 < 255)
                    {
                        v34 = dword_4B920C + 2;
                        sub_49AB05((int)byte_4BDC60, &v34);
                    }
                    if (v26 == 255)
                        SetRect(&v23, 0, 0, 48, 8);
                    else
                        SetRect(&v23, 0, 0, 48 * (v26 - 128) / 128, 8);
                    v34 = dword_4B920C + 3;
                    sub_49C8A6((int)byte_4BDC60, &v34, (_DWORD*)&v23);
                }
                else
                {
                    if (v25 <= 0)
                        v34 = dword_4B920C + 1;
                    else
                        v34 = dword_4B920C + 3;
                    sub_49AB05((int)byte_4BDC60, &v34);
                    SetRect(&rc, 0, 0, 48 * v26 / 128, 8);
                    v34 = dword_4B920C + 2;
                    sub_49C8A6((int)byte_4BDC60, &v34, (_DWORD*)&rc);
                }
                if (v25 > 0)
                {
                    wsprintfA(String, "%d", v25);
                    v10 = v28 + 10;
                    v4 = xLeft + 64;
                    v5 = lstrlenA(String);
                    sub_47B7ED(v4 - 8 * v5, v10, String, 0, -1);
                }
            }
            v35 = xLeft;
            v36 = v28 + 8;
            if ((unsigned __int8)v27 == 1)
            {
                v34 = dword_4B9204;
                sub_49AB05((int)byte_4BDC60, &v34);
            }
            else
            {
                v34 = dword_4B9204
                    + *((__int16*)dword_4B9394 + (unsigned __int16)sub_43E5A0((short*)thisx + 612 * (unsigned __int8)v29 + 2628))
                    + 1;
                if (sub_4264F0((_BYTE*)(thisx + 612 * (unsigned __int8)v29 + 2628)) == 4)
                {
                    SetRect(&v21, 16, 0, 16, 16);
                    v34 = dword_4B9204 + 1;
                    sub_49C8A6((int)byte_4BDC60, &v34, (_DWORD*)&v21);
                    ++v36;
                    v7 = sub_420F74(thisx + 612 * (unsigned __int8)v29 + 2628);
                    sub_478682(&v34, 1u, v7, 0, -1, -1);
                }
                else if (Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(thisx + 612 * (unsigned __int8)v29 + 2628)) == (struct Concurrency::ISchedulerProxy*)80)
                {
                    SetRect(&v21, 48, 0, 16, 16);
                    sub_49C8A6((int)byte_4BDC60, &v34, (_DWORD*)&v21);
                }
                else
                {
                    SetRect(&v21, 0, 0, 16, 16);
                    sub_49C8A6((int)byte_4BDC60, &v34, (_DWORD*)&v21);
                    LOWORD(v20) = sub_420F74(thisx + 612 * (unsigned __int8)v29 + 2628);
                    ++v35;
                    ++v36;
                    sub_478682(&v34, 1u, (unsigned __int16)v20, 0, -1, -1);
                }
            }
            if (!*(_BYTE*)(thisx + (unsigned __int8)v29 + 13052) && ((unsigned __int8)v27 == 2 || (unsigned __int8)v27 == 3))
            {
                v16 = xLeft + 17;
                v15 = v28 + 14;
                v35 = xLeft + 17;
                v36 = v28 + 18;
                v34 = dword_4B91DC;
                sub_49AB05((int)byte_4BDC60, &v34);
                v18 = sub_474E30((short*)thisx + 612 * (unsigned __int8)v29 + 2628);
                SetRect(&v19, 0, 0, 48 * v18 / 300, 8);
                v34 = dword_4B91DC + 1;
                sub_49C8A6((int)byte_4BDC60, &v34, (_DWORD*)&v19);
                v35 = v16 + 32;
                v36 = v15;
                v34 = dword_4B91DC + 2;
                sub_49AB05((int)byte_4BDC60, &v34);
                LOBYTE(v17) = v18 / 100;
                v35 = v16 + 40;
                v36 = v15;
                v34 = dword_4B91DC + (unsigned __int8)v17 + 3;
                sub_49AB05((int)byte_4BDC60, &v34);
            }
            LOBYTE(v31) = sub_474E90((char*)thisx + 612 * (unsigned __int8)v29 + 2628);
            if ((_BYTE)v31)
            {
                SetRect(&v14, xLeft + 16, v28 + 14, xLeft + 64, v28 + 24);
                sub_49EF70((int)byte_4BDC60, (_DWORD*)&v14, 0, 0, 0, 0x20u);
                if ((unsigned __int8)v31 >= 0x80u)
                    sub_47B91A(xLeft + 16, v28 + 16, (LPCSTR)&byte_4B06C0[13 * (unsigned __int8)v31 - 1664], 0, -1);
                else
                    sub_47B91A(xLeft + 16, v28 + 16, (LPCSTR)&byte_4B0698[13 * (unsigned __int8)v31 - 13], 0, -1);
            }
            if (*(_DWORD*)(thisx + 116) == 4)
            {
                if (sub_474E50((_DWORD*)thisx + 612 * (unsigned __int8)v29 + 2628))
                {
                    v8 = sub_474E50((_DWORD*)thisx + 612 * (unsigned __int8)v29 + 2628);
                    *(_BYTE*)(thisx + (unsigned __int8)v29 + 16120) = v8;
                    *(_BYTE*)(thisx + (unsigned __int8)v29 + 16128) = 60;
                    if (!*(_DWORD*)(thisx + 2504))
                    {
                        if (*(_DWORD*)(thisx + 2372))
                            sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
                    }
                }
            }
            if (*(_BYTE*)(thisx + (unsigned __int8)v29 + 16128))
            {
                --* (_BYTE*)(thisx + (unsigned __int8)v29 + 16128);
                if (*(_DWORD*)(thisx + 2372))
                {
                    wsprintfA(String, "%2d", *(char*)(thisx + (unsigned __int8)v29 + 16120));
                    if ((unsigned __int8)byte_4B9985 <= 4u)
                    {
                        sub_47B7ED(xLeft + 48, v28 + 34, String, 0, -1);
                    }
                    else
                    {
                        SetRect(&v13, xLeft, v28 + 14, xLeft + 16, v28 + 24);
                        sub_49EF70((int)byte_4BDC60, (_DWORD*)&v13, 0, 0, 0, 0x20u);
                        sub_47B7ED(xLeft, v28 + 16, String, 0, -1);
                    }
                }
            }
        }
    }
    result = thisx;
    if (*(_DWORD*)(thisx + 116) == 3)
    {
        sub_47B91A(105, 190, &byte_4B08AC, 0, -1);
        wsprintfA(v12, "%3d", *(_DWORD*)(thisx + 11376));
        sub_47B7ED(185, 190, v12, 0, -1);
        sub_47B91A(209, 190, &byte_4B08C4, 0, -1);
        sub_47B91A(105, 206, &byte_4B08C8, 0, -1);
        wsprintfA(v12, "%3d", *(_DWORD*)(thisx + 4 * *(unsigned __int8*)(thisx + 11372) + 11380));
        sub_47B7ED(185, 206, v12, 0, -1);
        return sub_47B91A(209, 206, &byte_4B08DC, 0, -1);
    }
    return result;
}

