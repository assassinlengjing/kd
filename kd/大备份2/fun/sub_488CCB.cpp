#include "sub.h" 
HANDLE sub_488CCB(int thisx)
{
    HANDLE result; // eax
    HANDLE hObject; // [esp+4h] [ebp-114h]
    int i; // [esp+8h] [ebp-110h]
    CHAR FileName[260]; // [esp+Ch] [ebp-10Ch] BYREF
    int v6; // [esp+110h] [ebp-8h]
    int v7; // [esp+114h] [ebp-4h]

    v7 = (unsigned __int8)unknown_libname_25((char*)thisx + 4);
    v6 = (unsigned __int8)sub_4261F0((_BYTE*)(thisx + 4));
    for (i = 0; i < *(_DWORD*)(thisx + 308); ++i)
    {
        sub_489F60((_BYTE*)(432 * i + *(_DWORD*)(thisx + 328)), 1);
        sub_48A700(432 * i + *(_DWORD*)(thisx + 328));
    }
    *(_DWORD*)(thisx + 28) = *(_DWORD*)(thisx + 312) - 160;
    wsprintfA(FileName, "Stage\\Stage%02d.dat", *(__int16*)(thisx + 300));
    result = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    hObject = result;
    if (result != (HANDLE)-1)
    {
        sub_481B9F(thisx + 4, result);
        return (HANDLE)CloseHandle(hObject);
    }
    return result;
}
