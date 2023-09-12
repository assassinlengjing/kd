#include "sub.h" 
BOOL sub_4211AC(_BYTE* thisx)
{
    return (thisx[188] != 1 || rand() % 3 >= 2) && thisx[469] != 0;
}

