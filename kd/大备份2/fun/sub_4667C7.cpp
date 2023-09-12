#include "sub.h" 
int sub_4667C7(char* thisx, int a2, int a3, int a4)
{
    int v6; // [esp+4h] [ebp-1Ch]
    int v7; // [esp+8h] [ebp-18h]
    int j; // [esp+Ch] [ebp-14h]
    int k; // [esp+10h] [ebp-10h]
    int i; // [esp+14h] [ebp-Ch]
    int v11; // [esp+18h] [ebp-8h]
    int v12; // [esp+1Ch] [ebp-4h]

    if (a2 < 0)
        return 1;
    v12 = (unsigned __int16)sub_475850((short*)thisx + 11816) - 1;
    v11 = (unsigned __int16)sub_475850((short*)thisx + 11892) - 1;
    if (v12 >= 0 && v12 == a2 || v11 >= 0 && v11 == a2)
        return 1;
    for (i = 0; i < a3; ++i)
    {
        for (j = 0; j < 2; ++j)
        {
            v7 = *(unsigned __int16*)&thisx[4 * i + 11728 + 2 * j] - 2;
            if (v7 >= 0 && a2 == v7)
                return 1;
        }
    }
    if (a4 >= 3)
        a4 = 2;
    for (k = 0; k < a4; ++k)
    {
        v6 = *(unsigned __int16*)&thisx[4 * i + 11728 + 2 * k] - 2;
        if (v6 >= 0 && a2 == v6)
            return 1;
    }
    return 0;
}

