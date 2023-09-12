#include "sub.h" 
int sub_45C064(int thisx)
{
    char v1; // dl
    int result; // eax
    int ii; // [esp+4h] [ebp-1Ch]
    unsigned __int8 v5; // [esp+8h] [ebp-18h]
    int j; // [esp+Ch] [ebp-14h]
    unsigned __int8 v7; // [esp+10h] [ebp-10h]
    int i; // [esp+14h] [ebp-Ch]
    int k; // [esp+14h] [ebp-Ch]
    int m; // [esp+14h] [ebp-Ch]
    int n; // [esp+14h] [ebp-Ch]
    int v12; // [esp+1Ch] [ebp-4h]

    memset((void*)(thisx + 2620), 0, 8u);
    for (i = 0; i < *(unsigned __int8*)(thisx + 12969); ++i)
    {
        for (j = 0; j < *(unsigned __int8*)(i + thisx + 13002) && *(_BYTE*)(thisx + j + 4 * i + 12970); ++j)
            ;
        if (j < *(unsigned __int8*)(i + thisx + 13002))
            break;
    }
    v7 = i;
    unk_4B9985 = 2 * *(_BYTE*)(thisx + (unsigned __int8)i + 13002);
    unk_4B9986 = *(_BYTE*)(thisx + 11968);
    unk_4B9987 = unk_4B9985 - *(_BYTE*)(thisx + 11968);
    unk_4B9990 = *(_BYTE*)(thisx + (unsigned __int8)i + 13002);
    for (k = 0; k < (unsigned __int8)unk_4B9990; ++k)
        *(_BYTE*)(k + thisx + 2546) = 2;
    for (m = 0; m < (unsigned __int8)unk_4B9985; ++m)
        unk_4B9988[m] = m;
    *(_WORD*)(thisx + 2564) = 0;
    *(_BYTE*)(thisx + 2580) = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((_UnrealizedChore*)(thisx + 11816));
    *(_WORD*)(thisx + 2566) = 1;
    *(_BYTE*)(thisx + 2581) = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((_UnrealizedChore*)(thisx + 11892));
    *(_BYTE*)(thisx + 2612) = *(_BYTE*)(thisx + 11788);
    *(_BYTE*)(thisx + 2613) = *(_BYTE*)(thisx + 2612);
    v12 = 2;
    for (n = 1; n < (unsigned __int8)unk_4B9990; ++n)
    {
        v5 = *(_BYTE*)(thisx + n + 4 * v7 + 12970);
        for (ii = 0; ii < 2; ++ii)
        {
            *(_WORD*)(thisx + 2 * v12 + 2564) = *(_WORD*)(thisx + 4 * v5 + 11724 + 2 * ii) - 2;
            *(_BYTE*)(v12 + thisx + 2612) = *(_BYTE*)(thisx + v5 + 11788);
            *(_BYTE*)(v12 + thisx + 2580) = MarkedForDetachment(36 * *(unsigned __int16*)(thisx + 2 * v12 + 2564) + (char*)unk_4B92E0);
            ++v12;
        }
    }
    if (*(int*)(thisx + 13388) <= 8)
    {
        result = thisx;
        if (*(_BYTE*)(thisx + 11690) == 17)
        {
            *(_BYTE*)(thisx + 29) = 7;
        }
        else
        {
            result = thisx;
            *(_BYTE*)(thisx + 29) = (*(unsigned __int8*)(thisx + 11690) - 1) % 6 + 1;
        }
    }
    else
    {
        v1 = rand() % (*(_DWORD*)(thisx + 13388) - 1) + 1;
        result = thisx;
        *(_BYTE*)(thisx + 29) = v1;
        if (*(unsigned __int8*)(thisx + 29) > 7u)
        {
            result = thisx;
            ++* (_BYTE*)(thisx + 29);
        }
    }
    *(_DWORD*)(thisx + 108) = 11;
    *(_BYTE*)(thisx + 2516) = 2;
    return result;
}

