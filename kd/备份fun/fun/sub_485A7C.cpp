#include "sub.h" 
int sub_485A7C(streambuf* thisx, int a2)
{
    int result; // eax
    int v4; // [esp+8h] [ebp-8h]
    int i; // [esp+Ch] [ebp-4h]

    sub_48070C(thisx, a2);
    result = (_DWORD)sub_485B10((char*)byte_4B9B10);
    v4 = result;
    for (i = 0; i < 5; ++i)
    {
        result = (int)thisx;
        *((_DWORD*)thisx + i + 9) = *(_DWORD*)(v4 + 4 * i);
    }
    return result;
}
