#include "sub.h" 
MMRESULT sub_490492(int a1, LPMMCKINFO pmmcki, LPMMCKINFO pmmckiParent, LPCMMIOINFO pmmioinfo, ...)
{
    MMRESULT v5; // [esp+0h] [ebp-4h]
    va_list va; // [esp+1Ch] [ebp+18h] BYREF

    va_start(va, pmmioinfo);
    if (!*(_DWORD*)a1)
        return 0;
    //pmmioinfo->dwFlags |= 0x10000000u; ???
    v5 = mmioSetInfo(*(HMMIO*)a1, pmmioinfo, 0);
    if (!v5)
    {
        v5 = mmioAscend(*(HMMIO*)a1, pmmcki, 0);
        if (!v5)
        {
            v5 = mmioAscend(*(HMMIO*)a1, pmmckiParent, 0);
            if (!v5)
            {
                mmioSeek(*(HMMIO*)a1, 0, 0);
                v5 = mmioDescend(*(HMMIO*)a1, pmmckiParent, 0, 0);
                if (!v5)
                {
                    pmmcki->ckid = 1952670054;
                    if (!mmioDescend(*(HMMIO*)a1, pmmcki, pmmckiParent, 0x10u))
                    {
                        mmioWrite(*(HMMIO*)a1, va, 4);
                        mmioAscend(*(HMMIO*)a1, pmmcki, 0);
                    }
                    v5 = mmioAscend(*(HMMIO*)a1, pmmckiParent, 0);
                }
            }
        }
    }
    if (*(_DWORD*)a1)
    {
        mmioClose(*(HMMIO*)a1, 0);
        *(_DWORD*)a1 = 0;
    }
    return v5;
}
