#include "sub.h" 
MMRESULT __cdecl sub_49039D(int a1, LPMMCKINFO pmmcki, LPMMIOINFO pmmioinfo)
{
    MMRESULT Chunk; // [esp+0h] [ebp-4h]

    pmmcki->ckid = 1635017060;
    pmmcki->cksize = 0;
    Chunk = mmioCreateChunk(*(HMMIO*)a1, pmmcki, 0);
    if (!Chunk)
        return mmioGetInfo(*(HMMIO*)a1, pmmioinfo, 0);
    return Chunk;
}
