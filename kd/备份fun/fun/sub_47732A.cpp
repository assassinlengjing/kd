#include "sub.h" 
void sub_47732A()
{
    HANDLE hObject; // [esp+0h] [ebp-10Ch]
    int i; // [esp+4h] [ebp-108h]
    CHAR FileName[260]; // [esp+8h] [ebp-104h] BYREF

    for (i = 0; i < 256; ++i)
    {
        wsprintfA(FileName, "Graphic\\%02dpPalette.bin", i + 1);
        hObject = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
        if (hObject == (HANDLE)-1)
            break;
        CloseHandle(hObject);
    }
    word_4B99E4 = i;
}
