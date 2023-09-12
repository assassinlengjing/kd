#include "sub.h" 
void sub_4897EE(void* a1, double a2, char a3, char a4)
{
    int v4; // [esp+18h] [ebp-Ch]
    int v5; // [esp+1Ch] [ebp-8h]
    char v6; // [esp+20h] [ebp-4h]

    v6 = sub_4868C1(a1, a3, a4);
    v4 = 0;
    switch (v6)
    {
    case 0:
        v5 = 1;
        v4 = 0;
        break;
    case 1:
    case 2:
        v5 = 2;
        v4 = 1;
        break;
    case 3:
    case 4:
        v5 = 1;
        v4 = 1;
        break;
    case 5:
        v5 = 1;
        v4 = 2;
        break;
    default:
        break;
    }
    if (v6 && (v6 & 1) == 0)
        v5 = -v5;
    sub_4A3090((double)v4, (double)v4, (double)v5);
}