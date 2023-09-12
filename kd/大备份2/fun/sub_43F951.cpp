#include "sub.h" 
_DWORD* sub_43F951(_DWORD* thisx)
{
    _DWORD* result; // eax
    int v3; // [esp+10h] [ebp-Ch]
    int i; // [esp+14h] [ebp-8h]
    int k; // [esp+14h] [ebp-8h]
    char* j; // [esp+18h] [ebp-4h]

    thisx[40] = 0;
    thisx[41] = 0;
    if (thisx[48])
    {
        WaitForSingleObject((HANDLE)thisx[48], 0xFFFFFFFF);
        CloseHandle((HANDLE)thisx[48]);
        thisx[48] = 0;
    }
    for (i = 0; i < 2; ++i)
    {
        if (thisx[i + 68])
        {
            CloseHandle((HANDLE)thisx[i + 68]);
            thisx[i + 68] = 0;
        }
    }
    sub_4901B9((HMMIO*)thisx + 50, (HGLOBAL*)thisx + 51);
    if (thisx[49])
    {
        (*(void(**)(_DWORD, _DWORD))(*(_DWORD*)thisx[49] + 72))(thisx[49], thisx[49]);
        (*(void(**)(_DWORD, _DWORD))(*(_DWORD*)thisx[49] + 8))(thisx[49], thisx[49]);
    }
    if (thisx[52])
        (*(void(__stdcall**)(_DWORD))(*(_DWORD*)thisx[52] + 8))(thisx[52]);
    thisx[52] = 0;
    thisx[49] = 0;
    for (j = (char*)thisx[1]; j; j = (char*)v3)
    {
        v3 = sub_441090((_DWORD*)j);
        sub_440DF5((_DWORD*)j);
        sub_4410B0(j, 1);
    }
    result = thisx;
    thisx[1] = 0;
    for (k = 0; k < 16; ++k)
    {
        result = thisx;
        if (thisx[k + 2])
        {
            (*(void(**)(_DWORD, _DWORD))(*(_DWORD*)thisx[k + 2] + 8))(thisx[k + 2], thisx[k + 2]);
            result = (_DWORD*)k;
            thisx[k + 2] = 0;
        }
    }
    if (*thisx)
    {
        (*(void(__stdcall**)(_DWORD))(*(_DWORD*)*thisx + 8))(*thisx);
        result = thisx;
        *thisx = 0;
    }
    thisx[34] = 0;
    thisx[35] = 0;
    return result;
}

