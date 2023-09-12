#include "sub.h" 
int sub_409273(int thisx, int a2)
{
    int result; // eax
    int v4; // [esp+8h] [ebp-4h]

    *(_DWORD*)(thisx + 428) = a2;
    if (!*(_BYTE*)(thisx + 470) && *(_BYTE*)(thisx + 471) == 1 && (a2 == 44 || a2 == 45 || a2 == 46 || a2 == 47))
    {
        v4 = *(__int16*)(thisx + 246) + 150 - sub_423AC3(thisx, 1);
        if (v4 >= 30)
        {
            if (v4 <= 255)
                *(_BYTE*)(thisx + 470) = v4;
            else
                *(_BYTE*)(thisx + 470) = -1;
        }
        else
        {
            *(_BYTE*)(thisx + 470) = 30;
        }
        *(_BYTE*)(thisx + 471) = 0;
        *(_BYTE*)(thisx + 472) = 0;
        *(_WORD*)(thisx + 246) = 0;
    }
    switch (a2)
    {
    case 3:
    case 4:
    case 5:
    case 6:
        *(_DWORD*)(thisx + 396) = 1;
        *(_DWORD*)(thisx + 400) = 1;
        *(_DWORD*)(thisx + 404) = 1;
        result = thisx;
        *(_DWORD*)(thisx + 408) = 1;
        *(_DWORD*)(thisx + 412) = 1;
        *(_DWORD*)(thisx + 392) = 0;
        break;
    case 7:
    case 8:
    case 51:
        *(_DWORD*)(thisx + 396) = 0;
        *(_DWORD*)(thisx + 412) = 1;
        *(_DWORD*)(thisx + 400) = 0;
        result = thisx;
        *(_DWORD*)(thisx + 404) = 0;
        *(_DWORD*)(thisx + 408) = 0;
        *(_DWORD*)(thisx + 392) = 1;
        break;
    case 10:
    case 11:
    case 188:
        *(_DWORD*)(thisx + 396) = 0;
        *(_DWORD*)(thisx + 412) = 0;
        *(_DWORD*)(thisx + 400) = 1;
        result = thisx;
        *(_DWORD*)(thisx + 404) = 1;
        *(_DWORD*)(thisx + 408) = 0;
        *(_DWORD*)(thisx + 392) = 0;
        break;
    case 12:
    case 13:
        *(_DWORD*)(thisx + 396) = 0;
        *(_DWORD*)(thisx + 412) = 1;
        *(_DWORD*)(thisx + 400) = 0;
        result = thisx;
        *(_DWORD*)(thisx + 404) = 0;
        *(_DWORD*)(thisx + 408) = 0;
        *(_DWORD*)(thisx + 392) = 0;
        break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 30:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 50:
    case 61:
    case 66:
    case 68:
    case 73:
    case 76:
    case 90:
    case 110:
    case 117:
    case 118:
    case 127:
    case 128:
    case 129:
    case 130:
    case 132:
    case 133:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 146:
    case 147:
    case 149:
    case 150:
    case 151:
    case 152:
    case 154:
    case 155:
    case 156:
    case 157:
    case 158:
    case 159:
    case 161:
    case 178:
    case 179:
    case 187:
        *(_DWORD*)(thisx + 396) = 0;
        *(_DWORD*)(thisx + 412) = 0;
        *(_DWORD*)(thisx + 400) = 0;
        result = thisx;
        *(_DWORD*)(thisx + 404) = 0;
        *(_DWORD*)(thisx + 408) = 0;
        *(_DWORD*)(thisx + 392) = 1;
        break;
    case 52:
    case 53:
    case 69:
    case 82:
        *(_DWORD*)(thisx + 396) = 0;
        *(_DWORD*)(thisx + 412) = 0;
        *(_DWORD*)(thisx + 400) = 0;
        result = thisx;
        *(_DWORD*)(thisx + 404) = 1;
        *(_DWORD*)(thisx + 408) = 0;
        *(_DWORD*)(thisx + 392) = 0;
        break;
    case 56:
        *(_DWORD*)(thisx + 396) = 0;
        *(_DWORD*)(thisx + 412) = 1;
        *(_DWORD*)(thisx + 400) = 0;
        result = thisx;
        *(_DWORD*)(thisx + 404) = 1;
        *(_DWORD*)(thisx + 408) = 0;
        *(_DWORD*)(thisx + 392) = 0;
        break;
    case 74:
    case 77:
    case 80:
    case 91:
    case 92:
    case 94:
    case 95:
    case 97:
    case 98:
    case 142:
    case 143:
    case 144:
    case 145:
    case 160:
    case 162:
    case 163:
    case 164:
    case 165:
    case 170:
    case 171:
    case 172:
    case 173:
    case 174:
    case 175:
    case 176:
    case 177:
    case 180:
    case 181:
    case 182:
    case 183:
    case 184:
    case 185:
    case 186:
    case 189:
    case 190:
    case 191:
    case 192:
    case 193:
    case 194:
    case 195:
    case 196:
    case 197:
    case 198:
        *(_DWORD*)(thisx + 396) = 0;
        *(_DWORD*)(thisx + 412) = 0;
        *(_DWORD*)(thisx + 400) = 0;
        result = thisx;
        *(_DWORD*)(thisx + 404) = 0;
        *(_DWORD*)(thisx + 408) = 0;
        break;
    case 125:
    case 126:
    case 131:
        *(_DWORD*)(thisx + 396) = 0;
        *(_DWORD*)(thisx + 412) = 0;
        *(_DWORD*)(thisx + 400) = 1;
        result = thisx;
        *(_DWORD*)(thisx + 404) = 0;
        *(_DWORD*)(thisx + 408) = 0;
        *(_DWORD*)(thisx + 392) = 0;
        break;
    default:
        *(_DWORD*)(thisx + 396) = 0;
        *(_DWORD*)(thisx + 412) = 0;
        *(_DWORD*)(thisx + 400) = 0;
        *(_DWORD*)(thisx + 404) = 0;
        result = thisx;
        *(_DWORD*)(thisx + 408) = 0;
        *(_DWORD*)(thisx + 392) = 0;
        break;
    }
    return result;
}

