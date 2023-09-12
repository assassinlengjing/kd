#include "sub.h" 
void sub_4737C8(int thisx)
{
    const char* v1; // eax
    const char* v2; // eax
    int v3; // eax
    const CHAR* v4; // eax
    int v5; // [esp-4h] [ebp-150h]
    int v6; // [esp-4h] [ebp-150h]
    _DWORD* v8; // [esp+4h] [ebp-148h]
    int v9[14]; // [esp+8h] [ebp-144h] BYREF
    _DWORD* v10; // [esp+40h] [ebp-10Ch]
    int v11; // [esp+44h] [ebp-108h]
    int i; // [esp+48h] [ebp-104h]
    CHAR String[256]; // [esp+4Ch] [ebp-100h] BYREF

    sub_451EB5((_BYTE*)thisx, 1, 1);
    sub_452045((_BYTE*)thisx, 14, 0, 12, 3);
    sub_47B91A(128, 8, &unk_4B3D54, 0, unk_4B9248);
    sub_452045((_BYTE*)thisx, 1, 4, 18, 2 * *(unsigned __int8*)(thisx + 2477) + 1);
    for (i = 0; i < *(unsigned __int8*)(thisx + 2477); ++i)
    {
        v11 = 16 * i + 40;
        if (i == *(unsigned __int8*)(thisx + 2562))
        {
            sub_47B91A(16, v11, asc_4B3D68, 0, unk_4B9248);
        }
        else
        {
            wsprintfA(String, "%d", i + 1);
            sub_47B7ED(16, v11, String, 0, unk_4B9248);
        }
        if (i < *(unsigned __int8*)(thisx + 2562))
        {
            if (*(_BYTE*)(i + thisx + 2478))
            {
                v10 = (_DWORD*)(20 * (*(unsigned __int8*)(i + thisx + 2478) - 1) + *(_DWORD*)(thisx + 13392));
                if (unknown_libname_26(v10))
                {
                    v1 = (const char*)unknown_libname_26(v10);
                    wsprintfA(String, "%s", v1);
                    String[28] = 0;
                    sub_47B91A(32, v11, String, 0, unk_4B9248);
                }
                else
                {
                    sub_47B91A(32, v11, &unk_4B3D7C, 0, unk_4B9248);
                    wsprintfA(String, "%d", *(unsigned __int8*)(i + thisx + 2478));
                    sub_47BC5A(64, v11, String, 0, unk_4B9248);
                }
            }
            else
            {
                sub_47B91A(32, v11, &unk_4B3D70, 0, unk_4B9248);
            }
        }
    }
    sub_452045((_BYTE*)thisx, 20, 4, 19, 10);
    if (*(unsigned __int8*)(thisx + 2562) >= (int)*(unsigned __int8*)(thisx + 2477))
    {
        sub_47B91A(188, 52, &unk_4B3DE4, 0, unk_4B9248);
        sub_47B91A(168, 80, &unk_4B3E00, 0, unk_4B9248);
    }
    else
    {
        v8 = 0;
        if (*(int*)(thisx + 2528) > 0 && *(_DWORD*)(thisx + 2528) <= *(_DWORD*)(thisx + 13388))
            v8 = (_DWORD*)(20 * (*(_DWORD*)(thisx + 2528) - 1) + *(_DWORD*)(thisx + 13392));
        if (*(_DWORD*)(thisx + 2528))
        {
            if (unknown_libname_26(v8))
            {
                v2 = (const char*)unknown_libname_26(v8);
                wsprintfA(String, "%s", v2);
            }
            else
            {
                wsprintfA(String, &unk_4B3D9C);
            }
        }
        else
        {
            wsprintfA(String, &unk_4B3D90);
        }
        String[34] = 0;
        v5 = unk_4B9248;
        v3 = lstrlenA(String);
        sub_47B91A(236 - 2 * v3, 40, String, 0, v5);
        if (v8 && !unknown_libname_26(v8))
        {
            wsprintfA(String, "%02d", *(_DWORD*)(thisx + 2528));
            sub_47B7ED(244, 40, String, 0, unk_4B9248);
        }
        sub_49C15E((int)v9);
        v9[1] = 220;
        v9[2] = 64;
        if (v8)
        {
            v9[0] = sub_475790((short*)v8);
            if (!v9[0])
                v9[0] = unk_4B9244 + *(_DWORD*)(thisx + 2528) + 1;
        }
        else
        {
            v9[0] = unk_4B9244 + 1;
        }
        sub_49CC5B((short*)unk_4BDC60, unk_4B9248, v9);
        if (v8)
        {
            if (unknown_libname_12(v8))
            {
                v6 = unk_4B9248;
                v4 = (const CHAR*)unknown_libname_12(v8);
                sub_47B91A(24, 208, v4, 0, v6);
            }
        }
        else
        {
            sub_47B91A(24, 208, &unk_4B3DB8, 0, unk_4B9248);
        }
    }
}

