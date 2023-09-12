#include "sub.h" 
int sub_465E0A(char* thisx, int a2, char a3)
{
    int i; // [esp+8h] [ebp-4h]

    for (i = 0; i < 4 && sub_475C00((_DWORD*)&thisx[24 * i + 11080]); ++i)
        ;
    if (i == 4)
        return 0;
    sub_43EF5D((int)&thisx[24 * i + 11080], a2, a3);
    return (int)&thisx[24 * i + 11080];
}

