#include "sub.h" 
MMRESULT __cdecl sub_4903F4(HMMIO hmmio, int a2, int a3, int a4, int a5, LPMMIOINFO pmmioinfo)
{
    unsigned int i; // [esp+0h] [ebp-8h]
    MMRESULT v8; // [esp+4h] [ebp-4h]

    v8 = 0;
    *(_DWORD*)a5 = 0;
    for (i = 0; i < a2; ++i)
    {
        if (pmmioinfo->pchNext == pmmioinfo->pchEndWrite)
        {
            pmmioinfo->dwFlags |= 0x10000000u;
            v8 = mmioAdvance(hmmio, pmmioinfo, 1u);
            if (v8)
                break;
        }
        *pmmioinfo->pchNext++ = *(_BYTE*)(i + a3);
        ++* (_DWORD*)a5;
    }
    return v8;
}
