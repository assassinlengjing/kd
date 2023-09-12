#include "sub.h" 
void sub_446744(_DWORD* thisx, __int16 a2, int a3)
{
    int i; // [esp+4h] [ebp-4h]

    if (unk_4B99F0)
    {
        for (i = thisx[2273]; i < 32; ++i)
        {
            if (!sub_475130(&thisx[4 * i + 2274]))
            {
            LABEL_5:
                sub_43F178((int)&thisx[4 * i + 2274], a2, a3);
                return;
            }
        }
        for (i = 0; i < thisx[2273]; ++i)
        {
            if (!sub_475130(&thisx[4 * i + 2274]))
                goto LABEL_5;
        }
    }
}

