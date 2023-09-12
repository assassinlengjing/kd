#include "sub.h" 
BOOL __cdecl sub_4771C5(int a1, char a2)
{
    if (a1)
    {
        if (a1 == 1)
        {
            return !a2 || a2 == 6;
        }
        else if (a1 == 2)
        {
            return a2 == 1 || a2 == 2 || a2 == 7 || a2 == 11;
        }
        else
        {
            return a1 == 3 && a2 != 3 && a2 != 8 && a2 != 9 && a2 != 10 && a2 != 12 && a2 != 13;
        }
    }
    else
    {
        return a2 == 3 || a2 == 8 || a2 == 9 || a2 == 10 || a2 == 13;
    }
}
