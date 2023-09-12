#include "sub.h" 
int __cdecl sub_485ED0(int a1, int a2, char* Source, int a4)
{
    CHAR Text[256]; // [esp+0h] [ebp-134h] BYREF
    int j; // [esp+100h] [ebp-34h]
    int v7; // [esp+104h] [ebp-30h]
    CHAR String1[32]; // [esp+108h] [ebp-2Ch] BYREF
    int i; // [esp+128h] [ebp-Ch]
    int v10; // [esp+12Ch] [ebp-8h]
    int v11; // [esp+130h] [ebp-4h]

    strcpy(String1, Source);
    v11 = strlen(Source);
    v10 = 0;
    v7 = 1;
    for (i = v11 - 2; i >= 0; --i)
    {
        if (Source[i] == 43 || Source[i] == 45)
        {
            for (j = i + 1; j < v11; ++j)
            {
                v10 += v7 * (Source[j] - 48);
                v7 /= 10;
            }
            if (Source[i] == 45)
                v10 = -v10;
            String1[i] = 0;
            break;
        }
        v7 *= 10;
    }
    if (a4 >= 0 && !lstrcmpiA(String1, athisx))
        return v10 + a4;
    for (i = 0; i < a2; ++i)
    {
        if (!lstrcmpiA((LPCSTR)(20 * i + a1), String1))
            return v10 + *(_DWORD*)(a1 + 20 * i + 16);
    }
    if (unk_4B91D9)
    {
        wsprintfA(Text, aS_11, String1);
        MessageBoxA(0, Text, &unk_4B6DD4, 0);
    }
    return -1;
}
