#include "sub.h" 
void sub_462BA9(int thisx, int a2)
{
    int n; // [esp+4h] [ebp-10h]
    int m; // [esp+8h] [ebp-Ch]
    int k; // [esp+Ch] [ebp-8h]
    int i; // [esp+10h] [ebp-4h]
    int j; // [esp+10h] [ebp-4h]

    for (i = 0; i < 8; ++i)
    {
        *(_BYTE*)(i + thisx + 2620) = 0;
        unk_4B9988[i] = i;
    }
    unk_4B9984 = a2;
    switch (a2)
    {
    case 1:
        unk_4B9985 = 4;
        unk_4B9986 = *(_BYTE*)(thisx + 11968);
        unk_4B9987 = 4 - *(_BYTE*)(thisx + 11968);
        unk_4B9990 = 2;
        for (j = 0; j < 2; ++j)
            *(_BYTE*)(j + thisx + 2546) = 2;
        *(_WORD*)(thisx + 2564) = 0;
        *(_BYTE*)(thisx + 2580) = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((_UnrealizedChore*)(thisx + 11816));
        *(_WORD*)(thisx + 2566) = 1;
        *(_BYTE*)(thisx + 2581) = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((_UnrealizedChore*)(thisx + 11892));
        *(_WORD*)(thisx + 2568) = 16;
        *(_BYTE*)(thisx + 2582) = 4;
        *(_WORD*)(thisx + 2570) = 17;
        *(_BYTE*)(thisx + 2583) = 4;
        *(_BYTE*)(thisx + 29) = 8;
        break;
    case 2:
        unk_4B9985 = 6;
        unk_4B9986 = *(_BYTE*)(thisx + 11968);
        unk_4B9987 = 6 - *(_BYTE*)(thisx + 11968);
        unk_4B9990 = 2;
        *(_BYTE*)(thisx + 2546) = 2;
        *(_BYTE*)(thisx + 2547) = 4;
        *(_WORD*)(thisx + 2564) = 0;
        *(_BYTE*)(thisx + 2580) = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((_UnrealizedChore*)(thisx + 11816));
        *(_WORD*)(thisx + 2566) = 1;
        *(_BYTE*)(thisx + 2581) = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((_UnrealizedChore*)(thisx + 11892));
        *(_WORD*)(thisx + 2568) = 18;
        *(_BYTE*)(thisx + 2582) = 2;
        *(_WORD*)(thisx + 2570) = 19;
        *(_BYTE*)(thisx + 2583) = 1;
        *(_WORD*)(thisx + 2572) = 20;
        *(_BYTE*)(thisx + 2584) = 0;
        *(_WORD*)(thisx + 2574) = 21;
        *(_BYTE*)(thisx + 2585) = 3;
        for (k = 2; k < 6; ++k)
            *(_BYTE*)(k + thisx + 2612) = 2;
        *(_BYTE*)(thisx + 29) = 8;
        break;
    case 3:
        unk_4B9985 = 3;
        unk_4B9986 = *(_BYTE*)(thisx + 11968);
        unk_4B9987 = 3 - *(_BYTE*)(thisx + 11968);
        unk_4B9990 = 2;
        *(_BYTE*)(thisx + 2546) = 2;
        *(_BYTE*)(thisx + 2547) = 1;
        for (m = 0; m < 8; ++m)
            unk_4B9988[m] = m;
        *(_WORD*)(thisx + 2564) = 0;
        *(_BYTE*)(thisx + 2580) = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((_UnrealizedChore*)(thisx + 11816));
        *(_WORD*)(thisx + 2566) = 1;
        *(_BYTE*)(thisx + 2581) = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((_UnrealizedChore*)(thisx + 11892));
        if (*(unsigned __int8*)(thisx + 11691) > 3u)
            *(_BYTE*)(thisx + 2622) = 1;
        else
            *(_BYTE*)(thisx + 2622) = 2;
        *(_WORD*)(thisx + 2568) = 0;
        *(_BYTE*)(thisx + 2582) = 0;
        *(_BYTE*)(thisx + 29) = 8;
        break;
    case 4:
        unk_4B9985 = 4;
        unk_4B9986 = *(_BYTE*)(thisx + 11968);
        unk_4B9987 = 4 - *(_BYTE*)(thisx + 11968);
        unk_4B9990 = 2;
        *(_BYTE*)(thisx + 2546) = 2;
        *(_BYTE*)(thisx + 2547) = 2;
        for (n = 0; n < 8; ++n)
            unk_4B9988[n] = n;
        *(_WORD*)(thisx + 2564) = 0;
        *(_BYTE*)(thisx + 2580) = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((_UnrealizedChore*)(thisx + 11816));
        *(_WORD*)(thisx + 2566) = 1;
        *(_BYTE*)(thisx + 2581) = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((_UnrealizedChore*)(thisx + 11892));
        *(_BYTE*)(thisx + 2622) = 3;
        *(_WORD*)(thisx + 2568) = 0;
        *(_BYTE*)(thisx + 2582) = 0;
        *(_BYTE*)(thisx + 2623) = 4;
        *(_WORD*)(thisx + 2570) = 0;
        *(_BYTE*)(thisx + 2583) = 0;
        *(_BYTE*)(thisx + 29) = 8;
        break;
    }
}

