#include "sub.h" 
int sub_44C3D6(int thisx)
{
    int i; // [esp+4h] [ebp-4h]
    int j; // [esp+4h] [ebp-4h]

    *(_DWORD*)(thisx + 104) = 3;
    *(_BYTE*)(thisx + 2516) = 1;
    *(_DWORD*)(thisx + 2512) = 0;
    *(_DWORD*)(thisx + 2528) = 0;
    *(_DWORD*)(thisx + 2532) = 0;
    *(_BYTE*)(thisx + 2562) = 0;
    *(_BYTE*)(thisx + 11372) = 2;
    byte_4B999A = *(_BYTE*)(thisx + 30);
    for (i = 0; i < 14; ++i)
        word_4B99AC[i] = *(_WORD*)(thisx + 2 * i + 48);
    byte_4B99C8 = *(_BYTE*)(thisx + 76);
    byte_4B99C9 = *(_BYTE*)(thisx + 77);
    byte_4B99CA = *(_BYTE*)(thisx + 78);
    byte_4B99CB = *(_BYTE*)(thisx + 79);
    byte_4B99CC = *(_BYTE*)(thisx + 80);
    byte_4B99CD = *(_BYTE*)(thisx + 81);
    sub_480054(thisx + 15644, (int)&unk_4B0BA4);
    sub_475630((_BYTE*)(thisx + 15644), 14, 2, 11, 4);
    sub_475690((_BYTE*)(thisx + 15644), 2);
    streambuf::unbuffered((streambuf*)(thisx + 15644), 0);
    sub_475670((_DWORD*)(thisx + 15644), 0);
    sub_480054(thisx + 15680, (int)&unk_4B0BB4);
    sub_475630((_BYTE*)(thisx + 15680), 13, 8, 13, 12);
    streambuf::unbuffered((streambuf*)(thisx + 15680), 0);
    sub_475670((_DWORD*)(thisx + 15680), 1);
    sub_48089C(thisx + 15896, 0);
    sub_48089C(thisx + 15956, 0);
    sub_48089C(thisx + 16048, 0);
    sub_48089C(thisx + 16084, 0);
    *(_DWORD*)(thisx + 15640) = thisx + 15680;
    for (j = 2; j < 4; ++j)
    {
        streambuf::unbuffered((streambuf*)(thisx + 36 * j + 15644), 1);
        sub_475670((_DWORD*)(thisx + 36 * j + 15644), 0);
    }
    sub_453B85(thisx, 1, 1);
    return sub_456D33((const CHAR*)thisx, aMenuWav, 1, 0);
}

