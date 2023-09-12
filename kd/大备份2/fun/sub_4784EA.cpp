#include "sub.h" 
int __cdecl sub_4784EA(int a1, int a2)
{
    CHAR FileName[260]; // [esp+0h] [ebp-104h] BYREF

    wsprintfA(FileName, "Graphic\\%02dpPalette.bin", a1);
    return sub_47846F(FileName, a2);
}

