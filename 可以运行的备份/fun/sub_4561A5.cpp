#include "sub.h" 
void sub_4561A5(char* thisx, int a2)
{
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 32; ++i)
    {
        if (!(unsigned __int8)MarkedForDetachment(&thisx[36 * i + 9608]))
        {
            sub_441980((int)&thisx[36 * i + 9608], a2);
            return;
        }
    }
}

