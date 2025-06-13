#include "rdata.h"

#include "s.h" 
char _rdata[6] = "DATA";//segment _rdata [6]= "DATA";

dd off_4AC230 = (dd)sub_401320;
dd off_4AC244 = (dd)sub_4016C0;
dd off_4AC248 = (dd)sub_47EC30;
dd off_4AC24C = (dd)sub_4759D0;
dd off_4AC250 = (dd)sub_425B40;
dq dbl_4AC258 = (dq)1.25;
dq dbl_4AC260 = (dq)1.5;
dq dbl_4AC268 = (dq)0.2;
dq dbl_4AC270 = (dq)0.9;
dq dbl_4AC278 = (dq)0;
dq dbl_4AC280 = (dq)1.2;
dq dbl_4AC288 = (dq)1.4;
dq dbl_4AC290 = (dq)2.5;
dq dbl_4AC298 = (dq)1.7;
dq dbl_4AC2A0 = (dq)0;
dq dbl_4AC2A8 = (dq)1.3;
dq dbl_4AC2B0 = (dq)800.0;
dd off_4AC2B8 = (dd)sub_47ECC0;
dd off_4AC2BC = (dd)sub_43F100;
dd off_4AC2C0 = (dd)sub_43F330;
dd off_4AC2C4 = (dd)sub_43F660;
dq dbl_4AC2C8 = (dq)1000.0;
dd flt_4AC2D0 = (dd)100.0;
db Type[5] = "WAV";
dd off_4AC2D8 = (dd)sub_4428A0;
dd off_4AC2DC = (dd)sub_474D80;
dd off_4AC2E0 = (dd)sub_47F160;
dd off_4AC2E4 = (dd)sub_47FC40;
dd off_4AC2E8 = (dd)sub_480920;
//???
dd off_4AC2FC = (dd)sub_480A90;
dd off_4AC300 = (dd)sub_480B90;
dd off_4AC304 = (dd)sub_480EE0;
//
dd off_4AC318 = (dd)sub_481090;
//
dd off_4AC32C = (dd)sub_482B80;
dd off_4AC330 = (dd)sub_482B50;
dd off_4AC334 = (dd)sub_4850D0;
dd off_4AC338 = (dd)sub_485720;
//
dd off_4AC34C = (dd)sub_485AE0;
//
dd off_4AC360 = (dd)sub_47EDB0;
dd off_4AC364 = (dd)sub_489CF0;
dd off_4AC368 = (dd)sub_475C40;
dd off_4AC36C = (dd)sub_489EC0;
dd off_4AC370 = (int)vector_deleting_destructor;
dd off_4AC374 = (dd)sub_48E820;
//
dd off_4AC388 = (dd)sub_48E960;
dd off_4AC38C = (dd)sub_48F020;
//
dd off_4AC3A0 = (dd)sub_48F5E0;
//
dd off_4AC3B4 = (dd)(int)vector_deleting_destructor;
dd off_4AC3B8 = (dd)sub_47ED30;
dd off_4AC3BC = (dd)sub_499810;
dq dbl_4AC3C0 = (dq)15.0;
dq dbl_4AC3C8 = (dq)0.2053981633;
dq dbl_4AC3D0 = (dq)100.0;
dq dbl_4AC3D8 = (dq)0.0;

_SCOPETABLE_ENTRY stru_4AC3E0 = (_SCOPETABLE_ENTRY)0;//???
_SCOPETABLE_ENTRY stru_4AC3F0 = (_SCOPETABLE_ENTRY)0;
_SCOPETABLE_ENTRY stru_4AC400 = (_SCOPETABLE_ENTRY)0;
_SCOPETABLE_ENTRY stru_4AC410 = (_SCOPETABLE_ENTRY)0;
_SCOPETABLE_ENTRY stru_4AC420 = (_SCOPETABLE_ENTRY)0;
_SCOPETABLE_ENTRY stru_4AC430 = (_SCOPETABLE_ENTRY)0;
_SCOPETABLE_ENTRY stru_4AC448 = (_SCOPETABLE_ENTRY)0;
_SCOPETABLE_ENTRY stru_4AC458 = (_SCOPETABLE_ENTRY)0;
_SCOPETABLE_ENTRY stru_4AC468 = (_SCOPETABLE_ENTRY)0;

PSCOPETABLE_ENTRY stru_4AC480;//???

dq dbl_4AC498 = (dq)0;
dq dbl_4AC4A0 = (dq)0;
dq dbl_4AC4A8 = (dq)0;
db ProcName[27] = "IsProcessorFeaturePresent";
db ModuleName[10] = "KERNEL32";
db Source[7] = "e+000";
dq dbl_4AC4E0 = (dq)0;
dw word_4AC4E8 = (dw)0x27F;
dt tbyte_4AC4EA = (dt)1.448803;
dq dbl_4AC4F4 = (dq)1.797693;
dq dbl_4AC4FC = (dq)2.225073;
dq dbl_4AC504 = (dq)0;
dq dbl_4AC50C = (dq)0;
dq dbl_4AC514 = (dq)0;
dq dbl_4AC51C = (dq)0;
dq dbl_4AC530 = (dq)1.797693;
dq dbl_4AC538 = (dq)2.225073;
dq dbl_4AC540 = (dq)0;
dw word_4AC548 = (dw)0;
dq dbl_4AC550 = (dq)0;
dq dbl_4AC558 = (dq)0;
db byte_4AC560[10];


db aNull[8] = "(null)";
db aRuntimeError[16] = "runtime error ";
db aTlossError[13] = "TLOSS error";
db aSingError[12] = "SING error";
db aDomainError[14] = "DOMAIN error";
db aR6028UnableToI[7] = "R6028";
db aR6027NotEnough[7] = "R6027";
db aR6026NotEnough[7] = "R6026";
db aR6025PureVirtu[7] = "R6025";
db aR6024NotEnough[7] = "R6024";
db aR6019UnableToO[7] = "R6019";
db aR6018Unexpecte[7] = "R6018";
db aR6017Unexpecte[7] = "R6017";
db aR6016NotEnough[7] = "R6016";

db aR6009NotEnough[7] = "R6009";
db aR6008NotEnough[7] = "R6008";
db aR6002FloatingP[7] = "R6002";
db aMicrosoftVisua[38] = "Microsoft Visual C++ Runtime Library";
db asc_4AC888 = (db)0x0A;
db aRuntimeErrorPr[16] = "Runtime Error!";
db asc_4AC8A8[5] = "...";
db aProgramNameUnk[24] = "<program name unknown>";
db byte_4AC8C4 = (db)4;
dw SrcStr = (dw)0;
_SCOPETABLE_ENTRY stru_4AC8D0 = (_SCOPETABLE_ENTRY)0;
db aGetlastactivep[20] = "GetLastActivePopup";
db aGetactivewindo[17] = "GetActiveWindow";
db aMessageboxa[13] = "MessageBoxA";
db LibFileName[12] = "user32.dll";
_SCOPETABLE_ENTRY stru_4AC918 = (_SCOPETABLE_ENTRY)0;

db a1Qnan[8] = "1#QNAN";
db a1Inf[7] = "1#INF";
db a1Ind[7] = "1#IND";
db a1Snan[8] = "1#SNAN";
db aYn[5] = "_yn";
db aY1[5] = "_y1";
db aY0[5] = "_y0";
db aFrexp[7] = "frexp";
db aFmod[6] = "fmod";
db aHypot[8] = "_hypot";
db aCabs[7] = "_cabs";
db aLdexp[7] = "ldexp";
db aModf[6] = "modf";
db aFabs[6] = "fabs";
db aFloor[7] = "floor";
db aCeil[6] = "ceil";
db aTan[5] = "tan";
db aCos[5] = "cos";
db aSin[5] = "sin";
db aSqrt[6] = "sqrt";
db aAtan2[7] = "atan2";
db aAtan[6] = "atan";
db aAcos[6] = "acos";
db aAsin[6] = "asin";
db aTanh[6] = "tanh";
db aCosh[6] = "cosh";
db aSinh[6] = "sinh";
db aLog10_0[7] = "log10";
db aLog[5] = "log";
db aPow[5] = "pow";
db aExp[5] = "exp";
db unk_4ACA48 = (db)0x9A;
FuncInfoV1 stru_4AE1B8 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE1D8 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE1E0 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE200 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE208 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE228 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE230 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE250 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE258 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE278 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE280 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE2A0 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE330 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE350 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE3E8 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE408 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE410 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE430 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE438 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE458 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE460 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE480 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE488 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE4A8 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE4B0 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE4D0 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE4D8 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE4F8 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE500 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE520 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE528 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE548 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE550 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE570 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE580 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE5A0 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE5B8 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE5D8 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE5E0 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE600 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE608 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE628 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE630 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE650 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE660 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE680 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE688 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE6A8 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE6B0 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE6D0 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE6D8 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE6F8 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE700 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE720 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE728 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE748 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE750 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE770 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE778 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE798 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE7A0 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE7C0 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE7C8 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE7E8 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE7F0 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE810 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE818 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE838 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE848 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE868 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE898 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE8B8 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE8C0 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE8E0 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE8E8 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE908 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE910 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE930 = (UnwindMapEntry)0;
FuncInfoV1 stru_4AE938 = (FuncInfoV1)0;
UnwindMapEntry stru_4AE958 = (UnwindMapEntry)0;
dd __IMPORT_DESCRIPTOR_KERNEL32 = (dd)0;
dd __IMPORT_DESCRIPTOR_USER32 = (dd)0;
dd __IMPORT_DESCRIPTOR_GDI32 = (dd)0;
dd __IMPORT_DESCRIPTOR_DSOUND = (dd)0;
dd __IMPORT_DESCRIPTOR_WINMM = (dd)0;
dd __IMPORT_DESCRIPTOR_DDRAW = (dd)0;
dd off_4AE9EC = (dd)0;
dd dword_4AE9F4 = (dd)0x80000001;
dd off_4AE9FC = (dd)0;
dd off_4AEA38 = (dd)0;
dd off_4AEB68 = (dd)0;
dd off_4AEBD0 = (dd)0;
dw word_4AEC1C = (dw)0x302;
dw word_4AEC28 = (dw)0x305;
dw word_4AEC34 = (dw)0x218;
dw word_4AEC40 = (dw)0x1B;
dw word_4AEC4E = (dw)0x34;
dw word_4AEC5C = (dw)0x2DF;
dw word_4AEC68 = (dw)0x2FF;
dw word_4AEC74 = (dw)0x308;
dw word_4AEC80 = (dw)0x31;
dw word_4AEC90 = (dw)0x4A;
dw word_4AECA0 = (dw)0x2CE;
dw word_4AECB6 = (dw)0x296;
dw word_4AECBE = (dw)0x1D5;
dw word_4AECCE = (dw)0x1C7;
dw word_4AECDE = (dw)0x0A3;
dw word_4AECEE = (dw)0x1C8;
dw word_4AECFC = (dw)0x1CC;
dw word_4AED08 = (dw)0x2E3;
dw word_4AED26 = (dw)0x134;
dw word_4AED3E = (dw)0x26A;
dw word_4AED50 = (dw)0x0F5;
dw word_4AED68 = (dw)0x112;
dw word_4AED76 = (dw)0x188;
dw word_4AED84 = (dw)0x181;
dw word_4AED92 = (dw)0x193;
dw word_4AEDA2 = (dw)0x18B;
dw word_4AEDB2 = (dw)0x18C;
db aKernel32Dll[14] = "KERNEL32.dll";
dw word_4AEDCE = (dw)0x244;
dw word_4AEDD8 = (dw)0x2AC;
dw word_4AEDE4 = (dw)0x1BE;
dw word_4AEDF2 = (dw)0x0E3;
dw word_4AEE06 = (dw)0x110;
dw word_4AEE18 = (dw)0x1B5;
dw word_4AEE2A = (dw)0x95;
dw word_4AEE3E = (dw)0x282;
dw word_4AEE52 = (dw)0x12A;
dw word_4AEE60 = (dw)0x1DC;
dw word_4AEE70 = (dw)0x1F2;
dw word_4AEE82 = (dw)0x19A;
dw word_4AEE90 = (dw)0x19E;
dw word_4AEE9C = (dw)0x291;
dw word_4AEEAC = (dw)0x26A;
dw word_4AEEBA = (dw)2;
dw word_4AEED0 = (dw)0x59;
dw word_4AEEE2 = (dw)0x84;
dw word_4AEEF4 = (dw)0x1E0;
dw word_4AEF06 = (dw)0x1DE;
dw word_4AEF16 = (dw)0x226;
db aUser32Dll[12] = "USER32.dll";
dw word_4AEF2E = (dw)0x53;
dw word_4AEF3E = (dw)0x36;
dw word_4AEF4C = (dw)0x15F;
db aGdi32Dll[11] = "GDI32.dll";
db aDsoundDll[12] = "DSOUND.dll";
dw word_4AEF74 = (dw)0x1E;
dw word_4AEF80 = (dw)0x1D;
dw word_4AEF90 = (dw)0x98;
dw word_4AEF9E = (dw)0x1F;
dw word_4AEFAC = (dw)0x1B;
dw word_4AEFBE = (dw)0x95;
dw word_4AEFCE = (dw)0x94;
dw word_4AEFE0 = (dw)0x7B;
dw word_4AEFEC = (dw)0x7A;
dw word_4AEFFA = (dw)0x84;
dw word_4AF006 = (dw)0x7D;
dw word_4AF014 = (dw)0x82;
dw word_4AF020 = (dw)0x87;
dw word_4AF02C = (dw)0x8A;
dw word_4AF03A = (dw)0x79;
dw word_4AF048 = (dw)0x7F;
dw word_4AF056 = (dw)0x8D;
dw word_4AF062 = (dw)0x7C;
db aWinmmDll[11] = "WINMM.dll";
dw word_4AF07E = (dw)0x126;
dw word_4AF092 = (dw)0x1F5;
dw word_4AF0A8 = (dw)0x2F2;
dw word_4AF0B2 = (dw)0x2F6;
dw word_4AF0BC = (dw)0x2F5;
dw word_4AF0C6 = (dw)0x22F;
dw word_4AF0D2 = (dw)0x150;
dw word_4AF0E4 = (dw)0x0CA;
dw word_4AF0F6 = (dw)0x174;
dw word_4AF104 = (dw)0x7D;
dw word_4AF112 = (dw)0x19F;
dw word_4AF11E = (dw)0x199;
dw word_4AF12A = (dw)0x13E;
dw word_4AF13C = (dw)0x1A2;
dw word_4AF14A = (dw)0x29E;
dw word_4AF15E = (dw)0x0F7;
dw word_4AF172 = (dw)0x1A3;
dw word_4AF17E = (dw)0x2AD;
dw word_4AF19A = (dw)0x124;
dw word_4AF1B0 = (dw)0x0B2;
dw word_4AF1CA = (dw)0x0B3;
dw word_4AF1E4 = (dw)0x2D2;
dw word_4AF1FA = (dw)0x106;
dw word_4AF212 = (dw)0x108;
dw word_4AF22C = (dw)0x26D;
dw word_4AF23E = (dw)0x152;
dw word_4AF24E = (dw)0x115;
dw word_4AF25C = (dw)0x19D;
dw word_4AF26A = (dw)0x19B;
dw word_4AF278 = (dw)0x2BF;
dw word_4AF286 = (dw)0x28B;
dw word_4AF2A4 = (dw)0x1B5;
dw word_4AF2B4 = (dw)0x1B8;
dw word_4AF2C4 = (dw)0x1B2;
dw word_4AF2D4 = (dw)0x2BB;
dw word_4AF2E4 = (dw)0x1E4;
dw word_4AF2FA = (dw)0x153;
dw word_4AF30C = (dw)0x156;
dw word_4AF31E = (dw)0x11A;
dw word_4AF32E = (dw)0x0BF;
dw word_4AF33A = (dw)0x0B9;
dw word_4AF344 = (dw)0x131;
dw word_4AF350 = (dw)0x1C2;
dw word_4AF360 = (dw)0x1BF;
dw word_4AF370 = (dw)0x1C0;
dw word_4AF380 = (dw)0x20B;
dw word_4AF392 = (dw)0x27C;
dw word_4AF3A2 = (dw)0x0AA;
dw word_4AF3B6 = (dw)0x203;
dw word_4AF3C2 = (dw)0x0FD;
dw word_4AF3CA = (dw)0x3A;
dw word_4AF3DC = (dw)0x1A0;
dw word_4AF3EA = (dw)0x200;
dw word_4AF3F8 = (dw)0x11;
dw word_4AF402 = (dw)0x50;
dw word_4AF40E = (dw)0x1C7;
dw word_4AF41E = (dw)0x2A;
dw word_4AF434 = (dw)0x2F;
dw word_4AF448 = (dw)0x1A5;
dw word_4AF454 = (dw)0x44;
dw word_4AF460 = (dw)0x14F;
dw word_4AF46E = (dw)0x1E8;
dw word_4AF47A = (dw)0x156;
dw word_4AF486 = (dw)7;
db aDdrawDll[11] = "DDRAW.dll";
db byte_4AFF40[10];
