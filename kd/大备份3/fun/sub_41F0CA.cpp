#include "sub.h" 
void sub_41F0CA(_DWORD* thisx, int a2)
{
    int v2; // ebx

    if (a2)
    {
        v2 = (unsigned __int8)sub_426070((char*)a2);
        if (v2 != (unsigned __int8)sub_426070((char*)thisx[31]))
        {
            if (*thisx == 2)
            {
                thisx[32] = a2;
                *thisx = 0;
                thisx[33] = 600;
            }
            else if (!*thisx && rand() % 99 < 10)
            {
                thisx[32] = a2;
                thisx[33] = 600;
            }
        }
    }
}

