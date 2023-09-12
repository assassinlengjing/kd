#include "sub.h" 
MMRESULT __cdecl sub_48FD80(LPSTR pszFileName, int a2, int a3, LPMMCKINFO pmmcki)
{
    LONG v4; // eax
    char v6[4]; // [esp+0h] [ebp-30h] BYREF
    unsigned __int16 pch[8]; // [esp+4h] [ebp-2Ch] BYREF
    HMMIO hmmio; // [esp+14h] [ebp-1Ch]
    struct _MMCKINFO v9; // [esp+18h] [ebp-18h] BYREF
    MMRESULT v10; // [esp+2Ch] [ebp-4h]

    *(_DWORD*)a3 = 0;
    v10 = 0;
    hmmio = mmioOpenA(pszFileName, 0, 0x10000u);
    if (hmmio)
    {
        v10 = mmioDescend(hmmio, pmmcki, 0, 0);
        if (!v10)
        {
            if (pmmcki->ckid == 1179011410 && pmmcki->fccType == 1163280727)
            {
                v9.ckid = 544501094;
                v10 = mmioDescend(hmmio, &v9, pmmcki, 0x10u);
                if (!v10)
                {
                    if (v9.cksize >= 0x10)
                    {
                        if (mmioRead(hmmio, (HPSTR)pch, 16) == 16)
                        {
                            if (pch[0] == 1)
                            {
                                *(_WORD*)v6 = 0;
                            }
                            else if (mmioRead(hmmio, v6, 2) != 2)
                            {
                                v10 = 57602;
                                goto LABEL_22;
                            }
                            *(_DWORD*)a3 = (_DWORD)GlobalAlloc(0, *(unsigned __int16*)v6 + 18);
                            if (*(_DWORD*)a3)
                            {
                                memcpy(*(void**)a3, pch, 0x10u);
                                *(_WORD*)(*(_DWORD*)a3 + 16) = *(_WORD*)v6;
                                if (!*(_WORD*)v6
                                    || (v4 = mmioRead(hmmio, (HPSTR)(*(_DWORD*)a3 + 18), *(unsigned __int16*)v6),
                                        v4 == *(unsigned __int16*)v6))
                                {
                                    v10 = mmioAscend(hmmio, &v9, 0);
                                    if (!v10)
                                        goto LABEL_26;
                                }
                                else
                                {
                                    v10 = 57601;
                                }
                            }
                            else
                            {
                                v10 = 57344;
                            }
                        }
                        else
                        {
                            v10 = 57602;
                        }
                    }
                    else
                    {
                        v10 = 57601;
                    }
                }
            }
            else
            {
                v10 = 57601;
            }
        }
    }
    else
    {
        v10 = 57600;
    }
LABEL_22:
    if (*(_DWORD*)a3)
    {
        GlobalFree(*(HGLOBAL*)a3);
        *(_DWORD*)a3 = 0;
    }
    if (hmmio)
    {
        mmioClose(hmmio, 0);
        hmmio = 0;
    }
LABEL_26:
    *(_DWORD*)a2 = (_DWORD)hmmio;
    return v10;
}
