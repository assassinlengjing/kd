#include "sub.h" 
int sub_4404CB(_DWORD* thisx, LPSTR pszFileName, int a3)
{
    int i; // [esp+4h] [ebp-8h]

    sub_440B78((_DWORD)thisx);
    sub_4901B9((HMMIO*)thisx + 50, (HGLOBAL*)thisx + 51);
    if (thisx[52])
    {
        (*(void(__stdcall**)(_DWORD))(*(_DWORD*)thisx[52] + 8))(thisx[52]);
        thisx[52] = 0;
    }
    if (thisx[49])
    {
        (*(void(__stdcall**)(_DWORD))(*(_DWORD*)thisx[49] + 8))(thisx[49]);
        thisx[49] = 0;
    }
    for (i = 0; i < 2; ++i)
    {
        if (!thisx[i + 68])
            return 0;
    }
    if (sub_48FD80(pszFileName, (int)(thisx + 50), (int)(thisx + 51), (LPMMCKINFO)(thisx + 58)))
        return 0;
    if (sub_48FF86((int)(thisx + 50), (LPMMCKINFO)(thisx + 53), (MMCKINFO*)(thisx + 58)))
        return 0;
    thisx[46] = *(_DWORD*)(thisx[51] + 8) * thisx[46] / 0x3E8u;
    thisx[46] += thisx[46] % (unsigned int)*(unsigned __int16*)(thisx[51] + 12);
    memset(thisx + 63, 0, 0x14u);
    thisx[63] = 20;
    thisx[64] = 98688;
    thisx[65] = 2 * *(_DWORD*)(thisx[51] + 8);
    thisx[67] = thisx[51];
    if ((*(int(__stdcall**)(_DWORD, _DWORD*, _DWORD*, _DWORD))(*(_DWORD*)*thisx + 12))(
        *thisx,
        thisx + 63,
        thisx + 49,
        0) >= 0)
    {
        thisx[44] = -1;
        *((_BYTE*)thisx + 296) = 0;
        sub_44076B((int)thisx, 1);
        (*(void(**)(_DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD*)thisx[49] + 48))(
            thisx[49],
            thisx[49],
            0,
            0,
            1);
        thisx[41] = 1;
        thisx[42] = a3;
        return 1;
    }
    else
    {
        sub_4901B9((HMMIO*)thisx + 50, (HGLOBAL*)thisx + 51);
        return 0;
    }
}

