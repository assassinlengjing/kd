#include "sub.h" 
MMRESULT __cdecl sub_4901FC(LPSTR pszFileName, int a2, char* pch, LPMMCKINFO a4, LPMMCKINFO pmmcki)
{
    struct _MMCKINFO v6; // [esp+0h] [ebp-1Ch] BYREF
    char v7[4]; // [esp+14h] [ebp-8h] BYREF
    MMRESULT Chunk; // [esp+18h] [ebp-4h]

    *(_DWORD*)v7 = -1;
    Chunk = 0;
    *(_DWORD*)a2 = (unsigned int)mmioOpenA(pszFileName, 0, 0x11002u);
    if (!*(_DWORD*)a2)
        return 57604;
    pmmcki->fccType = 1163280727;
    pmmcki->cksize = 0;
    Chunk = mmioCreateChunk(*(HMMIO*)a2, pmmcki, 0x20u);
    if (!Chunk)
    {
        a4->ckid = 544501094;
        a4->cksize = 16;
        Chunk = mmioCreateChunk(*(HMMIO*)a2, a4, 0);
        if (!Chunk)
        {
            if (*(_WORD*)pch == 1)
            {
                if (mmioWrite(*(HMMIO*)a2, pch, 16) != 16)
                    return 57604;
            }
            else if (mmioWrite(*(HMMIO*)a2, pch, *((unsigned __int16*)pch + 8) + 18) != *((unsigned __int16*)pch + 8) + 18)
            {
                return 57604;
            }
            Chunk = mmioAscend(*(HMMIO*)a2, a4, 0);
            if (!Chunk)
            {
                v6.ckid = 1952670054;
                v6.cksize = 0;
                Chunk = mmioCreateChunk(*(HMMIO*)a2, &v6, 0);
                if (!Chunk)
                {
                    if (mmioWrite(*(HMMIO*)a2, v7, 4) == 4)
                    {
                        Chunk = mmioAscend(*(HMMIO*)a2, &v6, 0);
                        if (Chunk)
                            return 57604;
                    }
                    else
                    {
                        return 57604;
                    }
                }
            }
        }
    }
    return Chunk;
}
