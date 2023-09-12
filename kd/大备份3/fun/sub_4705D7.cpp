#include "sub.h" 
__int16 sub_4705D7(int thisx, int a2, int a3)
{
    __int16 result; // ax
    char v4; // [esp+0h] [ebp-20h]
    int v5; // [esp+4h] [ebp-1Ch]
    int v7; // [esp+Ch] [ebp-14h]
    unsigned __int8* v8; // [esp+10h] [ebp-10h]
    int v9; // [esp+14h] [ebp-Ch]

    result = sub_47075A((_DWORD*)thisx);
    if (*(__int16*)(thisx + 8) <= result)
    {
        if (a2)
        {
            result = sub_47075A((_DWORD*)thisx);
            *(_WORD*)(thisx + 8) = result;
        }
        else if (!*(_DWORD*)(thisx + 16))
        {
            v7 = 32;
            if (a3)
                v7 = 64;
            v9 = sub_472F91((_DWORD*)thisx);
            v5 = sub_40181C((unsigned char*)v9);
            if (v5)
            {
                if (v5 == 1)
                {
                    v7 += 48;
                }
                else if (v5 == 2)
                {
                    v7 += 24;
                }
            }
            else
            {
                v7 += 96;
            }
            v4 = *(_BYTE*)(*(_DWORD*)(thisx + 12) + 242);
            switch (v4)
            {
            case 2:
                v7 += 16;
                break;
            case 3:
                v7 += 32;
                break;
            case 4:
                v7 += 64;
                break;
            }
            v8 = (unsigned __int8*)(84 * *(__int16*)(*(_DWORD*)(thisx + 12) + 236) + unk_4B92D4);
            if (sub_43ED9E(v8, 3u, 0))
                v7 += 32;
            if (sub_43ED9E(v8, 3u, 1u))
                v7 -= 32;
            if (!a3 && v7 < 32 || a3 && v7 < 64)
                v7 = 32 * a3 + 32;
            result = sub_4707C7((int)thisx, v7);
        }
        *(_DWORD*)(thisx + 16) = 0;
    }
    return result;
}

