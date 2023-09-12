#include "sub.h" 
void sub_489530(_DWORD* thisx, int a2, int a3, int a4, int a5)
{
    int j; // [esp+4h] [ebp-8h]
    int i; // [esp+8h] [ebp-4h]

    if (a4 == -1)
    {
        for (i = 0; i < thisx[77]; ++i)
        {
            if (unknown_libname_22((_DWORD*)(432 * i + thisx[82])) == a5)
            {
                sub_48A0A0((_DWORD*)(432 * i + thisx[82]), a2);
                sub_48A0C0((_DWORD*)(432 * i + thisx[82]), a3);
            }
        }
    }
    else
    {
        for (j = a4; j < a5 + 1 && j < thisx[77]; ++j)
        {
            sub_48A0A0((_DWORD*)(432 * j + thisx[82]), a2);
            sub_48A0C0((_DWORD*)(432 * j + thisx[82]), a3);
        }
    }
}

