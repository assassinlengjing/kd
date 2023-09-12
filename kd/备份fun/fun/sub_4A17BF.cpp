#include "sub.h" 
char* sub_4A17BF(_BYTE* thisx, int a2, int a3, char* a4, int a5, int a6)
{
    char* result; // eax
    int j; // [esp+8h] [ebp-10h]
    int v8; // [esp+Ch] [ebp-Ch]
    int i; // [esp+10h] [ebp-8h]
    char* v10; // [esp+14h] [ebp-4h]

    result = a4;
    v10 = a4;
    v8 = 0;
    if (a4 == (char*)-1)
        v10 = 0;
    for (i = 0; i < 256 && (int)&v10[i] <= 255; ++i)
    {
        result = &thisx[i];
        if (thisx[i + 1088])
        {
            if (a4 == (char*)-1)
            {
                for (j = v8; j < 256; ++j)
                {
                    result = (char*)(j + a3);
                    if (!*(_BYTE*)(j + a3))
                    {
                        *(_BYTE*)(j + a3) = 1;
                        *(_BYTE*)(a2 + 4 * j) = thisx[4 * i + 66];
                        *(_BYTE*)(a2 + 4 * j + 1) = thisx[4 * i + 65];
                        *(_BYTE*)(a2 + 4 * j + 2) = thisx[4 * i + 64];
                        result = (char*)(i + a5);
                        *(_BYTE*)(i + a5) = j;
                        break;
                    }
                }
                v8 = j;
            }
            else
            {
                *(_BYTE*)(a2 + 4 * (_DWORD)&a4[i]) = thisx[4 * i + 66];
                *(_BYTE*)(a2 + 4 * (_DWORD)&a4[i] + 1) = thisx[4 * i + 65];
                *(_BYTE*)(a2 + 4 * (_DWORD)&a4[i] + 2) = thisx[4 * i + 64];
                result = (char*)(i + a5);
                *(_BYTE*)(i + a5) = i + (_BYTE)a4;
            }
        }
    }
    return result;
}
