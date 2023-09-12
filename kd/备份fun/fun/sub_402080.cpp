#include "sub.h" 
int __stdcall sub_402080(int a1, int a2, int a3, void(* a4)(int))
{
    int result; // eax

    while (1)
    {
        result = --a3;
        if (a3 < 0)
            break;
        a4(a1);
        a1 += a2;
    }
    return result;
}

