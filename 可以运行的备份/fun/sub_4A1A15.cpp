#include "sub.h" 
void* sub_4A1A15(int thisx)
{
    if (*(_DWORD*)(thisx + 60))
    {
        operator delete(*(void**)(thisx + 60));
        *(_DWORD*)(thisx + 60) = 0;
    }
    memset((void*)thisx, 0, 0xEu);
    memset((void*)(thisx + 16), 0, 0x28u);
    *(_DWORD*)(thisx + 56) = 0;
    memset((void*)(thisx + 64), 0, 0x400u);
    return memset((void*)(thisx + 1088), 0, 0x100u);
}
