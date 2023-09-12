#include "sub.h" 
int sub_42371C(int thisx)
{
    int v1; // eax
    int v2; // eax
    int v3; // et2
    int v4; // edx
    int result; // eax
    int k; // [esp+4h] [ebp-Ch]
    unsigned __int8 j; // [esp+8h] [ebp-8h]
    int i; // [esp+Ch] [ebp-4h]

    for (i = 0; i < 3; ++i)
    {
        if (*(unsigned __int8*)(i + thisx + 520) == 255)
        {
            v1 = rand();
            v3 = v1 % 73;
            v2 = v1 / 73;
            for (j = v3; ; j = (j + 74) % 73)
            {
                v4 = 1;
                for (k = 0; k < 3; ++k)
                {
                    LOBYTE(v4) = *(_BYTE*)(k + thisx + 520);
                    LOBYTE(v2) = j;
                    if (sub_47744C(v2, v4))
                        break;
                    v2 = k + 1;
                }
                if (k == 3)
                    break;
                v2 = (j + 74) / 73;
            }
            *(_BYTE*)(i + thisx + 520) = j;
        }
    }
    *(_DWORD*)(thisx + 524) = 0;
    *(_WORD*)(thisx + 528) = *(_WORD*)(thisx + 190);
    *(_BYTE*)(thisx + 536) = *(_BYTE*)(thisx + 192);
    *(_WORD*)(thisx + 530) = *(_WORD*)(thisx + 498);
    *(_WORD*)(thisx + 538) = *(_WORD*)(thisx + 502);
    *(_WORD*)(thisx + 540) = *(_WORD*)(thisx + 504);
    *(_WORD*)(thisx + 542) = *(_WORD*)(thisx + 506);
    *(_WORD*)(thisx + 544) = *(_WORD*)(thisx + 508);
    *(_WORD*)(thisx + 546) = *(_WORD*)(thisx + 510);
    *(_WORD*)(thisx + 548) = *(_WORD*)(thisx + 512);
    *(_WORD*)(thisx + 550) = *(_WORD*)(thisx + 514);
    *(_WORD*)(thisx + 552) = *(_WORD*)(thisx + 516);
    result = thisx;
    *(_WORD*)(thisx + 554) = *(_WORD*)(thisx + 518);
    return result;
}

