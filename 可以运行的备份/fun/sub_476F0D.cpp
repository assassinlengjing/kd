#include "sub.h" 
void sub_476F0D()
{
    int v0; // [esp+0h] [ebp-130h]
    int v1; // [esp+4h] [ebp-12Ch]
    int v2; // [esp+8h] [ebp-128h]
    int v3[4]; // [esp+Ch] [ebp-124h] BYREF
    int i; // [esp+1Ch] [ebp-114h]
    CHAR String1[260]; // [esp+20h] [ebp-110h] BYREF
    int v6; // [esp+12Ch] [ebp-4h]

    sub_482BF0(v3);
    v6 = 0;
    for (i = 0; i < 2; ++i)
    {
        wsprintfA(String1, "Graphic\\SpCharGraphic%02d.txt", i + 1);
        if (sub_482C74((int)v3, String1) && sub_48328F(v3, ::String1))
        {
            sub_482FAA(v3);
            v1 = 0;
            v0 = 0;
            while (sub_482D44(v3, String1) && String1[0] != 110 && lstrcmpiA(String1, aGraphicend))
            {
                if (v1)
                {
                    v2 = atoi(String1);
                    if (v2 >= 0 && v2 < (unsigned __int16)word_4B92F8[i])
                    {
                        sub_482FAA(v3);
                        v1 = 0;
                        *((_WORD*)*(&dword_4B9310 + i) + v0) = v2;
                        continue;
                    }
                }
                else
                {
                    v0 = atoi(String1);
                    if (v0 >= 0 && v0 < (unsigned __int16)word_4B9318[0])
                    {
                        v1 = 1;
                        continue;
                    }
                }
                sub_482FAA(v3);
                v1 = 0;
            }
        }
    }
    v6 = -1;
    sub_482C2F(v3);
}
