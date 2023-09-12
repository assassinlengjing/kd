#include "sub.h" 
int sub_41CE99(int thisx)
{
    int v1; // eax
    int v4; // [esp+4h] [ebp-8h] BYREF

    sub_41F6DE((_DWORD*)thisx);
    if (*(_DWORD*)(thisx + 304))
    {
        if (*(_DWORD*)(thisx + 288))
        {
            sub_417E42(*(_DWORD*)(thisx + 304));
            sub_41CE99(*(_DWORD*)(thisx + 304));
            sub_417E1D((_DWORD*)thisx);
        }
        else if (*(_DWORD*)(thisx + 428) == 52 || *(_DWORD*)(thisx + 428) == 53 || *(_DWORD*)(thisx + 428) == 56)
        {
            sub_417FC1((int)*(_DWORD*)(thisx + 304));
            sub_41CE99(*(_DWORD*)(thisx + 304));
            sub_417EE0((int)thisx);
        }
        else if (*(_DWORD*)(thisx + 428) == 54 || *(_DWORD*)(thisx + 428) == 55)
        {
            sub_417EE0((int)*(_DWORD*)(thisx + 304));
            sub_41CE99(*(_DWORD*)(thisx + 304));
            sub_417EE0((int)thisx);
        }
        else
        {
            sub_417DCC((int)*(_DWORD*)(thisx + 304));
            *(_DWORD*)(thisx + 304) = 0;
            sub_423CF2((_BYTE*)thisx, 0, 0, 0, 0, 0, 0);
        }
    }
    *(_DWORD*)(thisx + 432) = 17;
    sub_4097DF((void*)thisx, (int)&v4);
    *(_DWORD*)(thisx + 436) = v4 >= 160;
    v1 = rand() % 4;
    sub_41261C((_WORD*)thisx, v1 + 13, 0, 1);
    *(_DWORD*)(thisx + 444) = 0;
    *(_DWORD*)(thisx + 352) = 0;
    *(_DWORD*)(thisx + 364) = 0;
    *(_BYTE*)(thisx + 176) = 0;
    *(_BYTE*)(thisx + 177) = 0;
    *(_BYTE*)(thisx + 178) = 1;
    return sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A48, -1, 100, 100, 0);
}

