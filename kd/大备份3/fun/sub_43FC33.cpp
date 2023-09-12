#include "sub.h" 
int sub_43FC33(_DWORD* thisx, LPSTR pszFileName, int a3)
{
    CHAR Text[128]; // [esp+4h] [ebp-D4h] BYREF
    struct _MMCKINFO pmmcki; // [esp+84h] [ebp-54h] BYREF
    HMMIO hmmio; // [esp+98h] [ebp-40h] BYREF
    struct _MMCKINFO v8; // [esp+9Ch] [ebp-3Ch] BYREF
    int v9; // [esp+B0h] [ebp-28h]
    int v10[5]; // [esp+B4h] [ebp-24h] BYREF
    int v11; // [esp+C8h] [ebp-10h] BYREF
    int v12; // [esp+CCh] [ebp-Ch] BYREF
    int v13; // [esp+D0h] [ebp-8h] BYREF
    int v14; // [esp+D4h] [ebp-4h] BYREF

    sub_43F91E(thisx);
    if (sub_48FD80(pszFileName, (int)&hmmio, (int)&v14, &pmmcki))
    {
        wsprintfA(Text, aS_4, pszFileName);
        sub_499850(Text);
        return 0;
    }
    else if (sub_48FF86((int)&hmmio, &v8, &pmmcki))
    {
        sub_499850(&unk_4B0494);
        return 0;
    }
    else
    {
        memset(v10, 0, sizeof(v10));
        v10[0] = 20;
        v10[1] = 162;
        v10[2] = v8.cksize;
        v10[4] = v14;
        v9 = (*(int(__stdcall**)(int, int*, _DWORD*, _DWORD))(*(_DWORD*)a3 + 12))(a3, v10, thisx, 0);
        if (v9)
        {
            sub_499850(&unk_4B04B4);
            switch (v9)
            {
            case -2005401590:
                sub_499850(aDserrAllocated_1);
                break;
            case -2005401500:
                sub_499850(aDserrBadformat_0);
                break;
            case -2147024809:
                sub_499850(aDserrInvalidpa_1);
                break;
            case -2147221232:
                sub_499850(aDserrNoaggrega_0);
                break;
            case -2147024882:
                sub_499850(aDserrOutofmemo_0);
                break;
            case -2005401430:
                sub_499850(aDserrUninitial_1);
                break;
            case -2147467263:
                sub_499850(aDserrUnsupport_1);
                break;
            }
            sub_4901B9(&hmmio, (HGLOBAL*) & v14);
            return 0;
        }
        else
        {
            v9 = (*(int(**)(_DWORD, _DWORD, _DWORD, _DWORD, int*, int*, _DWORD, _DWORD, int))(*(_DWORD*)*thisx + 44))(
                *thisx,
                *thisx,
                0,
                0,
                &v12,
                &v13,
                0,
                0,
                2);
            if (v9)
            {
                sub_499850(&unk_4B055C);
                sub_4901B9(&hmmio, (HGLOBAL*)&v14);
                return 0;
            }
            else if (sub_4900C4(hmmio, v13, v12, (int)&v8, (int)&v11))
            {
                (*(void(**)(_DWORD, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD*)*thisx + 76))(
                    *thisx,
                    *thisx,
                    v12,
                    v13,
                    0,
                    0);
                sub_4901B9(&hmmio, (HGLOBAL*)&v14);
                return 0;
            }
            else
            {
                (*(void(__stdcall**)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD*)*thisx + 76))(*thisx, v12, v13, 0, 0);
                sub_4901B9(&hmmio, (HGLOBAL*)&v14);
                *((_BYTE*)thisx + 4) = 1;
                return 1;
            }
        }
    }
}

