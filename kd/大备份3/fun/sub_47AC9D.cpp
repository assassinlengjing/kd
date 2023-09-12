#include "sub.h" 
int sub_47AC9D()
{
    signed int n; // [esp+Ch] [ebp-344h]
    signed int v2; // [esp+10h] [ebp-340h]
    int v3; // [esp+14h] [ebp-33Ch]
    _BYTE* v4; // [esp+18h] [ebp-338h]
    signed int k; // [esp+1Ch] [ebp-334h]
    int j; // [esp+20h] [ebp-330h]
    HANDLE hObject; // [esp+24h] [ebp-32Ch]
    CHAR FileName[260]; // [esp+28h] [ebp-328h] BYREF
    int m; // [esp+12Ch] [ebp-224h]
    int v10; // [esp+130h] [ebp-220h]
    CHAR v11[260]; // [esp+134h] [ebp-21Ch] BYREF
    CHAR v12[260]; // [esp+238h] [ebp-118h] BYREF
    int* v13; // [esp+33Ch] [ebp-14h]
    int* v14; // [esp+340h] [ebp-10h]
    void* v15; // [esp+344h] [ebp-Ch]
    __int16* v16; // [esp+348h] [ebp-8h]
    int i; // [esp+34Ch] [ebp-4h]

    wsprintfA(FileName, "%s\\Data\\WeaponTP.dat", Buffer);
    hObject = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hObject == (HANDLE)-1)
        return 0;
    if (!sub_47A326(hObject, (int)&unk_4B92F0, &unk_4B92F4))
        goto LABEL_4;
    CloseHandle(hObject);
    wsprintfA(FileName, "%s\\Data\\WeaponCG.dat", Buffer);
    hObject = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
    if (hObject == (HANDLE)-1)
        return 0;
    if (!sub_47A8B4(hObject))
    {
    LABEL_4:
        CloseHandle(hObject);
        return 0;
    }
    CloseHandle(hObject);
    for (i = 0; i < 6; ++i)
    {
        wsprintfA(v11, "%s\\Data\\TilePat%02d.dat", Buffer, i);
        wsprintfA(v12, "%s\\Data\\CharGraphic%02d.dat", Buffer, i);
        v13 = (int*)(4 * i + 4952904);
        v15 = (void*)(2 * i + 4952892);
        v14 = (int*)(4 * i + 4952868);
        v16 = (__int16*)(2 * i + 4952856);
        if (!sub_47A55C(v11))
            return 0;
        if (!i)
        {
            for (j = 0; j < 2; ++j)
            {
                *(&unk_4B9310 + j)  = (_DWORD)operator new(2 * (unsigned __int16)unk_4B9318[0]);
                memset((void*) *(&unk_4B9310 + j), 0, 2 * (unsigned __int16)unk_4B9318[0]);
            }
        }
    }
    wsprintfA(v11, "%s\\Data\\misuzu_tp.dat", Buffer);
    v13 = unk_4B9308;
    v15 = &unk_4B9304;
    wsprintfA(v12, "%s\\Data\\misuzu_cg.dat", Buffer);
    v14 = unk_4B92FC;
    v16 = unk_4B92F8;
    if (!sub_47A55C(v11))
        return 0;
    wsprintfA(v11, "%s\\Data\\Double_Dragon_TP.dat", Buffer);
    v13 = (int*)&unk_4B930C;
    v15 = &unk_4B9306;
    wsprintfA(v12, "%s\\Data\\Double_Dragon_CG.dat", Buffer);
    v14 = (int*)&unk_4B9300;
    v16 = (__int16*)&unk_4B92FA;
    if (!sub_47A55C(v11))
        return 0;
    if (!sub_47AA55())
        return 0;
    if (!sub_4790CD())
        return 0;
    if (!sub_479E2A())
        return 0;
    v10 = 0;
    unk_4B9398 = 0;
    streambuf::unbuffered((streambuf *)unk_4B93A4, 1);
    for (i = 0; i < (int)unk_4B93A0; ++i)
    {
        if (unknown_libname_17((_DWORD*)unk_4B93A4 + 6 * i))
        {
            *((_WORD*)Src + i) = v10++;
            ++unk_4B9398;
        }
        else
        {
            *((_WORD*)Src + i) = -1;
        }
    }
    for (i = 0; i < 4; ++i)
    {
        *(&unk_4B9380 + i) = (_DWORD)operator new(2 * unk_4B93A0);
        if (!*(&unk_4B9380 + i))
            return 0;
        *(&unk_4B9370 + i) = (_DWORD)operator new(2 * unk_4B93A0);
        if (!*(&unk_4B9370 + i))
            return 0;
        for (k = 0; k < (int)unk_4B93A0; ++k)
        {
            *((_WORD*)*(&unk_4B9380 + i) + k) = -1;
            *((_WORD*)*(&unk_4B9370 + i) + k) = -1;
        }
    }
    for (m = 0; m < (int)Size; ++m)
    {
        v4 = (_BYTE*)(36 * m + unk_4B92E0);
        v2 = (unsigned __int8)sub_401710(v4);
        v3 = (unsigned __int8)MarkedForDetachment(v4);
        if (v2 < (int)unk_4B93A0 && v3 < 4)
            *((_WORD*)*(&unk_4B9380 + v3) + v2) = 1;
    }
    v10 = 0;
    for (i = 0; i < 4; ++i)
    {
        v10 = 0;
        for (n = 0; n < (int)unk_4B93A0; ++n)
        {
            if (*((_WORD*)*(&unk_4B9380 + i) + n) == 1)
                *((_WORD*)*(&unk_4B9380 + i) + n) = v10++;
        }
    }
    if (!sub_47818A())
        return 0;
    sub_4780C0();
    return 1;
}
