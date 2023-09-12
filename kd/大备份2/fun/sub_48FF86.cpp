#include "sub.h" 
MMRESULT __cdecl sub_48FF86(int a1, LPMMCKINFO pmmcki, MMCKINFO* pmmckiParent)
{
    mmioSeek(*(HMMIO*)a1, pmmckiParent->dwDataOffset + 4, 0);
    pmmcki->ckid = 1635017060;
    return mmioDescend(*(HMMIO*)a1, pmmcki, pmmckiParent, 0x10u);
}
