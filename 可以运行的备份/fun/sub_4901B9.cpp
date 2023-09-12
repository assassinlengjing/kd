#include "sub.h" 
int __cdecl sub_4901B9(HMMIO* a1, HGLOBAL* a2)
{
    if (*a2)
    {
        GlobalFree(*a2);
        *a2 = 0;
    }
    if (*a1)
    {
        mmioClose(*a1, 0);
        *a1 = 0;
    }
    return 0;
}
