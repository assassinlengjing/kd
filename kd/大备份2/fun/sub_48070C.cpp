#include "sub.h" 
void sub_48070C(streambuf* thisx, int a2)
{
    sub_475670((_DWORD*)thisx, a2);
    streambuf::unbuffered(thisx, a2 == 0);
}
