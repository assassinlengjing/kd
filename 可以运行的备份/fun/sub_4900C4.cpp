#include "sub.h" 
MMRESULT __cdecl sub_4900C4(HMMIO hmmio, int a2, int a3, int a4, int a5)
{
    MMRESULT Info; // eax
    struct _MMIOINFO pmmioinfo; // [esp+0h] [ebp-54h] BYREF
    unsigned int v8; // [esp+48h] [ebp-Ch]
    unsigned int i; // [esp+4Ch] [ebp-8h]
    MMRESULT v10; // [esp+50h] [ebp-4h]

    v10 = 0;
    Info = mmioGetInfo(hmmio, &pmmioinfo, 0);
    v10 = Info != 0;
    if (Info)
        goto LABEL_13;
    v8 = a2;
    if ((unsigned int)a2 > *(_DWORD*)(a4 + 4))
        v8 = *(_DWORD*)(a4 + 4);
    *(_DWORD*)(a4 + 4) -= v8;
    for (i = 0; i < v8; ++i)
    {
        if (pmmioinfo.pchNext == pmmioinfo.pchEndRead)
        {
            v10 = mmioAdvance(hmmio, &pmmioinfo, 0);
            if (v10)
                goto LABEL_13;
            if (pmmioinfo.pchNext == pmmioinfo.pchEndRead)
            {
                v10 = 57603;
                goto LABEL_13;
            }
        }
        *(_BYTE*)(i + a3) = *pmmioinfo.pchNext++;
    }
    v10 = mmioSetInfo(hmmio, &pmmioinfo, 0);
    if (v10)
        LABEL_13:
    *(_DWORD*)a5 = 0;
    else
        *(_DWORD*)a5 = v8;
    return v10;
}
