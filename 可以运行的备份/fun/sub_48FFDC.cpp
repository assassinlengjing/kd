#include "sub.h" 
MMRESULT __cdecl sub_48FFDC(HMMIO hmmio, int a2, int a3, int a4)
{
    MMRESULT Info; // eax
    struct _MMIOINFO pmmioinfo; // [esp+0h] [ebp-54h] BYREF
    unsigned int v7; // [esp+48h] [ebp-Ch]
    unsigned int i; // [esp+4Ch] [ebp-8h]
    MMRESULT v9; // [esp+50h] [ebp-4h]

    v9 = 0;
    Info = mmioGetInfo(hmmio, &pmmioinfo, 0);
    v9 = Info != 0;
    if (Info)
        goto LABEL_13;
    v7 = a2;
    if ((unsigned int)a2 > *(_DWORD*)(a3 + 4))
        v7 = *(_DWORD*)(a3 + 4);
    *(_DWORD*)(a3 + 4) -= v7;
    for (i = 0; i < v7; ++i)
    {
        if (pmmioinfo.pchNext == pmmioinfo.pchEndRead)
        {
            v9 = mmioAdvance(hmmio, &pmmioinfo, 0);
            if (v9)
                goto LABEL_13;
            if (pmmioinfo.pchNext == pmmioinfo.pchEndRead)
            {
                v9 = 57603;
                goto LABEL_13;
            }
        }
        ++pmmioinfo.pchNext;
    }
    v9 = mmioSetInfo(hmmio, &pmmioinfo, 0);
    if (v9)
        LABEL_13:
    *(_DWORD*)a4 = 0;
    else
        *(_DWORD*)a4 = v7;
    return v9;
}
