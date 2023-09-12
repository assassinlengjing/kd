#include "sub.h" 
void sub_456A74(char* thisx, int a2)
{
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 8; ++i)
    {
        if (!sub_426290((unsigned char*)&thisx[40 * i + 10760]))
        {
            sub_47EFF2((int)&thisx[40 * i + 10760], a2);
            return;
        }
    }
}

