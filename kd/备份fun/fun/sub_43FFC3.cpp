#include "sub.h" 
int sub_43FFC3(_DWORD* thisx, int a2, int a3, int a4, int a5, int a6)
{
    int v7; // eax
    __int64 X; // [esp+Ch] [ebp-2Ch]
    int v10; // [esp+18h] [ebp-20h]
    unsigned int v11; // [esp+1Ch] [ebp-1Ch] BYREF
    int v12; // [esp+20h] [ebp-18h]
    int v13; // [esp+24h] [ebp-14h]
    int i; // [esp+28h] [ebp-10h]
    int v15; // [esp+2Ch] [ebp-Ch]
    int v16; // [esp+30h] [ebp-8h]
    _BYTE* v17; // [esp+34h] [ebp-4h]

    if (!sub_4410E0(thisx))
        return -1;
    if (a2 < 0 || a2 >= thisx[34])
        return -1;
    if (a3 >= 16)
        return -1;
    v17 = (_BYTE*)sub_440E6C(thisx, a2, 0);
    if (!v17)
        return -1;
    if (sub_425F90(v17))
        return -1;
    sub_441100(v17, 3);
    v15 = a3;
    if (a3 <= -1)
    {
        if (a6)
        {
            for (i = 0; i < 16; ++i)
            {
                if (thisx[i + 18] == a2)
                {
                    v15 = i;
                    break;
                }
            }
        }
        if (v15 <= -1)
            v15 = sub_440363(thisx);
    }
    if (v15 == -1)
        return -1;
    if (thisx[v15 + 18] == a2)
    {
        (*(void(__stdcall**)(_DWORD))(*(_DWORD*)thisx[v15 + 2] + 72))(thisx[v15 + 2]);
        X = (unsigned int)thisx[v15 + 2];
        (*(void(__stdcall**)(_DWORD, _DWORD))(*(_DWORD*)thisx[v15 + 2] + 52))(X, HIDWORD(X));
    }
    else
    {
        if (thisx[v15 + 2])
        {
            (*(void(__stdcall**)(_DWORD))(*(_DWORD*)thisx[v15 + 2] + 72))(thisx[v15 + 2]);
            (*(void(__stdcall**)(_DWORD))(*(_DWORD*)thisx[v15 + 2] + 8))(thisx[v15 + 2]);
            thisx[v15 + 2] = 0;
        }
        v7 = unknown_libname_30((int*)v17);
        if ((*(int(__stdcall**)(_DWORD, int, _DWORD*))(*(_DWORD*)*thisx + 20))(*thisx, v7, &thisx[v15 + 2]))
            return -1;
    }
    thisx[v15 + 18] = a2;
    v16 = thisx[v15 + 2];
    if (a5 > 0)
    {
        if (a5 > 1000)
            a5 = 1000;
    }
    else
    {
        a5 = 1;
    }
    if (a5 == 100)
    {
        (*(void(__stdcall**)(int, _DWORD))(*(_DWORD*)v16 + 60))(v16, 0);
    }
    else
    {
        v13 = (__int64)(log10((double)a5 / 100.0) * 1000.0);
        v12 = (*(int(__stdcall**)(int, int))(*(_DWORD*)v16 + 60))(v16, v13);
        if (v12)
        {
            switch (v12)
            {
            case -2005401570:
                sub_499850(aDserrControlun_0);
                break;
            case -2147024809:
                sub_499850(aDserrInvalidpa_2);
                break;
            case -2005401530:
                sub_499850(aDserrPriolevel_0);
                break;
            default:
                sub_499850(&byte_4B05C0);
                break;
            }
        }
    }
    if (a4 > 0)
    {
        if (a4 > 1000)
            a4 = 1000;
    }
    else
    {
        a4 = 1;
    }
    if (a4 == 100)
    {
        (*(void(__stdcall**)(int, _DWORD))(*(_DWORD*)v16 + 68))(v16, 0);
    }
    else
    {
        (*(void(__stdcall**)(int, _DWORD))(*(_DWORD*)v16 + 68))(v16, 0);
        v10 = (*(int(__stdcall**)(int, unsigned int*))(*(_DWORD*)v16 + 32))(v16, &v11);
        if (v10)
        {
            switch (v10)
            {
            case -2005401570:
                sub_499850(aDserrControlun_1);
                break;
            case -2147024809:
                sub_499850(aDserrInvalidpa_3);
                break;
            case -2005401530:
                sub_499850(aDserrPriolevel_1);
                break;
            default:
                sub_499850(&byte_4B0628);
                break;
            }
        }
        else
        {
            v11 = a4 * v11 / 0x64;
            if ((*(int(__stdcall**)(int, unsigned int))(*(_DWORD*)v16 + 68))(v16, v11))
                sub_499850(&byte_4B05D0);
        }
    }
    (*(void(__stdcall**)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD*)v16 + 48))(v16, 0, 0, 0);
    return v15;
}

