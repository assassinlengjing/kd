#include "sub.h"
//int __stdcall sub_47DF27(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
int aWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    double v4; // st5
    double v5; // st6
    double v6; // st7
    int v8; // eax
    int v9; // eax
    unsigned int Id; // [esp-4h] [ebp-23Ch]
    int v11; // [esp+0h] [ebp-238h]
    struct tagMSG Msg; // [esp+4h] [ebp-234h] BYREF
    int v13; // [esp+20h] [ebp-218h]
    signed int i; // [esp+24h] [ebp-214h]
    DWORD v15; // [esp+28h] [ebp-210h]
    unsigned int v16; // [esp+2Ch] [ebp-20Ch]
    CHAR String[256]; // [esp+30h] [ebp-208h] BYREF
    int Time; // [esp+130h] [ebp-108h]
    CHAR FileName[260]; // [esp+134h] [ebp-104h] BYREF

    dword_4B93A4 = 0;
    Src = 0;
    dword_4B9394 = 0;
    for (i = 0; i < 4; ++i)
    {
        *(&dword_4B9380 + i) = 0;
        *(&dword_4B9370 + i) = 0;
    }
    dword_4B92E0 = 0;
    dword_4B92DC = 0;
    Size = 0;
    dword_4B92D4 = 0;
    dword_4B92D8 = 0;
    for (i = 0; i < 6; ++i)
    {
        dword_4B9348[i] = 0;
        dword_4B9324[i] = 0;
    }
    for (i = 0; i < 2; ++i)
    {
        dword_4B9308[i] = 0;
        dword_4B92FC[i] = 0;
        *(&dword_4B9310 + i) = 0;
    }
    for (i = 0; i < 14; ++i)
        word_4B99AC[i] = 10;
    dword_4B92F0 = 0;
    dword_4B92E8 = 0;
    dword_4B9368 = 0;
    dword_4B9364 = 0;
    dword_4B9360 = 0;
    dword_4B93B0 = 0;
    dword_4B93AC = 0;
    Time = timeGetTime();
    v11 = Time;
    v16 = 0;
    v13 = 0;
    sub_4A2B56(Time);
    GetCurrentDirectoryA(0x104u, (LPSTR)Buffer);
    if (!hPrevInstance && !sub_47E539(hInstance))
        return 0;
    for (i = 0; i < 8; ++i)
        sub_47652C((int*)&byte_4B9410[108 * i], i);
    dword_4B99F8 = 1;
    dword_4B99F4 = 0;
    dword_4B99F0 = 1;
    byte_4B99C9 = 0;
    byte_4B99CA = 1;
    byte_4B99E9 = 1;
    byte_4B99E8 = 0;
    byte_4B99E6 = 0;
    byte_4B99E7 = 1;
    dword_4B9978 = 0;
    dword_4B9974 = 0;
    sub_479090();
    if (!sub_47E5AC(hInstance, nShowCmd))
        return 0;
    sub_47C5F0();
    if (!v8)
        return 0;
    ho = (int)CreateFontA(14, 0, 0, 0, 100, 0, 0, 0, 0x80u, 0, 0, 0, 1u, &pszFaceName);
    sub_456F35(byte_4B9B10);
    dword_4B99EC = 1;
    timeBeginPeriod(1u);
    while (1)
    {
        while (1)
        {
            v15 = timeGetTime();
            if (PeekMessageA(&Msg, 0, 0, 0, 0))
                break;
            if (dword_4B99F8 || byte_4B99E6)
            {
                if (byte_4B91D0 || v15 - Time >= 0x11)
                {
                    if (!byte_4B91D0)
                    {
                        if (dword_4B99EC)
                        {
                            v16 = 0;
                            dword_4B99EC = 0;
                        }
                        else
                        {
                            v16 = v16 + v15 - Time - 17;
                        }
                        while (v16 >= 0x11)
                        {
                            sub_443059(byte_4B9B10, v4, v5, v6, 0);
                            v16 -= 17;
                        }
                    }
                    Time = v15;
                    ++v13;
                    ++dword_4B93B0;
                    if (v15 - v11 > 0x3E8)
                    {
                        v11 = Time;
                        dword_4CA1CC = v13;
                        v13 = 0;
                    }
                    sub_440B04((int*)dword_4BDB28);
                    sub_443059(byte_4B9B10, v4, v5, v6, 1);
                    if (dword_4B99F4)
                    {
                        wsprintfA(String, "%d", dword_4CA1CC);
                        sub_47BC5A(0, 0, String, 0, -1);
                    }
                    if (byte_4B91D9)
                    {
                        Id = Concurrency::details::VirtualProcessor::GetId((Concurrency::details::VirtualProcessor*)dword_4BDB28);
                        v9 = sub_47EF40((int*)byte_4BDC60);
                        wsprintfA(String, "%d,%d", v9, Id);
                        sub_47B7ED(0, 232, String, 0, -1);
                    }
                    sub_49A518((int)byte_4BDC60);
                }
                else if (v15 - Time < 0x10)
                {
                    Sleep(16 - (v15 - Time));
                }
            }
            else
            {
                sub_49A518((int)byte_4BDC60);
                Sleep(0x10u);
            }
        }
        if (!GetMessageA(&Msg, 0, 0, 0))
            break;
        TranslateMessage(&Msg);
        DispatchMessageA(&Msg);
    }
    sub_43F951((int*)dword_4BDB28);
    timeEndPeriod(1u);
    wsprintfA(FileName, "%s\\%s", Buffer, aKdIni_0);
    sub_47907D(FileName);
    sub_47B2C4();
    if (ho)
        DeleteObject((HGDIOBJ)ho);
    return Msg.wParam;
}