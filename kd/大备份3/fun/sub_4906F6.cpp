#include "sub.h" 
int __cdecl sub_4906F6(HMMIO a1, HMMIO hmmio, int a3)
{
    HGLOBAL v3; // eax
    HGLOBAL v5; // eax
    HGLOBAL v6; // eax
    HGLOBAL v7; // eax
    HGLOBAL v8; // eax
    struct _MMCKINFO pmmcki; // [esp+0h] [ebp-18h] BYREF
    HPSTR pch; // [esp+14h] [ebp-4h]

    v3 = GlobalAlloc(0x42u, *(_DWORD*)(a3 + 4));
    pch = (HPSTR)GlobalLock(v3);
    if (!pch)
        return 0;
    pmmcki.ckid = *(_DWORD*)a3;
    pmmcki.cksize = *(_DWORD*)(a3 + 4);
    if (mmioCreateChunk(hmmio, &pmmcki, 0)
        || mmioRead(a1, pch, *(_DWORD*)(a3 + 4)) != *(_DWORD*)(a3 + 4)
        || mmioWrite(hmmio, pch, *(_DWORD*)(a3 + 4)) != *(_DWORD*)(a3 + 4)
        || mmioAscend(hmmio, &pmmcki, 0))
    {
        if (pch)
        {
            v7 = GlobalHandle(pch);
            GlobalUnlock(v7);
            v8 = GlobalHandle(pch);
            GlobalFree(v8);
        }
        return 0;
    }
    else
    {
        if (pch)
        {
            v5 = GlobalHandle(pch);
            GlobalUnlock(v5);
            v6 = GlobalHandle(pch);
            GlobalFree(v6);
        }
        return 1;
    }
}
