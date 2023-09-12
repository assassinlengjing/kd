#include "sub.h" 
UINT sub_479090()
{
    CHAR FileName[256]; // [esp+0h] [ebp-100h] BYREF

    wsprintfA(FileName, "%s\\%s", Buffer, aKdIni);
    return sub_450FF8((int)byte_4B9B10, FileName);
}
