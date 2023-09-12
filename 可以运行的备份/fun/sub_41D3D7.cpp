#include "sub.h" 
unsigned __int8* sub_41D3D7(int thisx)
{
    unsigned __int8* result; // eax
    unsigned __int8* v3; // [esp+4h] [ebp-8h]
    unsigned __int8 v4; // [esp+8h] [ebp-4h]

    if (*(_DWORD*)(thisx + 304))
    {
        if (*(_DWORD*)(thisx + 288))
        {
            sub_417E42(*(_DWORD*)(thisx + 304));
            sub_417E1D((_DWORD*)thisx);
        }
        else if (*(_DWORD*)(thisx + 428) == 52 || *(_DWORD*)(thisx + 428) == 53 || *(_DWORD*)(thisx + 428) == 56)
        {
            sub_417FC1(*(_DWORD*)(thisx + 304));
            sub_417EE0(thisx);
        }
        else if (*(_DWORD*)(thisx + 428) == 54 || *(_DWORD*)(thisx + 428) == 55)
        {
            sub_417EE0(*(_DWORD*)(thisx + 304));
            sub_417EE0(thisx);
        }
        else
        {
            *(_DWORD*)(thisx + 304) = 0;
        }
    }
    result = sub_45575F((unsigned __int8*)byte_4B9B10, *(_DWORD*)(thisx + 328) / 800, *(_DWORD*)(thisx + 332) / 800);
    v3 = result;
    if (result)
    {
        v4 = result[13];
        if (!v4)
            v4 = rand() % 2 + 1;
        if (v4 == 1)
        {
            *(_DWORD*)(thisx + 432) = 140;
        }
        else if (v4 == 2)
        {
            *(_DWORD*)(thisx + 432) = 141;
        }
        *(_DWORD*)(thisx + 328) = 100 * *(_DWORD*)v3;
        *(_DWORD*)(thisx + 332) = 100 * *((_DWORD*)v3 + 1);
        *(_DWORD*)(thisx + 336) = 100 * *((_DWORD*)v3 + 2);
        *(_DWORD*)(thisx + 424) = v3[12] == 1;
        *(_BYTE*)(thisx + 176) = 0;
        *(_BYTE*)(thisx + 177) = 0;
        *(_BYTE*)(thisx + 178) = 1;
        *(_DWORD*)(thisx + 372) = 0;
        *(_DWORD*)(thisx + 376) = 0;
        *(_DWORD*)(thisx + 364) = 0;
        *(_DWORD*)(thisx + 368) = 0;
        *(_DWORD*)(thisx + 340) = 0;
        *(_DWORD*)(thisx + 344) = 0;
        *(_DWORD*)(thisx + 348) = 0;
        *(_DWORD*)(thisx + 352) = 0;
        *(_DWORD*)(thisx + 356) = 0;
        result = (unsigned __int8*)thisx;
        *(_DWORD*)(thisx + 360) = 0;
    }
    return result;
}