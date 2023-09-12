#include "sub.h" 
char* sub_44106A(char* thisx, int a2)
{
    if (a2 >= 0 && a2 < 64)
        return &thisx[8 * a2];
    else
        return 0;
}

