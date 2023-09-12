#include "data.h"

#include "s.h"
#include <stdlib.h>

//决定还是一个个筛选

int loc_46464D;//




int byte_4B2762;
int byte_4B2A16;
int dword_4ABB0C;

int aNull_0;
int _ExceptionContinuation_16667;
double (*loc_4A2FFD)(void);
double (*loc_4A323D)(void);
double (*loc_4A2F4D)(void);
PVOID gu_return;
//这些可能要改寄存器、、？？？
char _EBX;
char _AL;
double _ST5;
double _ST6;
int _EDX;
PVOID _ReturnPoint_16567;
int _ctype[20000];
LPCSTR asc_4B17D8;
int word_4B16E6;
int word_4B1714;
int word_4B16B6;
int byte_4B25F6,
byte_4B2654,
byte_4B2850,
byte_4B2930,
word_4ABBFE,
word_4B1C68,
dword_4ABAEC,
dword_4ABB10,
byte_4B2884,
byte_4B2973,
byte_4B309C,
word_4B9290,
byte_4B30C6,
byte_4B3104,
byte_4B288C,
byte_4B299F,
byte_4AFF12,
byte_4AFF1A,
byte_4B1564
;
int byte_4B4E74[20000];
int byte_4B46C0[20000];
int byte_4B4664[20000];
int byte_4B0710[20000];
int byte_4AFC1A,
byte_4AFC4C,
byte_4AFCA0,
byte_4AFD21,
unk_4AFB11,
unk_4AFD14,
byte_4AF907,
byte_4AF949,
byte_4AF9CC,
unk_4AF9BB,
byte_4AFA1C,
byte_4AFA83,
unk_4AFA76,
byte_4AFAD7,
byte_4AFB1E,
byte_4AFB6C,
unk_4AFC02,
unk_4B9410,
byte_4B1F22,
byte_4B1B38,
byte_4B0C10,
byte_4B2DB2,
byte_4B1B52,
unk_4B9AF8,
byte_4B1F62,
unk_4B1F9C,
byte_4B21D4,
unk_4B0C59,
byte_4B2246,
unk_4B1FC8,
byte_4B22F2,
byte_4B2352,
byte_4B2746,
byte_4B279E,
unk_4B2A50,
byte_4B2A5D,
unk_4B2A75,
dword_4ABC40,








dword_4ABB14,
byte_4ABB3C,
byte_4B2D5B,
dword_4ABBE4,
dword_4ABC68,
word_4ABB7E,
dword_4ABBA8,
word_4ABC0A,
byte_4B08F8,
byte_4B3438,
byte_4ABD41,
byte_4ABD73,
byte_4ABDB1,
byte_4ABDFD,
byte_4ABE5F,
dword_4ABEB8,
dword_4ABCD0,
byte_4B1EC4,
byte_4B1F3E,
byte_4AF95F,
byte_4AF993,
byte_4AF9DC,
byte_4AFA1A,
byte_4AFA2E,
byte_4AFA74,
byte_4AFA91,
byte_4AFAE3,
byte_4AFB0F,
byte_4AFB36,
byte_4AFB82,
byte_4AFBC4,
byte_4AF917,
byte_4AFC64,
byte_4AFCBA,
byte_4AFD3D,
byte_4AFD6D,
byte_4AFC32,
byte_4B0BF0,
byte_4B1616,

byte_4B1662,
byte_4B1698,
byte_4B0BA4

;
int byte_4B06C0[20000];
int byte_4B0698[20000];

int byte_4B2D45;
int byte_4B17DC;
int byte_4B17E6;
int byte_4B2E1E;
int byte_4B2EF6;
int byte_4B17D4;
int dword_4B8768;
int* dword_4B8780;
int(__stdcall* MessageBoxA_0)(HWND, LPCSTR, LPCSTR, UINT);
//LONG (*lpfn)(struct _EXCEPTION_POINTERS* ExceptionInfo);
LONG(__stdcall* lpfn)(struct _EXCEPTION_POINTERS*);
dd dword_4B0000 = (dd)0;
dd dword_4B001C = (dd)0;
dd First = (dd)0;
dd Last = (dd)0;
dd dword_4B0038 = (dd)0;
dd dword_4B0040 = (dd)0;
dd dword_4B0044 = (dd)0;
dd dword_4B004C = (dd)0;
db unk_4B0050 = (db)0x82;
db byte_4B0060 = (db)0x83;
db unk_4B0078 = (db)0x82;
db byte_4B0088 = (db)0x82;
db unk_4B00A8 = (db)0x82;
db byte_4B00B8 = (db)0x82;
db byte_4B00D0 = (db)0x82;
db unk_4B00DC = (db)0x82;
db unk_4B00E8 = (db)0x82;
db unk_4B00F8 = (db)0x82;
db unk_4B0104 = (db)0x82;
db byte_4B0113[20000];
db byte_4B011F[20000];
db byte_4B012A[20000];
char aGraphic02dppal[20000] = "Graphic\%02dpPalette.bin";
char aGraphicBody02d[20000] = "Graphic\Body%02d.bmp";
char a3d3d[20000] = "%3d,%3d";
db byte_4B01A4 = (db)0x82;
db aGraphicMisuzuB[20000] = "Graphic\misuzu.bmp";
db aGraphicDoubleD[20000] = "Graphic\Double_Dragon.bmp";
db aS[20000] = "%s";
db String2[20000] = "#DEFEND";
db aN[20000] = "n";
db aBasic[20000] = "#BASIC";
db aStatus[20000] = "#STATUS";
db aMes[20000] = "#MES";
db aHelp[20000] = "#HELP";
db a1st[20000] = "#1ST";
db a2nd[20000] = "#2ND";
db a3rd[20000] = "#3RD";
db aBiri[20000] = "#BIRI";
db aSpMove[20000] = "#SP_MOVE";
db aEtcSkill[20000] = "#ETC_SKILL";
db a2d[20000] = "%2d";
db aDserrAllocated[20000] = "DSERR_ALLOCATED";
db aDserrControlun[20000] = "DSERR_CONTROLUNAVAIL";
db aDserrInvalidpa[20000] = "DSERR_INVALIDPARAM";
db aDserrInvalidca[20000] = "DSERR_INVALIDCALL";
db aDserrGeneric[20000] = "DSERR_GENERIC";
db aDserrPriolevel[20000] = "DSERR_PRIOLEVELNEEDED";
db aDserrOutofmemo[20000] = "DSERR_OUTOFMEMORY";
db aDserrBadformat[20000] = "DSERR_BADFORMAT";
db aDserrUnsupport[20000] = "DSERR_UNSUPPORTED";
db aDserrNodriver[20000] = "DSERR_NODRIVER";
db aDserrAlreadyin[20000] = "DSERR_ALREADYINITIALIZED";
db aDserrNoaggrega[20000] = "DSERR_NOAGGREGATION";
db aDserrBufferlos[20000] = "DSERR_BUFFERLOST";
db aDserrOtherapph[20000] = "DSERR_OTHERAPPHASPRIO";
db aDserrUninitial[20000] = "DSERR_UNINITIALIZED";
db aUnknownHresult[20000] = "Unknown HRESULT";
db Caption[20000] = "ERROR!";
db Text = (db)0x82;
db aError_0[20000] = "ERROR";
db aDserrAllocated_0[20000] = "DSERR_ALLOCATED";
db aError_1[20000] = "ERROR";
db aDserrInvalidpa_0[20000] = "DSERR_INVALIDPARAM";
db aError_2[20000] = "ERROR";
db aDserrUninitial_0[20000] = "DSERR_UNINITIALIZED";
db aError_3[20000] = "ERROR";
db aDserrUnsupport_0[20000] = "DSERR_UNSUPPORTED";
db aError_4[20000] = "ERROR!";
db byte_4B043C = (db)0x83;
db aS_2[20000] = "%s";
db byte_4B0494 = (db)0x83;
db byte_4B04B4 = (db)0x82;
db aDserrAllocated_1[20000] = "DSERR_ALLOCATED";
db aDserrBadformat_0[20000] = "DSERR_BADFORMAT";
db aDserrInvalidpa_1[20000] = "DSERR_INVALIDPARAM";
db aDserrNoaggrega_0[20000] = "DSERR_NOAGGREGATION";
db aDserrOutofmemo_0[20000] = "DSERR_OUTOFMEMORY";
db aDserrUninitial_1[20000] = "DSERR_UNINITIALIZED";
db aDserrUnsupport_1[20000] = "DSERR_UNSUPPORTED";
db byte_4B055C = (db)0x83;
db aDserrControlun_0[20000] = "DSERR_CONTROLUNAVAIL";
db aDserrInvalidpa_2[20000] = "DSERR_INVALIDPARAM";
db aDserrPriolevel_0[20000] = "DSERR_PRIOLEVELNEEDED";
db byte_4B05C0 = (db)0x89;
db byte_4B05D0 = (db)0x8E;
db aDserrControlun_1[20000] = "DSERR_CONTROLUNAVAIL";
db aDserrInvalidpa_3[20000] = "DSERR_INVALIDPARAM";
db aDserrPriolevel_1[20000] = "DSERR_PRIOLEVELNEEDED";
db byte_4B0628 = (db)0x8E;
db aError_5[20000] = "ERROR";
db byte_4B0644 = (db)0x83;
db aError_6[20000] = "ERROR";
db byte_4B0668[20000];
db byte_4B066A[20000];
db byte_4B0671[20000];

db a2dD[20000] = "%2d, %d";
db a3d[20000] = "%3d";
db byte_4B0884 = (db)0x93;
db a3d_2[20000] = "%3d";
db byte_4B088C = (db)0x93;
db aD_1[20000] = "%d";
db aD_2[20000] = "%d";
db byte_4B0898 = (db)0x88;
db a3d_3[20000] = "%3d";
db byte_4B08A0 = (db)0x93;
db byte_4B08A4 = (db)0x88;
db a2d_2[20000] = "%2d";
db byte_4B08AC = (db)0x82;
db a3d_4[20000] = "%3d";
db byte_4B08C4 = (db)0x90;
db byte_4B08C8 = (db)0x82;
db a3d_5[20000] = "%3d";
db byte_4B08DC = (db)0x90;
db aReplayBin[20000] = "Replay.bin";
dw word_4B08EC = (dw)0x7483;
db aBoss02Wav[20000] = "Boss02.wav";
db aBoss03Wav[20000] = "Boss03.wav";
db aDoubledragonWa[20000] = "DoubleDragon.wav";
db byte_4B0944 = (db)0x83;
db aD_3[20000] = "%d>";
db aCharselWav[20000] = "CharSel.wav";
db aFrameD[20000] = "FRAME:%d";
db aSpeed3d[20000] = "SPEED:%3d%%";
db aWinWav[20000] = "Win.wav";
db aLoseWav[20000] = "Lose.wav";
db aWinWav_0[20000] = "Win.wav";
db aLoseMisuzuWav[20000] = "Lose_misuzu.wav";
db aLoseWav_0[20000] = "Lose.wav";
db aMisuzuWin[20000] = "MISUZU WIN!!";
db aYourTeamWin[20000] = "YOUR TEAM WIN!!";
db aYourTeamLose[20000] = "YOUR TEAM LOSE...";
db aDpWin[20000] = "%dP WIN!!";
db aDpTeamWin[20000] = "%dP TEAM WIN!!";
db aCpuWin[20000] = "CPU WIN!!";
db aCpuTeamWin[20000] = "CPU TEAM WIN!!";
db String[20000] = "DRAW GAME";
db byte_4B0B10 = (db)0x82;
db byte_4B0B24 = (db)0x83;
db byte_4B0B38 = (db)0x82;
db byte_4B0B50 = (db)0x83;
db byte_4B0B60 = (db)0x83;
db byte_4B0B74 = (db)0x83;
db byte_4B0B8C = (db)0x83;
db asc_4B0BA0[20000] = ">>";
db unk_4B0BA4 = (db)0x83;
db unk_4B0BB4 = (db)0x83;
db aMenuWav[20000] = "Menu.wav";
db unk_4B0C10 = (db)0x82;
db unk_4B0C28 = (db)0x83;
db unk_4B0C5C = (db)0x82;
db byte_4B0C68 = (db)0x83;
db byte_4B0CA0 = (db)0x81;
db byte_4B0CA4 = (db)0x81;
db asc_4B0CA8[20000] = ">>";
db asc_4B0CAC[20000] = "<-";
db asc_4B0CB0[20000] = "->";
db aDp_1[20000] = "%dP";
db asc_4B0CB8[20000] = ">>";
db aKb[20000] = "KB";
db aJsD[20000] = "JS%d";
db asc_4B0CC8[20000] = ">>";
db aD[20000] = "%d";
db aUp[20000] = "UP";
db aDo[20000] = "DO";
db aLe[20000] = "LE";
db aRi[20000] = "RI";
db asc_4B0CE0[20000] = ">>";
db asc_4B0CE4[20000] = ">>";
db aShowfpsD[20000] = "ShowFPS = %d";
db aPutdamageD[20000] = "PutDamage = %d";
db aGamespeedD[20000] = "GameSpeed = %d";
db aHitstopD[20000] = "HitStop = %d";
db aSamecharD[20000] = "SameChar = %d";
db aUseitemD[20000] = "UseItem = %d";
db aHitsameteamD[20000] = "HitSameTeam = %d";
db aUseweaponnumD[20000] = "UseWeaponNum = %d";
db aUsecombinemove[20000] = "UseCombineMove = %d";
db aAttackbuttongu[20000] = "AttackButtonGuard = %d";
db aGrounddamageD[20000] = "GroundDamage = %d";
db aBlackholetypeD[20000] = "BlackHoleType = %d";
db aRandomselectfi[20000] = "RandomSelectFightType = %d";
db aSurvivalrecord[20000] = "SurvivalRecordVeryEasy = %d";
db aSurvivalrecord_0[20000] = "SurvivalRecordEasy = %d";
db aSurvivalrecord_1[20000] = "SurvivalRecordNormal = %d";
db aSurvivalrecord_2[20000] = "SurvivalRecordHard = %d";
db aSurvivalrecord_3[20000] = "SurvivalRecordVeryHard = %d";
db AppName[20000] = "Config";
db aGamenumD[20000] = "GameNum = %d";
db aIstagD[20000] = "IsTag = %d";
db aPlayernumD[20000] = "PlayerNum = %d";
db aIsuseitemD[20000] = "IsUseItem = %d";
db aWeaponnumD[20000] = "WeaponNum = %d";
db aShowpointD[20000] = "ShowPoint = %d";
db aGrounddamageD_0[20000] = "GroundDamage = %d";
db aBlackholetypeD_0[20000] = "BlackHoleType = %d";
db aUsecombinemove_0[20000] = "UseCombineMove = %d";
db aHitsameteamD_0[20000] = "HitSameTeam = %d";
db aKkconfig[20000] = "KKConfig";
db aFullscreenD[20000] = "FullScreen = %d";
db aBackgroundrunD[20000] = "BackGroundRun = %d";
db aVsyncwaitD[20000] = "VsyncWait = %d";
db aZoomD[20000] = "Zoom = %d";
db aDirectdrawconf[20000] = "DirectDrawConfig";
db aError_7[20000] = "Error";
db aDirectdrawconf_4[20000] = "DirectDrawConfig";
db aInitdevice[20000] = "InitDevice";
db aDpD[20000] = "%dP = %d";
db aError_8[20000] = "Error";
db byte_4B0FC0 = (db)0x90;
db aWeaponrate[20000] = "WeaponRate";
db a02dD[20000] = "%02d = %d";
db aError_9[20000] = "Error";
db byte_4B0FFC = (db)0x90;
db aJoystickassign[20000] = "JoyStickAssign%dP";
db aUpD[20000] = "Up = %d";
db aDownD[20000] = "Down = %d";
db aLeftD[20000] = "Left = %d";
db aRightD[20000] = "Right = %d";
db aTriggerDD[20000] = "Trigger%d = %d";
db aSelectD[20000] = "Select = %d";
db aStartD[20000] = "Start = %d";
db aError_10[20000] = "Error";
db byte_4B1088 = (db)0x90;
db aKeyboardassign[20000] = "KeyBoardAssign%dP";
db aUp3d[20000] = "Up = %3d";
db aDown3d[20000] = "Down = %3d";
db aLeft3d[20000] = "Left = %3d";
db aRight3d[20000] = "Right = %3d";
db aSelect3d[20000] = "Select = %3d";
db aStart3d[20000] = "Start = %3d";
db aTriggerD3d[20000] = "Trigger%d = %3d";
db KeyName[20000] = "ShowFPS";
db aConfig_0[20000] = "Config";
db aPutdamage[20000] = "PutDamage";
db aConfig_1[20000] = "Config";
db aGamespeed[20000] = "GameSpeed";
db aConfig_2[20000] = "Config";
db aHitstop[20000] = "HitStop";
db aConfig_3[20000] = "Config";
db aSamechar[20000] = "SameChar";
db aConfig_4[20000] = "Config";
db aUseitem[20000] = "UseItem";
db aConfig_5[20000] = "Config";
db aHitsameteam[20000] = "HitSameTeam";
db aConfig_6[20000] = "Config";
db aUseweaponnum[20000] = "UseWeaponNum";
db aConfig_7[20000] = "Config";
db aAttackbuttongu_0[20000] = "AttackButtonGuard";
db aConfig_8[20000] = "Config";
db aUsecombinemove_1[20000] = "UseCombineMove";
db aConfig_9[20000] = "Config";
db aGrounddamage[20000] = "GroundDamage";
db aConfig_10[20000] = "Config";
db aBlackholetype[20000] = "BlackHoleType";
db aConfig_11[20000] = "Config";
db aRandomselectfi_0[20000] = "RandomSelectFightType";
db aConfig_12[20000] = "Config";
db aSurvivalrecord_4[20000] = "SurvivalRecordVeryEasy";
db aConfig_13[20000] = "Config";
db aSurvivalrecord_5[20000] = "SurvivalRecordEasy";
db aConfig_14[20000] = "Config";
db aSurvivalrecord_6[20000] = "SurvivalRecordNormal";
db aConfig_15[20000] = "Config";
db aSurvivalrecord_7[20000] = "SurvivalRecordHard";
db aConfig_16[20000] = "Config";
db aSurvivalrecord_8[20000] = "SurvivalRecordVeryHard";
db aConfig_17[20000] = "Config";
db aGamenum[20000] = "GameNum";
db aKkconfig_0[20000] = "KKConfig";
db aIstag[20000] = "IsTag";
db aKkconfig_1[20000] = "KKConfig";
db aPlayernum[20000] = "PlayerNum";
db aKkconfig_2[20000] = "KKConfig";
db aIsuseitem[20000] = "IsUseItem";
db aKkconfig_3[20000] = "KKConfig";
db aWeaponnum[20000] = "WeaponNum";
db aKkconfig_4[20000] = "KKConfig";
db aShowpoint[20000] = "ShowPoint";
db aKkconfig_5[20000] = "KKConfig";
db aGrounddamage_0[20000] = "GroundDamage";
db aKkconfig_6[20000] = "KKConfig";
db aBlackholetype_0[20000] = "BlackHoleType";
db aKkconfig_7[20000] = "KKConfig";
db aUsecombinemove_2[20000] = "UseCombineMove";
db aKkconfig_8[20000] = "KKConfig";
db aHitsameteam_0[20000] = "HitSameTeam";
db aKkconfig_9[20000] = "KKConfig";
db aFullscreen[20000] = "FullScreen";
db aDirectdrawconf_0[20000] = "DirectDrawConfig";
db aBackgroundrun[20000] = "BackGroundRun";
db aDirectdrawconf_1[20000] = "DirectDrawConfig";
db aVsyncwait[20000] = "VsyncWait";
db aDirectdrawconf_2[20000] = "DirectDrawConfig";
db aZoom[20000] = "Zoom";
db aDirectdrawconf_3[20000] = "DirectDrawConfig";
db aWeaponrate_0[20000] = "WeaponRate";
db a02d[20000] = "%02d";
db aInitdevice_0[20000] = "InitDevice";
db aDp[20000] = "%dP";
db aJoystickassign_0[20000] = "JoyStickAssign%dP";
db aUp_0[20000] = "Up";
db aDown[20000] = "Down";
db aLeft[20000] = "Left";
db aRight[20000] = "Right";
db aSelect[20000] = "Select";
db aStart[20000] = "Start";
db aTriggerD[20000] = "Trigger%d";
db aKeyboardassign_0[20000] = "KeyBoardAssign%dP";
db aUp_1[20000] = "Up";
db aDown_0[20000] = "Down";
db aLeft_0[20000] = "Left";
db aRight_0[20000] = "Right";
db aSelect_0[20000] = "Select";
db aStart_0[20000] = "Start";
db aTriggerD_0[20000] = "Trigger%d";
db a3d_0[20000] = "%3d";
db aGraphicStagese[20000] = "Graphic\StageSelect.bmp";
db aStageStage02dS[20000] = "Stage\Stage%02d_Select.bmp";
db aStageStage02dB[20000] = "Stage\Stage%02d.bmp";
db aCharselWav_0[20000] = "CharSel.wav";
db byte_4B1550 = (db)0x83;
db unk_4B1564 = (db)0x83;
db aS_3[20000] = "%s";
db byte_4B1574 = (db)0x83;
db a02d_0[20000] = "%02d";
db byte_4B158C = (db)0x83;
db aGraphicTitleBm[20000] = "Graphic\Title.bmp";
db aTitleWav[20000] = "Title.wav";
db byte_4B15D8 = (db)0x82;
db byte_4B15F4 = (db)0x82;
db byte_4B1628 = (db)0x82;
db byte_4B1670 = (db)0x82;
db byte_4B16A0 = (db)0x82;
db byte_4B16D4 = (db)0x83;
db byte_4B1714 = (db)0x82;
db byte_4B1744 = (db)0x82;
db byte_4B1770 = (db)0x83;
db byte_4B179C = (db)0x83;
db byte_4B17D0 = (db)0x82;
db byte_4B17F0 = (db)0x82;
db byte_4B1818 = (db)0x83;
db byte_4B183C = (db)0x83;
db byte_4B1884 = (db)0x83;
db byte_4B18C8 = (db)0x83;
db byte_4B190C = (db)0x82;
db asc_4B1948[20000] = "><";
db byte_4B1980 = (db)0x82;
db byte_4B19CC = (db)0x82;
db byte_4B1A14 = (db)0x82;
db byte_4B1A48 = (db)0x82;
db byte_4B1A84 = (db)0x82;
db byte_4B1AB0 = (db)0x82;
db byte_4B1AEC = (db)0x82;
db byte_4B1B2C = (db)0x82;
db byte_4B1B74 = (db)0x83;
db byte_4B1B98 = (db)0x82;
db byte_4B1BBC = (db)0x82;
db byte_4B1BE0 = (db)0x82;
db byte_4B1C14 = (db)0x83;
db byte_4B1C40 = (db)0x82;
db byte_4B1C64 = (db)0x83;
db byte_4B1C80 = (db)0x83;
db byte_4B1CB0 = (db)0x82;
db byte_4B1CDC = (db)0x82;
db byte_4B1D08 = (db)0x82;
db byte_4B1D44 = (db)0x82;
db byte_4B1D80 = (db)0x82;
db byte_4B1DC0 = (db)0x82;
db byte_4B1E00 = (db)0x82;
db byte_4B1E3C = (db)0x82;
db byte_4B1E74 = (db)0x82;
db byte_4B1EB8 = (db)0x83;
db byte_4B1EF8 = (db)0x82;
db byte_4B1F1C = (db)0x82;
db aD_4[20000] = "%d";
db byte_4B1F28 = (db)0x82;
db byte_4B1F2C = (db)0x82;
db byte_4B1F34 = (db)0x82;
db a3d_6[20000] = "%3d";
db byte_4B1F40 = (db)0x82;
db a3d_7[20000] = "%3d";
db byte_4B1F4C = (db)0x82;
db a3d_8[20000] = "%3d";
db byte_4B1F5C = (db)0x82;
db a3d_9[20000] = "%3d";
db byte_4B1F6C = (db)0x82;
db a3d_10[20000] = "%3d";
db byte_4B1F78 = (db)0x82;
db a3d_11[20000] = "%3d";
db byte_4B1F88 = (db)0x82;
db a3d_12[20000] = "%3d";
db byte_4B1F98 = (db)0x82;
db a3d_13[20000] = "%3d";
db byte_4B1FA8 = (db)0x82;
db a3d_14[20000] = "%3d";
db byte_4B1FB4 = (db)0x82;
db a3d_15[20000] = "%3d";
db byte_4B1FC4 = (db)0x81;
db byte_4B1FD0 = (db)0x81;
db aDevice[20000] = "DEVICE";
db aUp_2[20000] = "    UP";
db aDown_1[20000] = "  DOWN";
db aLeft_1[20000] = "  LEFT";
db aRight_1[20000] = " RIGHT";
db aA[20000] = "     A";
db aB[20000] = "     B";
db aC[20000] = "     C";
db aAB[20000] = "   A+B";
db aAC[20000] = "   A+C";
db aSelect_1[20000] = "SELECT";
db aStart_1[20000] = " START";
db byte_4B203C = (db)0x82;
db byte_4B2078 = (db)0x82;
db byte_4B20A4 = (db)0x82;
db byte_4B20CC = (db)0x83;
db byte_4B20E4 = (db)0x82;
db aOn[20000] = "ON";
dd off_4B20FC = (dd)loc_46464D + 2;
db byte_4B2100 = (db)0x83;
db a100[20000] = "100%%";
db a50[20000] = " 50%%";
db a66[20000] = " 66%%";
db a75[20000] = " 75%%";
db a80[20000] = " 80%%";
db a83[20000] = " 83%%";
db a85[20000] = " 85%%";
db a87[20000] = " 87%%";
db a88[20000] = " 88%%";
db a90[20000] = " 90%%";
db byte_4B2160 = (db)0x83;
db aOn_0[20000] = "ON";
dd off_4B2174 = (dd)loc_46464D + 2;
db byte_4B2178 = (db)0x82;
db aOn_1[20000] = "ON";
dd off_4B2190 = (dd)loc_46464D + 2;
db byte_4B2194 = (db)0x83;
db aOn_2[20000] = "ON";
dd off_4B21AC = (dd)loc_46464D + 2;
db byte_4B21B0 = (db)0x82;
db aD_5[20000] = "%d";
db byte_4B21C0 = (db)0x82;
db aOn_3[20000] = "ON";
dd off_4B21DC = (dd)loc_46464D + 2;
db byte_4B21E0 = (db)0x83;
db aOn_4[20000] = "ON";
dd off_4B21FC = (dd)loc_46464D + 2;
db byte_4B2200 = (db)0x82;
db byte_4B2218 = (db)0x83;
db byte_4B2228 = (db)0x82;
db byte_4B2250 = (db)0x83;
db byte_4B2274 = (db)0x82;
db byte_4B22A4 = (db)0x82;
db byte_4B22E4 = (db)0x82;
db byte_4B2310 = (db)0x82;
db byte_4B233C = (db)0x82;
db byte_4B2378 = (db)0x82;
db byte_4B23B0 = (db)0x82;
db byte_4B23F0 = (db)0x82;
db byte_4B2428 = (db)0x83;
db aGraphic02ppale[20000] = "Graphic\02pPalette.bin";
db aGraphicBody02d_0[20000] = "Graphic\Body%02d.bmp";
db aGraphic01ppale[20000] = "Graphic\01pPalette.bin";
db aGraphicBody02d_1[20000] = "Graphic\Body%02d.bmp";
db aBgmS[20000] = "BGM\%s";
db aLooppos[20000] = "#LOOPPOS";
db aDemoOpeningTxt[20000] = "Demo\Opening.txt";
db byte_4B24D4 = (db)0x81;
db byte_4B24D8 = (db)0x81;
db byte_4B24DC = (db)0x81;
db byte_4B24E0 = (db)0x83;
db byte_4B24EC = (db)0x82;
db byte_4B24F8 = (db)0x82;
db byte_4B2500 = (db)0x82;
db byte_4B2508 = (db)0x82;
db byte_4B2510 = (db)0x92;
db byte_4B2518 = (db)0x8C;
db byte_4B251C = (db)0x93;
db byte_4B2520 = (db)0x81;
db byte_4B2530 = (db)0x82;
db byte_4B253C = (db)0x8C;
db aDp_2[20000] = "%dP";
db byte_4B2544 = (db)0x82;
db byte_4B2570 = (db)0x82;
db byte_4B259C = (db)0x82;
db byte_4B25C8 = (db)0x82;
db byte_4B25E0 = (db)0x81;
db aDp_3[20000] = "%dP";
db byte_4B260C = (db)0x82;
db byte_4B2640 = (db)0x82;
db byte_4B2658 = (db)0x81;
db unk_4B265C = (db)0x81;
db byte_4B2660 = (db)0x81;
db byte_4B2664 = (db)0x81;
db a2d_3[20000] = "%2d";
db byte_4B266C = (db)0x81;
db byte_4B2678 = (db)0x82;
db byte_4B2684 = (db)0x81;
db byte_4B2690 = (db)0x82;
db byte_4B269C = (db)0x81;
db byte_4B26A8 = (db)0x81;
db byte_4B26B4 = (db)0x81;
db byte_4B26C0 = (db)0x81;
db byte_4B26CC = (db)0x81;
db byte_4B26D8 = (db)0x82;
db byte_4B26E4 = (db)0x81;
db byte_4B26F0 = (db)0x81;
db byte_4B26FC = (db)0x81;
db aA_0[20000] = " A";
db aB_0[20000] = " B";
db aAb[20000] = "AB";
db aO[20000] = " O";
db aD_6[20000] = "%d>";
db aD_7[20000] = "%d>";
db aD_8[20000] = "%d>";
db unk_4B2724 = (db)0x81;
db byte_4B2730 = (db)0x82;
db aMenuWav_0[20000] = "Menu.wav";
db byte_4B2748 = (db)0x82;
db byte_4B2758 = (db)0x82;
db byte_4B2760 = (db)0x82;
db byte_4B2768 = (db)0x82;
db byte_4B2774 = (db)0x82;
db byte_4B2780 = (db)0x82;
db byte_4B2788 = (db)0x82;
db byte_4B2790 = (db)0x82;
db byte_4B279C = (db)0x82;
db byte_4B27A8 = (db)0x82;
db byte_4B27B4 = (db)0x82;
db aDp_0[20000] = " %dP";
db aCpu[20000] = "CPU";
db aLv2d[20000] = "LV%2d";
db a4d[20000] = "%4d";
db byte_4B27D8 = (db)0x81;
db aS_4[20000] = "%s";
db byte_4B2820 = (db)0x82;
db byte_4B2838 = (db)0x83;
db byte_4B2858 = (db)0x82;
db byte_4B2878 = (db)0x82;
db aS_5[20000] = "%s";
db byte_4B28AC = (db)0x82;
db byte_4B28D4 = (db)0x82;
db byte_4B28F4 = (db)0x82;
db asc_4B2918[20000] = ">>";
db asc_4B291C[20000] = ">>";
db asc_4B2920[20000] = ">>";
db aMenuWav_1[20000] = "Menu.wav";
db a1_2[20000] = "$1";
db a2d_4[20000] = "%2d";
db byte_4B2960 = (db)0x82;
db a3dPoint[20000] = "%3d POINT";
db byte_4B2974 = (db)0x81;
db byte_4B2978 = (db)0x82;
db byte_4B299C = (db)0x82;
db byte_4B29BC = (db)0x81;
db byte_4B29C0 = (db)0x81;
db byte_4B29C4 = (db)0x81;
db aMenuWav_2[20000] = "Menu.wav";
db byte_4B29D4 = (db)0x81;
db asc_4B29D8[20000] = "<-";
db asc_4B29DC[20000] = "->";
db aMenuWav_3[20000] = "Menu.wav";
db byte_4B29EC = (db)0x81;
db asc_4B29F0[20000] = "<-";
db asc_4B29F4[20000] = "->";
db a1[20000] = "$1";
dd dword_4B2A18 = (dd)0x75826B82;
db byte_4B2A1C = (db)0;
dd dword_4B2A20 = (dd)0x6F826782;
db byte_4B2A24 = (db)0;
dd dword_4B2A28 = (dd)0x0ED82C482;
dw word_4B2A2C = (dw)0x0B482;
db byte_4B2A2E = (db)0;
dd dword_4B2A30 = (dd)0x0B582A082;
dd dword_4B2A34 = (dd)0x0B482ED82;
db byte_4B2A38 = (db)0;
dd dword_4B2A3C = (dd)0x0B082C882;
dd dword_4B2A40 = (dd)0x0B482ED82;
db byte_4B2A44 = (db)0;
dd dword_4B2A48 = (dd)0x0CB82CE82;
db byte_4B2A4C = (db)0;
dd dword_4B2A50 = (dd)0x0AB82D482;
db byte_4B2A54 = (db)0;
dd dword_4B2A58 = (dd)0x0AB82D482;
dd dword_4B2A5C = (dd)0x0B082C882;
db byte_4B2A60 = (db)0;
dd dword_4B2A64 = (dd)0x0A482DA82;
dd dword_4B2A68 = (dd)0x0E582AC82;
db byte_4B2A6C = (db)0;
dd dword_4B2A70 = (dd)0x0CE82B782;
dd dword_4B2A74 = (dd)0x0B382E282;
db byte_4B2A78 = (db)0;
dd dword_4B2A7C = (dd)0x0CE82E882;
dd dword_4B2A80 = (dd)0x0B7825B81;
db byte_4B2A84 = (db)0;
db asc_4B2A88[20000] = "---";
db a2d_0[20000] = "+%2d";
db asc_4B2A94[20000] = "---";
db a2d_1[20000] = "+%2d";
db byte_4B2AA0 = (db)0x83;
db aGraphicAnteroo[20000] = "Graphic\AnteroomBody%02d.bmp";
db aDataAnteroomti[20000] = "Data\AnteroomTilePat.dat";
db aDataAnteroomcg[20000] = "Data\AnteroomCG.dat";
db aWinnerWav[20000] = "Winner.wav";
db aLoserWav[20000] = "Loser.wav";
db byte_4B2B30 = (db)0x82;
db aGraphicAnteroo_0[20000] = "Graphic\Anteroom.bmp";
dd dword_4B2B6C = (dd)0x0AC82C282;
dd dword_4B2B70 = (dd)0x0B582CC82;
dd dword_4B2B74 = (dd)0x0A282A082;
db byte_4B2B78 = (db)0;
dd dword_4B2B7C = (dd)0x65835883;
dd dword_4B2B80 = (dd)0x5E835B81;
dw word_4B2B84 = (dw)0x5883;
db byte_4B2B86 = (db)0;
dd dword_4B2B88 = (dd)0x93838983;
dd dword_4B2B8C = (dd)0x93834C83;
dw word_4B2B90 = (dw)0x4F83;
db byte_4B2B92 = (db)0;
dd dword_4B2B94 = (dd)0x0EB82AB82;
dw word_4B2B98 = (dw)0x0AD82;
db byte_4B2B9A = (db)0;
db byte_4B2B9C = (db)0x82;
db byte_4B2BBC = (db)0x82;
db byte_4B2C00 = (db)0x82;
db byte_4B2C18 = (db)0x82;
db byte_4B2C44 = (db)0x82;
db byte_4B2C7C = (db)0x83;
db byte_4B2CA8 = (db)0x82;
db byte_4B2CE8 = (db)0x82;
db byte_4B2D20 = (db)0x82;
db byte_4B2D50 = (db)0x82;
db byte_4B2D84 = (db)0x82;
db byte_4B2DA0 = (db)0x83;
db byte_4B2DD0 = (db)0x82;
db byte_4B2E00 = (db)0x83;
db asc_4B2E28[20000] = ">>";
db byte_4B2E2C = (db)0x81;
db aSave02dDat[20000] = "Save%02d.dat";
db aKdsavedata[20000] = "KDSAVEDATA";
db aSave02dDat_0[20000] = "Save%02d.dat";
db aKdsavedata_0[20000] = "KDSAVEDATA";
db aNoD[20000] = "NO%d";
db byte_4B2E70 = (db)0x83;
db byte_4B2E88 = (db)0x81;
db byte_4B2E8C = (db)0x82;
db byte_4B2E98 = (db)0x82;
db a2d_5[20000] = "%2d";
db byte_4B2EB0 = (db)0x82;
db a2dpoint[20000] = "%2dPOINT";
db aLv2d_0[20000] = "LV%2d";
db aLv2d_1[20000] = "LV%2d";
db byte_4B2ED8 = (db)0x82;
db byte_4B2F00 = (db)0x82;
db aMenuWav_4[20000] = "Menu.wav";
db byte_4B2F38 = (db)0x82;
db byte_4B2F64 = (db)0x81;
db byte_4B2F84 = (db)0x82;
db byte_4B2FA4 = (db)0x82;
db byte_4B2FD0 = (db)0x82;
db asc_4B2FFC[20000] = ">>";
db asc_4B3000[20000] = ">>";
db aDemoTigerdemo0[20000] = "Demo\TigerDemo01.txt";
db aDemoTigerdemo0_0[20000] = "Demo\TigerDemo02.txt";
db aDemoTigerdemo0_1[20000] = "Demo\TigerDemo03.txt";
db aDemoEnding01Tx[20000] = "Demo\Ending01.txt";
db aPairTxt[20000] = "pair.txt";
db aStart_2[20000] = "#START";
db aEnd[20000] = "#END";
db aStart_3[20000] = "#START";
db byte_4B3084 = (db)0x81;
db FileName[20000] = "Replay.bin";
db a1_0[20000] = "$1";
db aD_9[20000] = "%d";
db byte_4B30B8 = (db)0x88;
db aDPoint[20000] = "+%d POINT";
db aDPoint_0[20000] = "+%d POINT";
db byte_4B30D4 = (db)0x81;
db byte_4B30D8 = (db)0x82;
db byte_4B30FC = (db)0x82;
db a1_1[20000] = "$1";
db a2d_6[20000] = "%2d";
db byte_4B3130 = (db)0x88;
db a3dPoint_0[20000] = "%3d POINT";
db byte_4B3140 = (db)0x81;
db byte_4B3144 = (db)0x82;
db byte_4B3160 = (db)0x82;
db aGraphicSystem0[20000] = "Graphic\System02.bmp";
db aGraphicSystem0_0[20000] = "Graphic\System02.bmp";
db aError_11[20000] = "Error";
db byte_4B31C0 = (db)0x83;
db aGraphicSystem0_1[20000] = "Graphic\System02.bmp";
db aError_12[20000] = "Error";
db byte_4B3214 = (db)0x83;
db byte_4B3248 = (db)0x82;
db byte_4B3258 = (db)0x81;
db byte_4B3264 = (db)0x81;
db a4dp3d02d[20000] = "%4dP(%3d.%02d%%)";
db a3d_1[20000] = "%3d";
db a3d02d[20000] = "%3d.%02d";
db byte_4B329C = (db)0x82;
db byte_4B32C4 = (db)0x83;
db byte_4B32F8 = (db)0x83;
db byte_4B3330 = (db)0x83;
db aLeri[20000] = "LERI";
db asc_4B3384[20000] = ">>";
db asc_4B3388[20000] = ">>";
db byte_4B338C = (db)0x81;
db byte_4B3390 = (db)0x81;
db aDemoS[20000] = "Demo\%s";
db aMisuzuEndTxt[20000] = "Misuzu_End.txt";
db aStageStage02dD[20000] = "Stage\Stage%02d.dat";
db aGraphicHeadBmp[20000] = "Graphic\Head.bmp";
dw word_4B33D4 = (dw)0x8A83;
dw word_4B3400 = (dw)0x8A83;
dw word_4B342C = (dw)0x0B082;
dw word_4B3450 = (dw)0x5E83;
db byte_4B3480 = (db)0x82;
db byte_4B348C = (db)0x82;
db byte_4B349C = (db)0x83;
db byte_4B34A8 = (db)0x82;
db byte_4B34B0 = (db)0x82;
db byte_4B34B8 = (db)0x82;
db byte_4B34BC = (db)0x82;
db byte_4B34C0 = (db)0x82;
db byte_4B34C4 = (db)0x82;
db byte_4B34C8 = (db)0x82;
db byte_4B34CC = (db)0x82;
db byte_4B34D0 = (db)0x82;
db byte_4B34D4 = (db)0x82;
db byte_4B34D8 = (db)0x83;
db byte_4B34DC = (db)0x83;
db byte_4B34E0 = (db)0x83;
db byte_4B34E4 = (db)0x83;
db byte_4B34E8 = (db)0x83;
db byte_4B34EC = (db)0x83;
db byte_4B34F0 = (db)0x83;
db byte_4B34F4 = (db)0x83;
db byte_4B34F8 = (db)0x82;
db byte_4B34FC = (db)0x83;
db aSS[20000] = "%s%s";
dw word_4B3508 = (dw)0x6082;
db byte_4B350A = (db)0;
dw word_4B350C = (dw)0x6182;
db byte_4B350E = (db)0;
dw word_4B3510 = (dw)0x6282;
db byte_4B3512 = (db)0;
dw word_4B3514 = (dw)0x6382;
db byte_4B3516 = (db)0;
db aD_10[20000] = "%d>";
db byte_4B351C = (db)0x83;
db byte_4B3538 = (db)0x82;
db byte_4B3540 = (db)0x82;
dd dword_4B3548 = (dd)0x6F826782;
db byte_4B354C = (db)0;
dd dword_4B3550 = (dd)0x0B582A082;
dd dword_4B3554 = (dd)0x0B482ED82;
db byte_4B3558 = (db)0;
dd dword_4B355C = (dd)0x0ED82C482;
dw word_4B3560 = (dw)0x0B482;
db byte_4B3562 = (db)0;
dd dword_4B3564 = (dd)0x0B082C882;
dd dword_4B3568 = (dd)0x0B482ED82;
db byte_4B356C = (db)0;
dd dword_4B3570 = (dd)0x0AB82D482;
db byte_4B3574 = (db)0;
dd dword_4B3578 = (dd)0x0AB82D482;
dd dword_4B357C = (dd)0x0B082C882;
db byte_4B3580 = (db)0;
dd dword_4B3584 = (dd)0x0A482DA82;
dd dword_4B3588 = (dd)0x0E582AC82;
db byte_4B358C = (db)0;
dd dword_4B3590 = (dd)0x0CE82B782;
dd dword_4B3594 = (dd)0x0B382E282;
db byte_4B3598 = (db)0;
dd dword_4B359C = (dd)0x0CB82CE82;
db byte_4B35A0 = (db)0;
dd dword_4B35A4 = (dd)0x0CE82E882;
dd dword_4B35A8 = (dd)0x0B7825B81;
db byte_4B35AC = (db)0;
db a3d_16[20000] = "%3d";
db byte_4B35B4 = (db)0x81;
db byte_4B35C0 = (db)0x82;
db byte_4B35D0 = (db)0x83;
db asc_4B35F0[20000] = "><";
db asc_4B3608[20000] = "<>";
db byte_4B362C = (db)0x83;
db a2d2d[20000] = "%2d/%2d";
db byte_4B3654 = (db)0x82;
db byte_4B366C = (db)0x82;
db byte_4B3680 = (db)0x82;
db byte_4B3698 = (db)0x82;
db aGraphicCheergi[20000] = "Graphic\CheerGirl_Face.bmp";
db aGraphicCheergi_0[20000] = "Graphic\CheerGirl_Select.bmp";
db aKkTeamTxt[20000] = "kk_team.txt";
db aStart_4[20000] = "#START";
db aEnd_0[20000] = "#END";
db aStart_5[20000] = "#START";
db aEnd_1[20000] = "#END";
db aGraphicBody02d_2[20000] = "Graphic\Body%02d.bmp";
db aGraphic02dppal_0[20000] = "Graphic\%02dpPalette.bin";
db aUndoukaiCharse[20000] = "undoukai_charsel.wav";
db aDD[20000] = "%d/%d";
db byte_4B376C = (db)0x82;
db byte_4B3778 = (db)0x82;
db Format[20000] = "HP %3d/%3d";
dd dword_4B37B4 = (dd)0x0ED82C482;
dw word_4B37B8 = (dw)0x0B482;
db byte_4B37BA = (db)0;
dd dword_4B37BC = (dd)0x0B582A082;
dd dword_4B37C0 = (dd)0x0B482ED82;
db byte_4B37C4 = (db)0;
dd dword_4B37C8 = (dd)0x0B082C882;
dd dword_4B37CC = (dd)0x0B482ED82;
db byte_4B37D0 = (db)0;
dd dword_4B37D4 = (dd)0x0AB82D482;
db byte_4B37D8 = (db)0;
dd dword_4B37DC = (dd)0x0AB82D482;
dd dword_4B37E0 = (dd)0x0B082C882;
db byte_4B37E4 = (db)0;
dd dword_4B37E8 = (dd)0x0A482DA82;
dd dword_4B37EC = (dd)0x0E582AC82;
db byte_4B37F0 = (db)0;
dd dword_4B37F4 = (dd)0x0CE82B782;
dd dword_4B37F8 = (dd)0x0B382E282;
db byte_4B37FC = (db)0;
dd dword_4B3800 = (dd)0x0CB82CE82;
db byte_4B3804 = (db)0;
dd dword_4B3808 = (dd)0x0CE82E882;
dd dword_4B380C = (dd)0x0B7825B81;
db byte_4B3810 = (db)0;
db a3d_17[20000] = "%3d";
db byte_4B3818 = (db)0x81;
db byte_4B3824 = (db)0x82;
db aDemoKkResult1T[20000] = "Demo\KK_Result1.txt";
db aCheergirlsWav[20000] = "CheerGirls.wav";
db aD_0[20000] = "%d";
db byte_4B385C = (db)0x88;
db a3d_18[20000] = "%3d";
db byte_4B3864 = (db)0x93;
db aGraphicCheergi_1[20000] = "Graphic\CheerGirl_Palette%02d.bin";
db aS_6[20000] = "%s";
db aGraphicKkResul[20000] = "Graphic\KK_Result2.bmp";
db pszFileName[20000] = "Sound\Cheer&Whistle.wav";
db aKkResult1Wav[20000] = "KK_Result1.wav";
db aKkResult2Wav[20000] = "KK_Result2.wav";
db byte_4B38E4 = (db)0x82;
db byte_4B38F4 = (db)0x82;
db byte_4B3914 = (db)0x82;
db byte_4B392C = (db)0x82;
db byte_4B3944 = (db)0x82;
db a4d_0[20000] = "%4d";
db byte_4B3964 = (db)0x93;
db byte_4B3968 = (db)0x82;
db byte_4B39D8 = (db)0x82;
db aDemoKkResult3T[20000] = "Demo\KK_Result3.txt";
db a1st_0[20000] = "*1st";
db a2nd_0[20000] = "*2nd";
db a3rd_0[20000] = "*3rd";
db aDemoKkResult3T_0[20000] = "Demo\KK_Result3.txt";
db aGraphicKkResul_0[20000] = "Graphic\KK_Result3_Body%02d.bmp";
db byte_4B3AB8 = (db)0x82;
db byte_4B3B1C = (db)0x82;
db byte_4B3B28 = (db)0x82;
db byte_4B3B34 = (db)0x82;
db byte_4B3B44 = (db)0x82;
db byte_4B3B54 = (db)0x82;
db byte_4B3B64 = (db)0x82;
db byte_4B3B74 = (db)0x82;
db byte_4B3B80 = (db)0x82;
db byte_4B3B8C = (db)0x82;
dw word_4B3B98 = (dw)0x4F82;
db byte_4B3B9A = (db)0;
dw word_4B3B9C = (dw)0x5082;
db byte_4B3B9E = (db)0;
dw word_4B3BA0 = (dw)0x5182;
db byte_4B3BA2 = (db)0;
dw word_4B3BA4 = (dw)0x5282;
db byte_4B3BA6 = (db)0;
dw word_4B3BA8 = (dw)0x5382;
db byte_4B3BAA = (db)0;
dw word_4B3BAC = (dw)0x5482;
db byte_4B3BAE = (db)0;
dw word_4B3BB0 = (dw)0x5582;
db byte_4B3BB2 = (db)0;
dw word_4B3BB4 = (dw)0x5682;
db byte_4B3BB6 = (db)0;
dw word_4B3BB8 = (dw)0x5782;
db byte_4B3BBA = (db)0;
dw word_4B3BBC = (dw)0x5882;
db byte_4B3BBE = (db)0;
db byte_4B3BC0 = (db)0x81;
db byte_4B3BC4 = (db)0x93;
db aS_7[20000] = "%s";
db byte_4B3BD8 = (db)0x81;
db byte_4B3BE0 = (db)0x82;
db byte_4B3BEC = (db)0x83;
db byte_4B3C1C = (db)0x82;
db byte_4B3C28 = (db)0x83;
db byte_4B3C34 = (db)0x82;
db byte_4B3C40 = (db)0x82;
db byte_4B3CB0 = (db)0x82;
db aGraphicStagese_0[20000] = "Graphic\StageSelect.bmp";
db aStageStage02dS_0[20000] = "Stage\Stage%02d_Select.bmp";
db aStageStage02dB_0[20000] = "Stage\Stage%02d.bmp";
db byte_4B3D54 = (db)0x83;
db asc_4B3D68[20000] = ">>";
db aD_11[20000] = "%d";
db byte_4B3D70 = (db)0x83;
db byte_4B3D7C = (db)0x83;
db aD_12[20000] = "%d";
db aS_8[20000] = "%s";
db byte_4B3D90 = (db)0x83;
db byte_4B3D9C = (db)0x83;
db aS_9[20000] = "%s";
db a02d_1[20000] = "%02d";
db byte_4B3DB8 = (db)0x83;
db byte_4B3DE4 = (db)0x82;
db byte_4B3E00 = (db)0x82;
db aDemoKkEndTxt[20000] = "Demo\KK_End.txt";
db aKkEndWav[20000] = "KK_End.wav";
db aDdEnddemoTxt[20000] = "DD_EndDemo.txt";
db unk_4B3E50 = (db)0x83;
db byte_4B3E6C = (db)0x82;
db byte_4B3E8C = (db)0x82;
db byte_4B3ED4 = (db)0x82;
db byte_4B3F08 = (db)0x82;
db byte_4B3F50 = (db)0x83;
db byte_4B3F78 = (db)0x82;
db byte_4B3FA4 = (db)0x82;
db byte_4B3FE0 = (db)0x83;
db byte_4B4018 = (db)0x82;
db byte_4B405C = (db)0x82;
db byte_4B4098 = (db)0x82;
db byte_4B40D4 = (db)0x82;
int* funcs_476478[20000] = { (int*)sub_47628F };
db byte_4B4154 = (db)0x0A;
db byte_4B4158[20000];
db byte_4B4159[20000];
db byte_4B443C[20000];
db byte_4B443D[20000];
db byte_4B4530[20000];
db byte_4B4531[20000];
db byte_4B4624[20000];
db byte_4B4625[20000];
db byte_4B4644[20000];
db byte_4B4645[20000];
db unk_4B4664 = (db)0x82;
db unk_4B46C0 = (db)0x82;
db unk_4B4E74 = (db)0x24;
db unk_4B4F88 = (db)0x83;
db unk_4B5800 = (db)0x82;
db aGraphic02dppal_1[20000] = "Graphic\%02dpPalette.bin";
db aGraphicSpcharg[20000] = "Graphic\SpCharGraphic%02d.txt";
db String1[20000] = "#GRAPHICSTART";
db aGraphicend[20000] = "#GRAPHICEND";
db aGraphic02dppal_2[20000] = "Graphic\%02dpPalette.bin";
db aSpecialmovelis[20000] = "SpecialMoveList.txt";
db unk_4B5B70 = (db)0x82;
dw word_4B5B74 = (dw)0x4120;
db byte_4B5B76 = (db)0;
dw word_4B5B78 = (dw)0x4220;
db byte_4B5B7A = (db)0;
dw word_4B5B7C = (dw)0x4241;
db byte_4B5B7E = (db)0;
dw word_4B5B80 = (dw)0x4F20;
db byte_4B5B82 = (db)0;
db a2d2d_0[20000] = "%2d/%2d";
db unk_4B5B90 = (db)0x20;
db unk_4B5B9C = (db)0x20;
db unk_4B5BBC = (db)0x20;
db aS_0[20000] = " %s,";
db asc_4B5BCC[20000] = " ";

db aGraphicHeadBmp_0[20000] = "Graphic\Head.bmp";
db aGraphic02dppal_3[20000] = "Graphic\%02dpPalette.bin";
db aKdIni[20000] = "KD.ini";
db aSS_0[20000] = "%s\%s";
db aChardataTxt[20000] = "CharData.txt";
db aStart_6[20000] = "#START";
db aEnd_2[20000] = "#END";
db aStart_7[20000] = "#START";
db aEnd_3[20000] = "#END";
db aDataCheergirld[20000] = "Data\CheerGirlData.txt";
db aStart_8[20000] = "#START";
db aEnd_4[20000] = "#END";
db aDef[20000] = "#DEF";
db aDefend_0[20000] = "#DEFEND";
db aDemoKkResult1T_0[20000] = "Demo\KK_Result1.txt";
db a1st_1[20000] = "*1st";
db a2nd_1[20000] = "*2nd";
db a3rd_1[20000] = "*3rd";
db aBiri_0[20000] = "*Biri";
db aStart_9[20000] = "#START";
db aEnd_5[20000] = "#END";
db aWpgraphic[20000] = "WpGraphic  ";
db aGraphicSkincol[20000] = "Graphic\SkinColor.txt";
db aEnd_6[20000] = "#END";
db aStart_10[20000] = "#START";
db aStart_11[20000] = "#START";
db aSDataWeapontpD[20000] = "%s\Data\WeaponTP.dat";
db aSDataWeaponcgD[20000] = "%s\Data\WeaponCG.dat";
db aSDataTilepat02[20000] = "%s\Data\TilePat%02d.dat";
db aSDataChargraph[20000] = "%s\Data\CharGraphic%02d.dat";
db aSDataMisuzuTpD[20000] = "%s\Data\misuzu_tp.dat";
db aSDataMisuzuCgD[20000] = "%s\Data\misuzu_cg.dat";
db aSDataDoubleDra[20000] = "%s\Data\Double_Dragon_TP.dat";
db aSDataDoubleDra_0[20000] = "%s\Data\Double_Dragon_CG.dat";
db aGraphic02dppal_4[20000] = "Graphic\%02dpPalette.bin";
db aGraphicCharsel[20000] = "Graphic\CharSelBody.bmp";
db aGraphicCharsel_0[20000] = "Graphic\CharSelBody.bmp";
db aGraphic02dppal_5[20000] = "Graphic\%02dpPalette.bin";
db aGraphicFont00B[20000] = "Graphic\Font00.bmp";
db aError_13[20000] = "Error";
db byte_4B5E58 = (db)0x83;
db aGraphicFont01B[20000] = "Graphic\Font01.bmp";
db aError_14[20000] = "Error";
db byte_4B5E9C = (db)0x83;
db aGraphicDamagef[20000] = "Graphic\DamageFont.bmp";
db aError_15[20000] = "Error";
db byte_4B5EE4 = (db)0x83;
db aGraphicSystem0_2[20000] = "Graphic\System04.bmp";
db aError_16[20000] = "Error";
db byte_4B5F34 = (db)0x83;
db aGraphicSystem0_3[20000] = "Graphic\System04.bmp";
db aError_17[20000] = "Error";
db byte_4B5F80 = (db)0x83;
db aGraphicSystem0_4[20000] = "Graphic\System04.bmp";
db aError_18[20000] = "Error";
db byte_4B5FD0 = (db)0x83;
db aGraphicEffect0[20000] = "Graphic\Effect01.bmp";
db aError_19[20000] = "Error";
db byte_4B6020 = (db)0x83;
db aGraphicEffect0_0[20000] = "Graphic\Effect01.bmp";
db aError_20[20000] = "Error";
db byte_4B6070 = (db)0x83;
db aGraphicEffect0_1[20000] = "Graphic\Effect01.bmp";
db aError_21[20000] = "Error";
db byte_4B60C0 = (db)0x83;
db aGraphicEffect0_2[20000] = "Graphic\Effect01.bmp";
db aError_22[20000] = "Error";
db byte_4B6110 = (db)0x83;
db aGraphicEffect0_3[20000] = "Graphic\Effect01.bmp";
db aError_23[20000] = "Error";
db byte_4B6160 = (db)0x83;
db aGraphicSystem0_5[20000] = "Graphic\System01_S.bmp";
db aGraphicSystem0_6[20000] = "Graphic\System01.bmp";
db aError_24[20000] = "Error";
db byte_4B61C8 = (db)0x83;
db aGraphicSystem0_7[20000] = "Graphic\System02.bmp";
db aError_25[20000] = "Error";
db byte_4B6210 = (db)0x83;
db aGraphicSystem0_8[20000] = "Graphic\System02.bmp";
db aError_26[20000] = "Error";
db byte_4B6258 = (db)0x83;
db aGraphicSystem0_9[20000] = "Graphic\System02.bmp";
db aError_27[20000] = "Error";
db byte_4B62AC = (db)0x83;
db aGraphicSystem0_10[20000] = "Graphic\System02.bmp";
db aError_28[20000] = "Error";
db byte_4B6304 = (db)0x83;
db aGraphicSystem0_11[20000] = "Graphic\System02.bmp";
db aError_29[20000] = "Error";
db byte_4B635C = (db)0x8D;
db aGraphicSystem0_12[20000] = "Graphic\System02.bmp";
db aError_30[20000] = "Error";
db byte_4B63A0 = (db)0x8D;
db aGraphicShadowB[20000] = "Graphic\Shadow.bmp";
db aError_31[20000] = "Error";
db byte_4B63E0 = (db)0x89;
db aGraphicRectBmp[20000] = "Graphic\Rect.bmp";
db aError_32[20000] = "Error";
db byte_4B6420 = (db)0x94;
db aGraphicFaceBmp[20000] = "Graphic\Face.bmp";
db aError_33[20000] = "Error";
db byte_4B6460 = (db)0x8A;
db aGraphicSystem0_13[20000] = "Graphic\System03.bmp";
db aError_34[20000] = "Error";
db byte_4B64A4 = (db)0x83;
db aGraphicStagese_1[20000] = "Graphic\StageSelect.bmp";
db aError_35[20000] = "Error";
db byte_4B64FC = (db)0x83;
db aGraphicItemBmp[20000] = "Graphic\Item.bmp";
db aError_36[20000] = "Error";
db byte_4B6554 = (db)0x83;
db aGraphicWeaponB[20000] = "Graphic\Weapon.bmp";
db aError_37[20000] = "Error";
db byte_4B65A4 = (db)0x95;
db aSoundCursourWa[20000] = "Sound\Cursour.wav";
db aSoundClickWav[20000] = "Sound\Click.wav";
db aSoundJumpWav[20000] = "Sound\Jump.wav";
db aSoundKaraburiW[20000] = "Sound\Karaburi.wav";
db aSoundHit01Wav[20000] = "Sound\Hit01.wav";
db aSoundHit02Wav[20000] = "Sound\Hit02.wav";
db aSoundDown01Wav[20000] = "Sound\Down01.wav";
db aSoundSlidingWa[20000] = "Sound\Sliding.wav";
db aSoundTsukamiWa[20000] = "Sound\Tsukami.wav";
db aSoundHit03Wav[20000] = "Sound\Hit03.wav";
db aSoundTsukitoba[20000] = "Sound\Tsukitobasi.wav";
db aSoundGuard01Wa[20000] = "Sound\Guard01.wav";
db aSoundDown03Wav[20000] = "Sound\Down03.wav";
db aSoundGoodbyWav[20000] = "Sound\GoodBy.wav";
db aSoundExplosion[20000] = "Sound\Explosion01.wav";
db aSoundSpecial01[20000] = "Sound\Special01.wav";
db aSoundSpecial02[20000] = "Sound\Special02.wav";
db aSoundSpecial03[20000] = "Sound\Special03.wav";
db aSoundSpecial04[20000] = "Sound\Special04.wav";
db aSoundDown02Wav[20000] = "Sound\Down02.wav";
db aSoundTaihouWav[20000] = "Sound\Taihou.wav";
db aSoundSpecial05[20000] = "Sound\Special05.wav";
db aSoundSpecial06[20000] = "Sound\Special06.wav";
db aSoundSpecial07[20000] = "Sound\Special07.wav";
db aSoundHit04Wav[20000] = "Sound\Hit04.wav";
db aSoundSpecial08[20000] = "Sound\Special08.wav";
db aSoundHit05Wav[20000] = "Sound\Hit05.wav";
db aSoundSpecial09[20000] = "Sound\Special09.wav";
db aSoundSpecial10[20000] = "Sound\Special10.wav";
db aSoundSpecial11[20000] = "Sound\Special11.wav";
db aSoundWeaponget[20000] = "Sound\WeaponGet.wav";
db aSoundBound01Wa[20000] = "Sound\Bound01.wav";
db aSoundBound02Wa[20000] = "Sound\Bound02.wav";
db aSoundBound03Wa[20000] = "Sound\Bound03.wav";
db aSoundBound04Wa[20000] = "Sound\Bound04.wav";
db aSoundKaraburi2[20000] = "Sound\Karaburi2.wav";
db aSoundBound05Wa[20000] = "Sound\Bound05.wav";
db aSoundSpecial12[20000] = "Sound\Special12.wav";
db aSoundSpecial13[20000] = "Sound\Special13.wav";
db aSoundSpecial14[20000] = "Sound\Special14.wav";
db aSoundSpecial15[20000] = "Sound\Special15.wav";
db aSoundSpecial16[20000] = "Sound\Special16.wav";
db aSoundSpecial17[20000] = "Sound\Special17.wav";
db aSoundSpecial18[20000] = "Sound\Special18.wav";
db aSoundSpecial19[20000] = "Sound\Special19.wav";
db aSoundSpecial20[20000] = "Sound\Special20.wav";
db aSoundCommand01[20000] = "Sound\Command01.wav";
db aSoundSpecial21[20000] = "Sound\Special21.wav";
db aSoundHit06Wav[20000] = "Sound\Hit06.wav";
db aSoundHit07Wav[20000] = "Sound\Hit07.wav";
db aSoundExplosion_0[20000] = "Sound\Explosion02.wav";
db aSoundDashWav[20000] = "Sound\Dash.wav";
db aSoundBound06Wa[20000] = "Sound\Bound06.wav";
db aSoundThrow01Wa[20000] = "Sound\Throw01.wav";
db aSoundLvupWav[20000] = "Sound\LvUp!!.wav";
db aSoundCheerWav[20000] = "Sound\Cheer.wav";
db aSoundHit08Wav[20000] = "Sound\Hit08.wav";
db aSoundSupercomb[20000] = "Sound\SuperCombo.wav";
db aSoundSplashdow[20000] = "Sound\SplashDown.wav";
db aSoundTeleportW[20000] = "Sound\Teleport.wav";
db pszFaceName = (db)0x82;
db aD_13[20000] = "%d";
db aDD_0[20000] = "%d,%d";
db aKdIni_0[20000] = "KD.ini";
db aSS_1[20000] = "%s\%s";
db aLegendOfBurnin[20000] = "Legend of Burning Fighters";
db WindowName[20000] = "Legend of Burning Fighters";
db ClassName[20000] = "Legend of Burning Fighters";
db aLegendOfBurnin_2[20000] = "Legend of Burning Fighters";
db aLegendOfBurnin_3[20000] = "Legend of Burning Fighters";
db aError_38[20000] = "Error";
db byte_4B6B34 = (db)0x83;
db aS_10[20000] = "%s";
db aS_11[20000] = "%s";
db aD_14[20000] = "%d";
db asc_4B6B6C[20000] = ">>";
db byte_4B6B70 = (db)0x81;
db byte_4B6B74 = (db)0x81;
db byte_4B6B78 = (db)0x82;
db unk_4B6B8C = (db)0x83;
db byte_4B6BA0 = (db)0x82;
db byte_4B6BB4 = (db)0x83;
db unk_4B6BC8 = (db)0x82;
db byte_4B6BD8 = (db)0x83;
db byte_4B6BEC = (db)0x82;
db unk_4B6BFC = (db)0x82;
db byte_4B6C08 = (db)0x82;
db unk_4B6C1C = (db)0x82;
db byte_4B6C28 = (db)0x82;
db unk_4B6C38 = (db)0x82;
db byte_4B6C4C = (db)0x82;
db byte_4B6C5C = (db)0x83;
db unk_4B6C70 = (db)0x82;
db byte_4B6C7C = (db)0x82;
db unk_4B6C8C = (db)0x82;
db byte_4B6CA0 = (db)0x82;
db byte_4B6CB8 = (db)0x83;
db aKdMapdata[20000] = "KD_MAPDATA";
db unk_4B6CD4 = (db)2;
db aPosDSizeD[20000] = " pos %d size %d ";
db byte_4B6CED[20000];
db aKdReplayFile[20000] = "KD_Replay_File";
db aKdReplayFile_0[20000] = "KD_Replay_File";
db byte_4B6D18 = (db)0x82;
db aD_15[20000] = "%d";
db byte_4B6D3C = (db)0x90;
db aD_16[20000] = "%d";
db byte_4B6D44 = (db)0x90;
db aD_17[20000] = "%d";
db byte_4B6D4C = (db)0x90;
db asc_4B6D50[20000] = ">>";
db byte_4B6D54 = (db)0x82;
db byte_4B6D6C = (db)0x82;
db byte_4B6D78 = (db)0x82;
db byte_4B6D84 = (db)0x82;
db byte_4B6D8C = (db)0x82;
db byte_4B6D98 = (db)0x82;
db a3d_19[20000] = "%3d";
db byte_4B6DA8 = (db)0x90;
db asc_4B6DAC[20000] = ">>";
db athisx[20000] = "*thisx";
db aS_12[20000] = "%s ";
db byte_4B6DD4 = (db)0x83;
db aStage02dWav[20000] = "Stage%02d.wav";
db aStageStage02dB_1[20000] = "Stage\Stage%02d.bmp";
db aError_39[20000] = "Error";
db byte_4B6E10 = (db)0x90;
db aStageStage02dD_0[20000] = "Stage\Stage%02d.dat";
db aStageStage02dO[20000] = "Stage\Stage%02d_Obj.txt";
db aInit[20000] = "#INIT";
db aInitend[20000] = "#INITEND";
db aLoadbmp[20000] = "LoadBmp";
db aS_1[20000] = "%s";
db aEntrypat[20000] = "EntryPat";
db aN_0[20000] = "n";
db aLoadchargraphi[20000] = "LoadCharGraphic";
db aN_1[20000] = "n";
db aLoadcgtp[20000] = "LoadCGTP";
db aN_2[20000] = "n";
db aStartpos[20000] = "StartPos";
db aStartline[20000] = "StartLine";
db aLoadbackbmp[20000] = "LoadBackBmp";
db aNextdemofilena[20000] = "NextDemoFileName";
db aCopypalettes[20000] = "CopyPalettes";
db aN_3[20000] = "n";
db aBgmfilename[20000] = "BgmFileName";
db aString[20000] = "#STRING";
db aStringend[20000] = "#STRINGEND";
db aString_0[20000] = "#STRING";
db aSound[20000] = "#SOUND";
db aSoundend[20000] = "#SOUNDEND";
db aSound_0[20000] = "#SOUND";
db aMove[20000] = "#MOVE";
db aMoveend[20000] = "#MOVEEND";
db aPut[20000] = "#PUT";
db aPutend[20000] = "#PUTEND";
db aPut_0[20000] = "#PUT";
db aPutend_0[20000] = "#PUTEND";
db aEtcdata[20000] = "#ETCDATA";
db aEtcdataend[20000] = "#ETCDATAEND";
db aStageStage02dD_1[20000] = "Stage\Stage%02d.dat";
db aMove_0[20000] = "#MOVE";
db aMoveend_0[20000] = "#MOVEEND";
db aStage00Wav[20000] = "Stage00.wav";
db aStageStage02dD_2[20000] = "Stage\Stage%02d_data.txt";
db aHelp_0[20000] = "#HELP";
db aName[20000] = "#NAME";
db unk_4B6FF8 = (db)0x82;
db byte_4B7028 = (db)0x82;
db unk_4B7034 = (db)0x82;
db byte_4B7044 = (db)0x82;
db unk_4B7064 = (db)0x83;
db byte_4B7078 = (db)0x82;
db byte_4B7094 = (db)0x82;
db byte_4B70A0 = (db)0x82;
db byte_4B70B8 = (db)0x82;
db unk_4B70D4 = (db)0x82;
db byte_4B70E4 = (db)0x82;
db unk_4B70FC = (db)0x82;
db byte_4B7108 = (db)0x82;
db unk_4B7118 = (db)0x82;
db byte_4B7124 = (db)0x82;
db aD_18[20000] = "%d";
db aVs[20000] = "VS";
db aDp_4[20000] = "%dP";
db asc_4B7140[20000] = ">>";
db byte_4B7144 = (db)0x82;
db byte_4B7164 = (db)0x83;
db aD_19[20000] = "%d";
db aD_20[20000] = "%d";
db aVs_0[20000] = "VS";
db byte_4B717C = (db)0x81;
dd dword_4B7180[20000];
dd dword_4B719C[20000];
db aType2dDhD[20000] = "TYPE:%2d,DH:%d";
db aV5d5d5dG3d3d3d[20000] = "V(%5d,%5d,%5d) G(%3d,%3d,%3d)";
db aParent2d[20000] = "PARENT:%2d";
db aError_40[20000] = "Error";
db aDdrawerror[20000] = "DDrawError";
db aDirectdrawObje[20000] = "DirectDraw object ";
db aDdrawerror_0[20000] = "DDrawError";
db aQueryinterface[20000] = "QueryInterface ";
db aDdrawerror_1[20000] = "DDrawError";
db byte_4B749C = (db)0x8B;
db aError03[20000] = "ERROR03";
db byte_4B74C8 = (db)0x95;
db aNot16bit[20000] = "Not16bit";
db byte_4B74F8 = (db)0x89;
db aError04[20000] = "ERROR04";
db byte_4B7528 = (db)0x83;
db aError05[20000] = "ERROR05";
db byte_4B7564 = (db)0x83;
db aError_41[20000] = "Error";
db byte_4B75A0 = (db)0x83;
db byte_4B75D4 = (db)0x83;
db aClienttoscreen[20000] = "ClientToScreen";
db byte_4B75FC = (db)0x83;
db aMPddssysscGetd[20000] = "m_pDDSSysSc->GetDC";
db aError01[20000] = "ERROR01";
db unk_4B7628 = (db)0x83;
db aEntrypaterror[20000] = "EntryPatError";
db unk_4B7640 = (db)0x95;
db unk_4B7664 = (db)0x83;
db aEntrypaterror_0[20000] = "EntryPatError";
db aError_42[20000] = "Error";
db byte_4B76AC = (db)0x83;
db aError_43[20000] = "Error";
db byte_4B76CC = (db)0x83;
db aError_44[20000] = "Error";
db byte_4B7710 = (db)0x83;
db aError_45[20000] = "Error";
db byte_4B7720 = (db)0x83;
db aError_46[20000] = "Error";
db byte_4B7758 = (db)0x83;
db aError_47[20000] = "Error";
db byte_4B779C = (db)0x82;
db aError_48[20000] = "Error";
db byte_4B77C0 = (db)0x82;
db aError_49[20000] = "Error";
db byte_4B77E8 = (db)0x95;
db aError_50[20000] = "Error";
db byte_4B7818 = (db)0x90;
db aError06[20000] = "ERROR06";
db unk_4B7854 = (db)0x83;
db aError07[20000] = "ERROR07";
db unk_4B7880 = (db)0x82;
db aError07_0[20000] = "ERROR07";
db unk_4B78A8 = (db)0x83;
db aError07_1[20000] = "ERROR07";
db unk_4B78D4 = (db)0x83;
db aError07_2[20000] = "ERROR07";
db unk_4B7900 = (db)0x83;
db aError07_3[20000] = "ERROR07";
db aGeneric[20000] = "GENERIC";
db aError07_4[20000] = "ERROR07";
db aInvalidobject[20000] = "INVALIDOBJECT";
db aError07_5[20000] = "ERROR07";
db aInvalidparams[20000] = "INVALIDPARAMS";
db aError07_6[20000] = "ERROR07";
db aInvalidpixelfo[20000] = "INVALIDPIXELFORMAT";
db aError_51[20000] = "Error";
db byte_4B7988 = (db)0x83;
db aError_52[20000] = "Error";
db byte_4B79A8 = (db)0x83;
db aError_53[20000] = "Error";
db aImg[20000] = "IMG ";
db aError_54[20000] = "Error";
db byte_4B79F8 = (db)0x83;
db aError_55[20000] = "ERROR";
db byte_4B7A28 = (db)0x93;
db aEntrypat_0[20000] = "EntryPat ";
db byte_4B7A58 = (db)0x8E;
db aEntrypat_1[20000] = "EntryPat ";
db aI[20000] = "i ";
db aEntrypat_2[20000] = "EntryPat ";
db aBitmap[20000] = "BitMap ";
db aEntrypat_3[20000] = "EntryPat ";
db byte_4B7AEC = (db)0x83;
db aEntrypat_4[20000] = "EntryPat ";
db aCutbit[20000] = "CutBit ";
db aEntrypat_5[20000] = "EntryPat ";
db aEntrybit[20000] = "EntryBit ";
db aEntrypat_6[20000] = "EntryPat ";
db aEntrybit2[20000] = "EntryBit2 ";
db aError_56[20000] = "ERROR";
db unk_4B7BBC = (db)0x93;
db unk_4B7BD8 = (db)0x45;
db unk_4B7BEC = (db)0x83;
db aError_57[20000] = "ERROR";
db unk_4B7C1C = (db)0x50;
db aError_58[20000] = "Error";
db byte_4B7C38 = (db)0x83;
db aError_59[20000] = "Error";
db byte_4B7C60 = (db)0x83;
db aError_60[20000] = "ERROR";
db unk_4B7C70 = (db)0x50;
db aError_61[20000] = "Error";
db byte_4B7C8C = (db)0x83;
db aLpddsNull[20000] = "lpDDS = NULL";
db aMPddsbufNull[20000] = "m_pDDSbuf = NULL ";
db byte_4B7CE0 = (db)0x83;
db asc_4B7CF8[20000] = "%X";
db aError_62[20000] = "ERROR";
db unk_4B7D04 = (db)0x93;
db aGetdcFailed[20000] = "GetDC Failed!";
db aReleasedcFaile[20000] = "ReleaseDC Failed!";
db aError_63[20000] = "ERROR";
db unk_4B7D4C = (db)0x93;
db byte_4B7D68 = (db)0x83;
db byte_4B7DA4 = (db)0x82;
db byte_4B7DC0 = (db)0x82;
db byte_4B7DE0 = (db)0x83;
db aError_64[20000] = "ERROR";
db byte_4B7E10 = (db)0x93;
db aTypeDXDYDWDHDB[20000] = "type=%d, x=%d, y=%d, w=%d, h=%d, bw=%d, bh=%d";
db aEntrypat_7[20000] = "EntryPat ";
db byte_4B7E70 = (db)0x8E;
db aEntrypat_8[20000] = "EntryPat ";
db aI_0[20000] = "i ";
db aEntrypat_9[20000] = "EntryPat ";
db aBitmap_0[20000] = "BitMap ";
db aEntrypat_10[20000] = "EntryPat ";
db byte_4B7F04 = (db)0x83;
db aEntrypat_11[20000] = "EntryPat ";
db aCutbit_0[20000] = "CutBit ";
db aEntrypat_12[20000] = "EntryPat ";
db aEntrybit3[20000] = "EntryBit3 ";
db aLpddsNull_0[20000] = "lpDDS = NULL";
db unk_4B7FA8 = (db)0x6D;
db unk_4B7FCC = (db)0x83;
db aDderrInvalidre[20000] = "DDERR_INVALIDRECT";
db aDDDD[20000] = "( %d, %d ) - ( %d , %d )";
db asc_4B8014[20000] = "%X";
db aLockerrorDDDD[20000] = "LockError ( %d, %d )-( %d, %d )";
db aLockerror2[20000] = "LockError! 2";
db aLockerrorDDDD_0[20000] = "LockError ( %d, %d )-( %d, %d )";
db aLockerror2_0[20000] = "LockError! 2";
db aFillrect[20000] = "FillRect";
db byte_4B809C = (db)0x8E;
db aMPddsbackNull[20000] = "m_pDDSBack = NULL";
db aLockerrorDDDD_1[20000] = "LockError ( %d, %d )-( %d, %d )";
db aLockerror2DDDD[20000] = "LockError! 2 (%d,%d)-(%d,%d)";
db aError_65[20000] = "ERROR";
db unk_4B8100 = (db)0x83;
db aError_66[20000] = "ERROR";
db unk_4B8134 = (db)0x93;
db unk_4B8150 = (db)0x45;
db unk_4B8164 = (db)0x69;
db unk_4B8184 = (db)0x45;
db unk_4B8198 = (db)0x83;
db aIDEndDWDHD[20000] = "i=%d, end=%d, W=%d, H=%d";
db aError_67[20000] = "ERROR";
db unk_4B81E4 = (db)0x45;
db unk_4B81F8 = (db)0x45;
db aImagefile[20000] = "IMAGEmyFILE";
db aHandleIsNull[20000] = "handle is null";
db aDdcopybitmapFa[20000] = "ddcopybitmap failed";
db OutputString[20000] = "createcompatible dc failed";
db aLockResourceFa[20000] = "lock resource failed";
db dword_4B8284[20000];
dd dword_4B82A0 = (dd)1;
unsigned int (*off_4B82B8)() = _fpmath;
db unk_4B82D0 = (db)0x73;
db unk_4B82E0 = (db)0x63;
db aLog10[20000] = "log10";
void (*off_4B8300)(int a1) = _exit;
dd dword_4B8304 = (dd)2;
dd off_4B8314 = (dd)sub_4A3FCC;
int(__cdecl* off_4B8318)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
void (*off_4B831C)() = _fptrap;
void(*off_4B8320)() = _fptrap;
void(*off_4B8324)() = _fptrap;
void(*off_4B8328)() = _fptrap;
void(*off_4B832C)() = _fptrap;
dt tbyte_4B8330 = (dt)0;
dt tbyte_4B833A = (dt)1.570796;
dq dbl_4B8344 = (dq)1.0;
db unk_4B834D = (db)8;
db unk_4B8360 = (db)5;
dt tbyte_4B83B0 = (dt)0;
dt tbyte_4B83BA = (dt)0;
dt tbyte_4B83CE = (dt)32767.5;
dq dbl_4B83E2 = (dq)0.5;
dd __ctype = (dd)0x200000;
dd off_4B8414 = (dd)__ctype + 2;


dd cbMultiByte = (dd)1;
db byte_4B8624 = (db)0x2E;
dd Str = (dd)0;
dd off_4B8634 = (dd)aNull_0;
dd dword_4B8638 = (dd)0x0C0000005;
dd dword_4B863C = (dd)0x0B;
dd dword_4B86B0 = (dd)3;
dd dword_4B86B4 = (dd)7;
dd dword_4B86B8[20000];
char dword_4B86BC;
db unk_4B86C0 = (db)0x0FF;
dd dword_4B86D0[20000];
int byte_4B0BEC;
dd off_4B86D4 = (dd)0;
dd dword_4B8760 = (dd)0x3F8;
db unk_4B8768 = (db)0;
db unk_4B8780 = (db)0x80;
db byte_4B87A0[20000];
dd flt_4B87B0 = (dd)0.9375;
dd flt_4B87B4 = (dd)1.0625;
dd flt_4B87B8 = (dd)9.223372;
db byte_4B87BC[20000];
dq dbl_4B87D4 = (dq)1.844674;
dq dbl_4B87DC = (dq)5.421010862427522e-20;
dq dbl_4B87EC = (dq)0.5;
dt tbyte_4B87F4 = (dt)1.189713;
dd off_4B8900 = (dd)0;
db unk_4B8910 = (db)0;
db unk_4B8920 = (db)0;
db unk_4B8940 = (db)0;
db byte_4B8970 = (db)0;
db byte_4B8B80[20000];
db unk_4B8B88 = (db)0x0A4;
db unk_4B8B8C = (db)0x60;
db unk_4B8B98 = (db)0x0A6;
db unk_4B8C78 = (db)0;
dd dword_4B8D58 = (dd)0x2694;
dt tbyte_4B8D5C = (dt)2.356272;
dt tbyte_4B8D68 = (dt)1.914995;
dq dbl_4B8D78 = (dq)0;
dq dbl_4B8D80 = (dq)0;
dq dbl_4B8D88 = (dq)1.797693;
dq dbl_4B8D98 = (dq)-0.0;
db unk_4B8DA0 = (db)1;
dd dword_4B8DA4[20000];
db unk_4B8F08 = (db)0;
db unk_4B9068 = (db)0x0CD;
db byte_4B91D0 = (db)0;
db byte_4B91D1 = (db)0;
dd dword_4B91D4 = (dd)0;
db byte_4B91D8 = (db)0;
db byte_4B91D9 = (db)0;
dd dword_4B91DC = (dd)0;
dd dword_4B91E0 = (dd)0;
dd dword_4B91E4 = (dd)0;
dd dword_4B91E8 = (dd)0;
dd dword_4B91EC = (dd)0;
dd dword_4B91F0 = (dd)0;
dd dword_4B91F4 = (dd)0;
dd dword_4B91F8 = (dd)0;
dd dword_4B91FC = (dd)0;
dd dword_4B9200 = (dd)0;
dd dword_4B9204 = (dd)0;
dd dword_4B9208 = (dd)0;
dd dword_4B920C = (dd)0;
dd dword_4B9210 = (dd)0;
dd dword_4B9214 = (dd)0;
dd dword_4B9218 = (dd)0;
dd dword_4B921C = (dd)0;
char dword_4B9220[20000];
dd dword_4B9234 = (dd)0;
dd dword_4B9238 = (dd)0;
dd dword_4B9240 = (dd)0;
dd dword_4B9244 = (dd)0;
dd dword_4B9248 = (dd)0;
db unk_4B9250 = (db)0;
db unk_4B9290 = (db)0;
dd dword_4B92D0 = (dd)0;
dd dword_4B92D4 = (dd)0;
dd dword_4B92D8 = (dd)0;
dd dword_4B92DC = (dd)0;
dd dword_4B92E0 = (dd)0;
dd Size = (dd)0;
dd dword_4B92E8 = (dd)0;
dw word_4B92EC = (dw)0;
dd dword_4B92F0 = (dd)0;
dw word_4B92F4 = (dw)0;
dw word_4B92F8[20000];
db unk_4B92FA = (db)0;
dd dword_4B92FC[20000];
db unk_4B9300 = (db)0;
db unk_4B9304 = (db)0;
db unk_4B9306 = (db)0;
dd dword_4B9308[20000];
db unk_4B930C = (db)0;
dd dword_4B9310[1000];
dw word_4B9318[20000];
dd dword_4B9324[20000];
dd dword_4B9328[20000];
dd dword_4B9348[20000];
dd dword_4B9360 = (dd)0;
dd dword_4B9364 = (dd)0;
dd dword_4B9368 = (dd)0;
dd dword_4B936C = (dd)0;
dd dword_4B9370[1000];
dd dword_4B9380 = (dd)0;
dd dword_4B9394 = (dd)0;
dd dword_4B9398 = (dd)0;
dd Src = (dd)0;
dd dword_4B93A0 = (dd)0;
dd dword_4B93A4 = (dd)0;
dd dword_4B93A8 = (dd)0;
dd dword_4B93AC = (dd)0;
dd dword_4B93B0 = (dd)0;
db byte_4B93B4[20000];
db byte_4B93EC[20000];
db byte_4B93ED[20000];
db byte_4B93EE[20000];
db byte_4B93EF[20000];
int player_list[216] = {};
db Buffer[20000] = {};
db byte_4B9874[20000];
dd dword_4B9974 = (dd)0;
dd dword_4B9978 = (dd)0;
db byte_4B997C = (db)0;
dd dword_4B9980 = (dd)0;
db byte_4B9984 = (db)0;
db byte_4B9985 = (db)0;
db byte_4B9986 = (db)0;
db byte_4B9987 = (db)0;
db byte_4B9988[20000];
db byte_4B9990 = (db)0;
db byte_4B9998 = (db)0;
db byte_4B9999 = (db)0;
db byte_4B999A = (db)0;
int byte_4B999B[20000];
db byte_4B99A3[20000];
dw word_4B99AC[20000];
db byte_4B99C8 = (db)0;
db byte_4B99C9 = (db)0;
db byte_4B99CA = (db)0;
db byte_4B99CB = (db)0;
db byte_4B99CC = (db)0;
db byte_4B99CD = (db)0;
dw word_4B99CE[20000];
db byte_4B99DF = (db)0;
db byte_4B99E0 = (db)0;
dw word_4B99E4 = (dw)0;
db byte_4B99E6 = (db)0;
db byte_4B99E7 = (db)0;
db byte_4B99E8 = (db)0;
db byte_4B99E9 = (db)0;
dd dword_4B99EC = (dd)0;
dd dword_4B99F0 = (dd)0;
dd dword_4B99F4 = (dd)0;
dd dword_4B99F8 = (dd)0;
dd dword_4B99FC[20000];
dd dword_4B9A00 = (dd)0;
dd dword_4B9A04 = (dd)0;
dd dword_4B9A08 = (dd)0;
dd dword_4B9A0C = (dd)0;
dd dword_4B9A10 = (dd)0;
dd dword_4B9A14 = (dd)0;
dd dword_4B9A18 = (dd)0;
dd dword_4B9A1C = (dd)0;
dd dword_4B9A20 = (dd)0;
dd dword_4B9A24 = (dd)0;
dd dword_4B9A28 = (dd)0;
dd dword_4B9A2C = (dd)0;
dd dword_4B9A30 = (dd)0;
dd dword_4B9A34 = (dd)0;
dd dword_4B9A38 = (dd)0;
dd dword_4B9A3C = (dd)0;
dd dword_4B9A40 = (dd)0;
dd dword_4B9A44 = (dd)0;
dd dword_4B9A48 = (dd)0;
dd dword_4B9A4C = (dd)0;
dd dword_4B9A50 = (dd)0;
dd dword_4B9A54 = (dd)0;
dd dword_4B9A58 = (dd)0;
dd dword_4B9A5C = (dd)0;
dd dword_4B9A60 = (dd)0;
dd dword_4B9A64 = (dd)0;
dd dword_4B9A68 = (dd)0;
dd dword_4B9A6C = (dd)0;
dd dword_4B9A70 = (dd)0;
dd dword_4B9A74 = (dd)0;
dd dword_4B9A78 = (dd)0;
dd dword_4B9A7C = (dd)0;
dd dword_4B9A80 = (dd)0;
dd dword_4B9A84 = (dd)0;
dd dword_4B9A88 = (dd)0;
dd dword_4B9A8C = (dd)0;
dd dword_4B9A90 = (dd)0;
dd dword_4B9A94 = (dd)0;
dd dword_4B9A98 = (dd)0;
dd dword_4B9A9C = (dd)0;
dd dword_4B9AA0 = (dd)0;
dd dword_4B9AA4 = (dd)0;
dd dword_4B9AA8 = (dd)0;
dd dword_4B9AAC = (dd)0;
dd dword_4B9AB0 = (dd)0;
dd dword_4B9AB4 = (dd)0;
dd dword_4B9AB8 = (dd)0;
dd dword_4B9ABC = (dd)0;
dd dword_4B9AC0 = (dd)0;
dd dword_4B9AC4 = (dd)0;
dd dword_4B9AC8 = (dd)0;
dd dword_4B9ACC = (dd)0;
dd dword_4B9AD0 = (dd)0;
dd dword_4B9AD4;
dd dword_4B9AD8 = (dd)0;
dd dword_4B9ADC = (dd)0;
dd dword_4B9AE0 = (dd)0;
dd dword_4B9AE4 = (dd)0;
dd dword_4B9AE8 = (dd)0;
dd dword_4B9AEC[20000];
dd dword_4B9AF8 = (dd)0;
dd dword_4B9B08 = (dd)0;
int byte_4B9B10[20000];
dd dword_4BDB28[20000];
int byte_4BDC60[20000];
dd ho = (dd)0;
HWND hWnd;
dd dword_4CA1CC = (dd)0;
dd dword_4CA1D0 = (dd)0;
dd dword_4CA1D4 = (dd)0;
dd dword_4CA1D8 = (dd)0;
dd dword_4CA1E0 = (dd)0;
dd dword_4CA1E4 = (dd)0;
dd dword_4CA1E8 = (dd)0;
dd dword_4CA1EC = (dd)0;
dw word_4CA1F0[20000];
dw word_4CA1F2 = (dw)0;
dw word_4CA1F4 = (dw)0;
tagRECT rc = (tagRECT)0;
dw word_4CA208[20000];
db byte_4CA210[20000];
db byte_4CA211 = (db)0;
db byte_4CA212 = (db)0;
db byte_4CA214[20000];
db byte_4CA218[20000];
db byte_4CA219 = (db)0;
db byte_4CA21A = (db)0;
db byte_4CA21C[20000];
dw word_4CB21C = (dw)0;
dd dword_4CB220 = (dd)0;
dd dword_4CB224 = (dd)0;
dd dword_4CB228 = (dd)0;
//char Block[20000];
char* Block;
dd dword_4CB234 = (dd)0;
void* lp = 0;
dd dword_4CB23C = (dd)0;
void (*dword_4CB240)();
void (*dword_4CB244)();
dd dword_4CB248 = (dd)0;
db byte_4CB24C = (db)0;
dd dword_4CB250 = (dd)0;
db byte_4CB254 = (db)0;
dq dbl_4CB260 = (dq)0;
db byte_4CB268 = (db)0;
dd dword_4CB26C = (dd)0;
dd dword_4CB270 = (dd)0;
dd dword_4CB278 = (dd)0;
dd dword_4CB27C = 0;
dd dword_4CB280 = (dd)0;
dd dword_4CB284 = (dd)0;
dd dword_4CB288 = (dd)0;
dd dword_4CB28C = (dd)0;
dd dword_4CB294 = (dd)0;
dd dword_4CB2A4 = (dd)0;
db byte_4CB2AC = (db)0;
dd dword_4CB2B0 = (dd)0;
dd dword_4CB2B4 = (dd)0;
dd dword_4CB2B8 = (dd)0;
db Filename[20000];
dd dword_4CB3C0 = (dd)0;
dd dword_4CB3C4 = (dd)0;
//dd lpfn = (dd)0;
dd dword_4CB3CC = (dd)0;
int (*dword_4CB3D0)(_DWORD);
dw word_4CB3D8 = (dw)0;
db byte_4CB3DA = (db)0;
db unk_4CB3DC = (db)0;
dd dword_4CB3F8 = (dd)0;
dd dword_4CB3FC = (dd)0;
dd dword_4CB400 = (dd)0;
dd dword_4CB404 = (dd)0;
dd dword_4CB408;
dd dword_4CB40C = (dd)0;
dd dword_4CB410 = (dd)0;
dd dword_4CB414 = (dd)0;
dd dword_4CB418 = (dd)0;
dd dword_4CB41C = (dd)0;
dd dword_4CB420 = (dd)0;
dd dword_4CB424 = (dd)0;
dd dword_4CB428 = (dd)0;
dd dword_4CB42C = (dd)0;
dd dword_4CB434 = (dd)0;
dd dword_4CB440 = (dd)0;
dd CodePage = (dd)0;
dd dword_4CB458 = (dd)0;
db dword_4CB460[20000];
dd dword_4CB46C = (dd)0;
db byte_4CB480[20000];
db unk_4CB580 = (db)0;
db byte_4CB581[20000];
int Locale = 0;
dd dword_4CB688 = (dd)0;
db unk_4CB6A0 = (db)0;
dd Count = (dd)0;
dd dword_4CC6A4 = (dd)0;
dd dword_4CC6A8 = (dd)0;
dd dword_4CC6AC = (dd)0;
dd dword_4CC6B0 = (dd)0;
dd dword_4CC6B4 = (dd)0;
LPVOID lpMem;
HANDLE hHeap;
dd dword_4CC6C0[20000];
db unk_4CC6C4 = (db)0;
dd uNumber = (dd)0;
dd dword_4CC7C4 = (dd)0;
dd dword_4CC7C8 = (dd)0;
dd dword_4CC7CC = (dd)0;
dd dword_4CC7D0 = (dd)0;
void* dword_4CC7D4;


//
char dword_4B0000[28] = {0, 0, 0, 0, 0, 0, 0, 238, 53, 74, 0, 181, 144, 74, 0, 203, 150, 74, 0, 91, 101, 74, 0, 0, 0, 0, 0, 0};

char dword_4B001C[4] = {0, 0, 0, 238};

char First[20] = {0, 0, 0, 0, 0, 0, 0, 90, 145, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108};

char Last[4] = {0, 0, 0, 90};

char dword_4B0038[8] = {0, 0, 0, 0, 0, 0, 0, 108};

char dword_4B0040[4] = {0, 0, 0, 108};

char dword_4B0044[8] = {0, 0, 0, 0, 0, 0, 0, 0};

char dword_4B004C[199] = {2, 2, 2, 2, 2, 1, 1, 2, 2, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 1, 1, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 3, 7, 8, 10, 9, 11, 12, 13, 14, 15, 3, 0, 0, 1, 2, 3, 4, 5, 6, 0, 0, 7, 8, 0, 0, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 0, 0, 21, 22, 23, 24, 25, 26, 0, 0, 27, 28, 29, 30, 71, 114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 66, 111, 100, 121, 37, 48, 50, 100, 46, 98, 109, 112, 0, 0, 0, 0, 37, 51, 100, 44, 37, 51, 100, 0, 130, 221, 130, 183, 130, 184, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 109, 105, 115, 117, 122, 117, 46, 98, 109, 112, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 68, 111, 117, 98, 108, 101, 95, 68, 114, 97, 103, 111, 110, 46, 98, 109, 112, 0, 0};

char byte_4B0113[12] = {1, 1, 1, 1, 1, 2, 2, 1, 1, 0, 0, 0};

char byte_4B011F[11] = {0, 0, 1, 2, 3, 4, 5, 6, 3, 7, 8};

char byte_4B012A[62] = {114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 66, 111, 100, 121, 37, 48, 50, 100, 46, 98, 109, 112, 0, 0, 0, 0, 37, 51, 100, 44, 37, 51, 100, 0, 130, 221, 130};

char aGraphic02dppal[28] = {114, 97, 112, 104, 105, 99, 92, 66, 111, 100, 121, 37, 48, 50, 100, 46, 98, 109, 112, 0, 0, 0, 0, 37, 51, 100, 44, 37};

char aGraphicBody02d[24] = {51, 100, 44, 37, 51, 100, 0, 130, 221, 130, 183, 130, 184, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 109};

char a3d3d[8] = {221, 130, 183, 130, 184, 0, 0, 71};

char byte_4B01A4[8] = {114, 97, 112, 104, 105, 99, 92, 109};

char aGraphicMisuzuB[20] = {114, 97, 112, 104, 105, 99, 92, 68, 111, 117, 98, 108, 101, 95, 68, 114, 97, 103, 111, 110};

char aGraphicDoubleD[28] = {115, 0, 0, 130, 221, 130, 183, 130, 184, 0, 0, 37, 115, 0, 0, 37, 115, 0, 0, 35, 68, 69, 70, 69, 78, 68, 0, 110};

char aS[20] = {68, 69, 70, 69, 78, 68, 0, 110, 0, 0, 0, 35, 66, 65, 83, 73, 67, 0, 0, 35};

char String2[8] = {0, 0, 0, 35, 66, 65, 83, 73};

char aN[4] = {66, 65, 83, 73};

char aBasic[8] = {83, 84, 65, 84, 85, 83, 0, 35};

char aStatus[8] = {77, 69, 83, 0, 0, 0, 0, 35};

char aMes[8] = {72, 69, 76, 80, 0, 0, 0, 35};

char aHelp[8] = {49, 83, 84, 0, 0, 0, 0, 35};

char byte_4B021C[8] = {50, 78, 68, 0, 0, 0, 0, 35};

char a2nd[8] = {51, 82, 68, 0, 0, 0, 0, 35};

char a3rd[8] = {66, 73, 82, 73, 0, 0, 0, 35};

char aBiri[8] = {83, 80, 95, 77, 79, 86, 69, 0};

char aSpMove[12] = {69, 84, 67, 95, 83, 75, 73, 76, 76, 0, 0, 37};

char aEtcSkill[12] = {50, 100, 0, 68, 83, 69, 82, 82, 95, 65, 76, 76};

char a2d[4] = {83, 69, 82, 82};

char aDserrAllocated[16] = {83, 69, 82, 82, 95, 67, 79, 78, 84, 82, 79, 76, 85, 78, 65, 86};

char aDserrControlun[24] = {83, 69, 82, 82, 95, 73, 78, 86, 65, 76, 73, 68, 80, 65, 82, 65, 77, 0, 0, 68, 83, 69, 82, 82};

char aDserrInvalidpa[20] = {83, 69, 82, 82, 95, 73, 78, 86, 65, 76, 73, 68, 67, 65, 76, 76, 0, 0, 0, 68};

char aDserrInvalidca[20] = {83, 69, 82, 82, 95, 71, 69, 78, 69, 82, 73, 67, 0, 0, 0, 68, 83, 69, 82, 82};

char aDserrGeneric[16] = {83, 69, 82, 82, 95, 80, 82, 73, 79, 76, 69, 86, 69, 76, 78, 69};

char aDserrPriolevel[24] = {83, 69, 82, 82, 95, 79, 85, 84, 79, 70, 77, 69, 77, 79, 82, 89, 0, 0, 0, 68, 83, 69, 82, 82};

char aDserrOutofmemo[20] = {83, 69, 82, 82, 95, 66, 65, 68, 70, 79, 82, 77, 65, 84, 0, 68, 83, 69, 82, 82};

char aDserrBadformat[16] = {83, 69, 82, 82, 95, 85, 78, 83, 85, 80, 80, 79, 82, 84, 69, 68};

char aDserrUnsupport[20] = {83, 69, 82, 82, 95, 78, 79, 68, 82, 73, 86, 69, 82, 0, 0, 68, 83, 69, 82, 82};

char aDserrNodriver[16] = {83, 69, 82, 82, 95, 65, 76, 82, 69, 65, 68, 89, 73, 78, 73, 84};

char aDserrAlreadyin[28] = {83, 69, 82, 82, 95, 78, 79, 65, 71, 71, 82, 69, 71, 65, 84, 73, 79, 78, 0, 68, 83, 69, 82, 82, 95, 66, 85, 70};

char aDserrNoaggrega[20] = {83, 69, 82, 82, 95, 66, 85, 70, 70, 69, 82, 76, 79, 83, 84, 0, 0, 0, 0, 68};

char aDserrBufferlos[20] = {83, 69, 82, 82, 95, 79, 84, 72, 69, 82, 65, 80, 80, 72, 65, 83, 80, 82, 73, 79};

char aDserrOtherapph[24] = {83, 69, 82, 82, 95, 85, 78, 73, 78, 73, 84, 73, 65, 76, 73, 90, 69, 68, 0, 85, 110, 107, 110, 111};

char aDserrUninitial[20] = {110, 107, 110, 111, 119, 110, 32, 72, 82, 69, 83, 85, 76, 84, 0, 69, 82, 82, 79, 82};

char aUnknownHresult[16] = {82, 82, 79, 82, 33, 0, 0, 130, 99, 130, 114, 139, 166, 146, 178, 131};

char Caption[8] = {99, 130, 114, 139, 166, 146, 178, 131};

char Text[40] = {82, 82, 79, 82, 0, 0, 0, 68, 83, 69, 82, 82, 95, 65, 76, 76, 79, 67, 65, 84, 69, 68, 0, 69, 82, 82, 79, 82, 0, 0, 0, 68, 83, 69, 82, 82, 95, 73, 78, 86};

char aError_0[8] = {83, 69, 82, 82, 95, 65, 76, 76};

char aDserrAllocated_0[16] = {82, 82, 79, 82, 0, 0, 0, 68, 83, 69, 82, 82, 95, 73, 78, 86};

char aError_1[8] = {83, 69, 82, 82, 95, 73, 78, 86};

char aDserrInvalidpa_0[20] = {82, 82, 79, 82, 0, 0, 0, 68, 83, 69, 82, 82, 95, 85, 78, 73, 78, 73, 84, 73};

char aError_2[8] = {83, 69, 82, 82, 95, 85, 78, 73};

char aDserrUninitial_0[20] = {82, 82, 79, 82, 0, 0, 0, 68, 83, 69, 82, 82, 95, 85, 78, 83, 85, 80, 80, 79};

char aError_3[8] = {83, 69, 82, 82, 95, 85, 78, 83};

char aDserrUnsupport_0[20] = {82, 82, 79, 82, 33, 0, 0, 131, 95, 131, 67, 131, 140, 131, 78, 131, 103, 131, 84, 131};

char aError_4[8] = {95, 131, 67, 131, 140, 131, 78, 131};

char byte_4B043C[56] = {115, 130, 240, 131, 73, 129, 91, 131, 118, 131, 147, 130, 197, 130, 171, 130, 220, 130, 185, 130, 241, 130, 197, 130, 181, 130, 189, 0, 0, 0, 0, 131, 102, 129, 91, 131, 94, 130, 240, 131, 141, 129, 91, 131, 104, 143, 111, 151, 136, 130, 220, 130, 185, 130, 241, 130};

char aS_4[32] = {102, 129, 91, 131, 94, 130, 240, 131, 141, 129, 91, 131, 104, 143, 111, 151, 136, 130, 220, 130, 185, 130, 241, 130, 197, 130, 181, 130, 189, 0, 0, 130};

char byte_4B0494[32] = {99, 130, 114, 131, 111, 131, 98, 131, 116, 131, 64, 130, 240, 141, 236, 144, 172, 143, 111, 151, 136, 130, 220, 130, 185, 130, 241, 130, 197, 130, 181, 130};

char byte_4B04B4[36] = {83, 69, 82, 82, 95, 65, 76, 76, 79, 67, 65, 84, 69, 68, 0, 68, 83, 69, 82, 82, 95, 66, 65, 68, 70, 79, 82, 77, 65, 84, 0, 68, 83, 69, 82, 82};

char aDserrAllocated_1[16] = {83, 69, 82, 82, 95, 66, 65, 68, 70, 79, 82, 77, 65, 84, 0, 68};

char aDserrBadformat_0[16] = {83, 69, 82, 82, 95, 73, 78, 86, 65, 76, 73, 68, 80, 65, 82, 65};

char aDserrInvalidpa_1[20] = {83, 69, 82, 82, 95, 78, 79, 65, 71, 71, 82, 69, 71, 65, 84, 73, 79, 78, 0, 68};

char aDserrNoaggrega_0[20] = {83, 69, 82, 82, 95, 79, 85, 84, 79, 70, 77, 69, 77, 79, 82, 89, 0, 0, 0, 68};

char aDserrOutofmemo_0[20] = {83, 69, 82, 82, 95, 85, 78, 73, 78, 73, 84, 73, 65, 76, 73, 90, 69, 68, 0, 68};

char aDserrUninitial_1[20] = {83, 69, 82, 82, 95, 85, 78, 83, 85, 80, 80, 79, 82, 84, 69, 68, 0, 0, 0, 131};

char aDserrUnsupport_1[20] = {111, 131, 98, 131, 116, 131, 64, 130, 204, 131, 141, 131, 98, 131, 78, 130, 201, 142, 184, 148};

char byte_4B055C[32] = {83, 69, 82, 82, 95, 67, 79, 78, 84, 82, 79, 76, 85, 78, 65, 86, 65, 73, 76, 0, 0, 0, 0, 68, 83, 69, 82, 82, 95, 73, 78, 86};

char aDserrControlun_0[24] = {83, 69, 82, 82, 95, 73, 78, 86, 65, 76, 73, 68, 80, 65, 82, 65, 77, 0, 0, 68, 83, 69, 82, 82};

char aDserrInvalidpa_2[20] = {83, 69, 82, 82, 95, 80, 82, 73, 79, 76, 69, 86, 69, 76, 78, 69, 69, 68, 69, 68};

char aDserrPriolevel_0[24] = {185, 151, 202, 144, 221, 146, 232, 131, 71, 131, 137, 129, 91, 0, 0, 142, 252, 148, 103, 144, 148, 144, 221, 146};

char byte_4B05C0[16] = {252, 148, 103, 144, 148, 144, 221, 146, 232, 131, 71, 131, 137, 129, 91, 0};

char byte_4B05D0[20] = {83, 69, 82, 82, 95, 67, 79, 78, 84, 82, 79, 76, 85, 78, 65, 86, 65, 73, 76, 0};

char aDserrControlun_1[24] = {83, 69, 82, 82, 95, 73, 78, 86, 65, 76, 73, 68, 80, 65, 82, 65, 77, 0, 0, 68, 83, 69, 82, 82};

char aDserrInvalidpa_3[20] = {83, 69, 82, 82, 95, 80, 82, 73, 79, 76, 69, 86, 69, 76, 78, 69, 69, 68, 69, 68};

char aDserrPriolevel_1[24] = {252, 148, 103, 144, 148, 142, 230, 147, 190, 131, 71, 131, 137, 129, 91, 0, 0, 0, 0, 69, 82, 82, 79, 82};

char byte_4B0628[20] = {82, 82, 79, 82, 0, 0, 0, 131, 138, 131, 92, 129, 91, 131, 88, 130, 240, 146, 84, 130};

char aError_5[8] = {138, 131, 92, 129, 91, 131, 88, 130};

char byte_4B0644[28] = {82, 82, 79, 82, 0, 0, 0, 5, 0, 255, 6, 0, 255, 6, 1, 255, 3, 0, 255, 2, 0, 255, 4, 0, 255, 7, 0, 255};

char aError_6[8] = {0, 255, 6, 0, 255, 6, 1, 255};

char byte_4B0668[2] = {6, 0};

char byte_4B066A[7] = {0, 255, 2, 0, 255, 4, 0};

char byte_4B0671[39] = {204, 208, 248, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 62, 62, 0, 0, 0, 0, 0, 0, 130, 226, 130, 193, 130, 207, 130, 226, 130, 223, 0, 0, 0, 0};

char byte_4B0698[18] = {62, 0, 0, 0, 0, 0, 0, 130, 226, 130, 193, 130, 207, 130, 226, 130, 223, 0};

char asc_4B06AA[28] = {52, 100, 0, 0, 0, 0, 130, 232, 130, 229, 130, 164, 130, 169, 130, 162, 0, 0, 0, 131, 128, 131, 138, 0, 0, 129, 64, 0};

char a4d_0[26] = {64, 0, 0, 0, 0, 0, 131, 132, 131, 95, 0, 0, 129, 73, 92, 110, 0, 0, 0, 130, 160, 130, 237, 130, 196, 130};

char byte_4B06E0[4] = {0, 0, 131, 132};

char byte_4B06E4[9] = {73, 92, 110, 0, 0, 0, 130, 160, 130};

char byte_4B06ED[35] = {96, 0, 130, 97, 0, 130, 98, 0, 130, 99, 0, 130, 100, 0, 130, 129, 0, 130, 130, 0, 130, 131, 0, 130, 132, 0, 130, 133, 0, 130, 101, 0, 130, 102, 0};

char unk_4B0710[360] = {50, 100, 44, 32, 37, 100, 0, 37, 51, 100, 0, 147, 95, 0, 0, 130, 79, 0, 0, 130, 80, 0, 0, 37, 100, 0, 0, 130, 109, 130, 133, 130, 152, 130, 148, 129, 66, 129, 66, 129, 66, 0, 0, 37, 51, 100, 0, 37, 50, 100, 0, 129, 64, 129, 64, 129, 64, 188, 199, 194, 188, 129, 70, 37, 51, 100, 0, 129, 64, 0, 0, 208, 194, 188, 199, 194, 188, 92, 110, 129, 73, 129, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 82, 101, 112, 108, 97, 121, 46, 98, 105, 110, 0, 0, 179, 161, 190, 176, 46, 46, 46, 46, 46, 46, 0, 0, 209, 161, 212, 241, 182, 211, 206, 233, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 0, 0, 0, 66, 111, 115, 115, 48, 50, 46, 119, 97, 118, 0, 0, 66, 111, 115, 115, 48, 51, 46, 119, 97, 118, 0, 0, 68, 111, 117, 98, 108, 101, 68, 114, 97, 103, 111, 110, 46, 119, 97, 118, 0, 0, 0, 0, 179, 161, 190, 176, 209, 161, 212, 241, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 200, 203, 206, 239, 209, 161, 212, 241, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 196, 163, 202, 189, 209, 161, 212, 241, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 70, 105, 108, 108, 82, 101, 99, 116, 32, 102, 97, 105, 108, 117, 114, 101, 58, 32, 114, 101, 99, 116, 40, 37, 100, 44, 32, 37, 100, 44, 32, 37, 100, 44, 32, 37, 100, 41, 0, 130, 113, 130, 129, 130, 142, 130, 132, 130, 143, 130, 141, 0, 0, 130, 114, 130, 148, 130, 129, 130, 135, 130, 133, 129, 64, 130, 151, 130, 137, 130, 140, 130, 140, 129, 64, 130, 130, 130, 133, 129, 64};

char a2dD[8] = {51, 100, 0, 147, 95, 0, 0, 130};

char a3d[4] = {95, 0, 0, 130};

char byte_4B0884[4] = {79, 0, 0, 130};

char word_4B0888[4] = {80, 0, 0, 37};

char word_4B088C[4] = {100, 0, 0, 130};

char aD_5[4] = {109, 130, 133, 130};

char byte_4B0894[16] = {51, 100, 0, 37, 50, 100, 0, 129, 64, 129, 64, 129, 64, 188, 199, 194};

char a3d_4[4] = {50, 100, 0, 129};

char a2d_1[4] = {64, 129, 64, 129};

char byte_4B08AC[12] = {51, 100, 0, 129, 64, 0, 0, 208, 194, 188, 199, 194};

char a3d_3[4] = {64, 0, 0, 208};

char byte_4B08BC[4] = {194, 188, 199, 194};

char byte_4B08C0[32] = {101, 112, 108, 97, 121, 46, 98, 105, 110, 0, 0, 179, 161, 190, 176, 46, 46, 46, 46, 46, 46, 0, 0, 209, 161, 212, 241, 182, 211, 206, 233, 46};

char aReplayBin[12] = {161, 190, 176, 46, 46, 46, 46, 46, 46, 0, 0, 209};

char byte_4B08EC[12] = {161, 212, 241, 182, 211, 206, 233, 46, 46, 46, 46, 46};

char byte_4B08F8[32] = {111, 115, 115, 48, 50, 46, 119, 97, 118, 0, 0, 66, 111, 115, 115, 48, 51, 46, 119, 97, 118, 0, 0, 68, 111, 117, 98, 108, 101, 68, 114, 97};

char aBoss02Wav[12] = {111, 115, 115, 48, 51, 46, 119, 97, 118, 0, 0, 68};

char aBoss03Wav[12] = {111, 117, 98, 108, 101, 68, 114, 97, 103, 111, 110, 46};

char aDoubledragonWa[20] = {161, 190, 176, 209, 161, 212, 241, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};

char byte_4B0944[26] = {203, 206, 239, 209, 161, 212, 241, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 196, 163, 202};

char byte_4B095E[24] = {163, 202, 189, 209, 161, 212, 241, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0};

char byte_4B0976[26] = {105, 108, 108, 82, 101, 99, 116, 32, 102, 97, 105, 108, 117, 114, 101, 58, 32, 114, 101, 99, 116, 40, 37, 100, 44, 32};

char aFillrectFailur[39] = {113, 130, 129, 130, 142, 130, 132, 130, 143, 130, 141, 0, 0, 130, 114, 130, 148, 130, 129, 130, 135, 130, 133, 129, 64, 130, 151, 130, 137, 130, 140, 130, 140, 129, 64, 130, 130, 130, 133};

char byte_4B09B7[14] = {114, 130, 148, 130, 129, 130, 135, 130, 133, 129, 64, 130, 151, 130};

char byte_4B09C5[66] = {161, 190, 176, 209, 161, 212, 241, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 129, 64, 129, 64, 130, 114, 130, 148, 130, 129, 130, 135, 130, 133, 0, 0, 130, 103, 130, 111, 0, 0, 0, 37, 100, 62, 0, 67, 104, 97, 114, 83, 101, 108, 46, 119, 97, 118, 0, 70, 82};

char byte_4B0A07[26] = {64, 129, 64, 130, 114, 130, 148, 130, 129, 130, 135, 130, 133, 0, 0, 130, 103, 130, 111, 0, 0, 0, 37, 100, 62, 0};

char byte_4B0A21[16] = {103, 130, 111, 0, 0, 0, 37, 100, 62, 0, 67, 104, 97, 114, 83, 101};

char dword_4B0A31[7] = {100, 62, 0, 67, 104, 97, 114};

char aD_7[4] = {104, 97, 114, 83};

char aCharselWav[12] = {82, 65, 77, 69, 58, 37, 100, 0, 0, 0, 0, 83};

char aFrameD[12] = {80, 69, 69, 68, 58, 37, 51, 100, 37, 37, 0, 87};

char aSpeed3d[12] = {105, 110, 46, 119, 97, 118, 0, 76, 111, 115, 101, 46};

char aWinWav[8] = {111, 115, 101, 46, 119, 97, 118, 0};

char aLoseWav[12] = {105, 110, 46, 119, 97, 118, 0, 76, 111, 115, 101, 95};

char aWinWav_0[8] = {111, 115, 101, 95, 109, 105, 115, 117};

char aLoseMisuzuWav[16] = {111, 115, 101, 46, 119, 97, 118, 0, 0, 0, 0, 77, 73, 83, 85, 90};

char aLoseWav_0[12] = {73, 83, 85, 90, 85, 32, 87, 73, 78, 33, 33, 0};

char aMisuzuWin[16] = {79, 85, 82, 32, 84, 69, 65, 77, 32, 87, 73, 78, 33, 33, 0, 89};

char aYourTeamWin[16] = {79, 85, 82, 32, 84, 69, 65, 77, 32, 76, 79, 83, 69, 46, 46, 46};

char aYourTeamLose[20] = {100, 80, 32, 87, 73, 78, 33, 33, 0, 0, 0, 37, 100, 80, 32, 84, 69, 65, 77, 32};

char aDpWin[12] = {100, 80, 32, 84, 69, 65, 77, 32, 87, 73, 78, 33};

char aDpTeamWin[16] = {80, 85, 32, 87, 73, 78, 33, 33, 0, 0, 0, 67, 80, 85, 32, 84};

char aCpuWin[12] = {80, 85, 32, 84, 69, 65, 77, 32, 87, 73, 78, 33};

char aCpuTeamWin[16] = {82, 65, 87, 32, 71, 65, 77, 69, 0, 0, 37, 50, 100, 47, 37, 50};

char String[11] = {50, 100, 47, 37, 50, 100, 0, 0, 130, 148, 130};

char a2d2d[9] = {148, 130, 133, 130, 129, 130, 141, 129, 73};

char byte_4B0B18[12] = {64, 0, 0, 130, 104, 130, 134, 129, 64, 130, 148, 130};

char byte_4B0B24[4] = {104, 130, 134, 129};

char byte_4B0B28[70] = {72, 129, 72, 129, 72, 129, 72, 0, 0, 200, 173, 0, 0, 0, 0, 0, 0, 0, 0, 205, 200, 0, 0, 0, 0, 0, 0, 0, 0, 205, 182, 0, 0, 0, 0, 0, 0, 0, 0, 204, 248, 46, 46, 46, 46, 46, 46, 0, 0, 45, 45, 45, 0, 130, 101, 130, 137, 130, 135, 130, 136, 130, 148, 129, 64, 130, 148, 130, 136, 130};

char byte_4B0B6E[10] = {173, 0, 0, 0, 0, 0, 0, 0, 0, 205};

char byte_4B0B78[10] = {200, 0, 0, 0, 0, 0, 0, 0, 0, 205};

char byte_4B0B82[10] = {182, 0, 0, 0, 0, 0, 0, 0, 0, 204};

char byte_4B0B8C[10] = {248, 46, 46, 46, 46, 46, 46, 0, 0, 45};

char byte_4B0B96[10] = {45, 45, 0, 130, 101, 130, 137, 130, 135, 130};

char asc_4B0BA0[4] = {101, 130, 137, 130};

char byte_4B0BA4[48] = {101, 130, 146, 130, 133, 130, 133, 129, 64, 130, 130, 130, 129, 130, 148, 130, 148, 130, 140, 130, 133, 0, 0, 129, 64, 0, 0, 129, 64, 0, 0, 206, 228, 198, 247, 0, 0, 206, 228, 198, 247, 205, 182, 0, 130, 81, 0, 77};

char byte_4B0BD4[24] = {64, 0, 0, 129, 64, 0, 0, 206, 228, 198, 247, 0, 0, 206, 228, 198, 247, 205, 182, 0, 130, 81, 0, 77};

char byte_4B0BEC[4] = {64, 0, 0, 206};

char byte_4B0BF0[4] = {228, 198, 247, 0};

char byte_4B0BF4[6] = {228, 198, 247, 205, 182, 0};

char byte_4B0BFA[6] = {130, 81, 0, 77, 101, 110};

char word_4B0C00[4] = {101, 110, 117, 46};

char aMenuWav[12] = {109, 130, 143, 129, 64, 130, 99, 130, 129, 130, 148, 130};

char byte_4B0C10[16] = {50, 100, 0, 0, 0, 0, 130, 110, 130, 144, 130, 144, 130, 143, 130, 146};

char a2d_5[7] = {110, 130, 144, 130, 144, 130, 143};

char byte_4B0C27[24] = {101, 130, 137, 130, 146, 130, 147, 130, 148, 129, 66, 129, 66, 129, 66, 0, 0, 130, 82, 0, 0, 130, 83, 0};

char byte_4B0C3F[18] = {82, 0, 0, 130, 83, 0, 0, 130, 110, 130, 101, 130, 101, 0, 130, 110, 130, 109};

char word_4B0C51[4] = {83, 0, 0, 130};

char word_4B0C55[4] = {110, 130, 101, 130};

char unk_4B0C59[15] = {105, 130, 149, 130, 132, 130, 135, 130, 133, 129, 69, 130, 147, 129, 64};

char byte_4B0C68[32] = {101, 130, 137, 130, 142, 130, 129, 130, 140, 130, 140, 130, 153, 129, 66, 129, 66, 129, 66, 129, 64, 0, 0, 129, 170, 0, 0, 129, 171, 0, 0, 62};

char byte_4B0C88[24] = {170, 0, 0, 129, 171, 0, 0, 62, 62, 0, 0, 60, 45, 0, 0, 45, 62, 0, 0, 37, 100, 80, 0, 62};

char byte_4B0CA0[4] = {171, 0, 0, 62};

char byte_4B0CA4[4] = {62, 0, 0, 60};

char asc_4B0CA8[4] = {45, 0, 0, 45};

char asc_4B0CAC[4] = {62, 0, 0, 37};

char asc_4B0CB0[4] = {100, 80, 0, 62};

char aDp_2[4] = {62, 0, 0, 75};

char asc_4B0CB8[4] = {66, 0, 0, 74};

char aKb[4] = {83, 37, 100, 0};

char aJsD[8] = {62, 0, 0, 37, 100, 0, 0, 85};

char asc_4B0CC8[4] = {100, 0, 0, 85};

char aD[4] = {80, 0, 0, 68};

char aUp[4] = {79, 0, 0, 76};

char aDo[4] = {69, 0, 0, 82};

char aLe[4] = {73, 0, 0, 62};

char aRi[4] = {62, 0, 0, 62};

char asc_4B0CE0[4] = {62, 0, 0, 83};

char asc_4B0CE4[4] = {104, 111, 119, 70};

char aShowfpsD[16] = {117, 116, 68, 97, 109, 97, 103, 101, 32, 61, 32, 37, 100, 0, 0, 71};

char aPutdamageD[16] = {97, 109, 101, 83, 112, 101, 101, 100, 32, 61, 32, 37, 100, 0, 0, 72};

char aGamespeedD[16] = {105, 116, 83, 116, 111, 112, 32, 61, 32, 37, 100, 0, 0, 0, 0, 83};

char aHitstopD[16] = {97, 109, 101, 67, 104, 97, 114, 32, 61, 32, 37, 100, 0, 0, 0, 85};

char aSamecharD[16] = {115, 101, 73, 116, 101, 109, 32, 61, 32, 37, 100, 0, 0, 0, 0, 72};

char aUseitemD[16] = {105, 116, 83, 97, 109, 101, 84, 101, 97, 109, 32, 61, 32, 37, 100, 0};

char aHitsameteamD[20] = {115, 101, 87, 101, 97, 112, 111, 110, 78, 117, 109, 32, 61, 32, 37, 100, 0, 0, 0, 85};

char aUseweaponnumD[20] = {115, 101, 67, 111, 109, 98, 105, 110, 101, 77, 111, 118, 101, 32, 61, 32, 37, 100, 0, 65};

char aUsecombinemove[20] = {116, 116, 97, 99, 107, 66, 117, 116, 116, 111, 110, 71, 117, 97, 114, 100, 32, 61, 32, 37};

char aAttackbuttongu[24] = {114, 111, 117, 110, 100, 68, 97, 109, 97, 103, 101, 32, 61, 32, 37, 100, 0, 0, 0, 66, 108, 97, 99, 107};

char aGrounddamageD[20] = {108, 97, 99, 107, 72, 111, 108, 101, 84, 121, 112, 101, 32, 61, 32, 37, 100, 0, 0, 82};

char aBlackholetypeD[20] = {97, 110, 100, 111, 109, 83, 101, 108, 101, 99, 116, 70, 105, 103, 104, 116, 84, 121, 112, 101};

char aRandomselectfi[28] = {117, 114, 118, 105, 118, 97, 108, 82, 101, 99, 111, 114, 100, 86, 101, 114, 121, 69, 97, 115, 121, 32, 61, 32, 37, 100, 0, 83};

char aSurvivalrecord[28] = {117, 114, 118, 105, 118, 97, 108, 82, 101, 99, 111, 114, 100, 69, 97, 115, 121, 32, 61, 32, 37, 100, 0, 83, 117, 114, 118, 105};

char aSurvivalrecord_0[24] = {117, 114, 118, 105, 118, 97, 108, 82, 101, 99, 111, 114, 100, 78, 111, 114, 109, 97, 108, 32, 61, 32, 37, 100};

char aSurvivalrecord_1[28] = {117, 114, 118, 105, 118, 97, 108, 82, 101, 99, 111, 114, 100, 72, 97, 114, 100, 32, 61, 32, 37, 100, 0, 83, 117, 114, 118, 105};

char aSurvivalrecord_2[24] = {117, 114, 118, 105, 118, 97, 108, 82, 101, 99, 111, 114, 100, 86, 101, 114, 121, 72, 97, 114, 100, 32, 61, 32};

char aSurvivalrecord_3[28] = {111, 110, 102, 105, 103, 0, 0, 71, 97, 109, 101, 78, 117, 109, 32, 61, 32, 37, 100, 0, 0, 0, 0, 73, 115, 84, 97, 103};

char AppName[8] = {97, 109, 101, 78, 117, 109, 32, 61};

char aGamenumD[16] = {115, 84, 97, 103, 32, 61, 32, 37, 100, 0, 0, 80, 108, 97, 121, 101};

char aIstagD[12] = {108, 97, 121, 101, 114, 78, 117, 109, 32, 61, 32, 37};

char aPlayernumD[16] = {115, 85, 115, 101, 73, 116, 101, 109, 32, 61, 32, 37, 100, 0, 0, 87};

char aIsuseitemD[16] = {101, 97, 112, 111, 110, 78, 117, 109, 32, 61, 32, 37, 100, 0, 0, 83};

char aWeaponnumD[16] = {104, 111, 119, 80, 111, 105, 110, 116, 32, 61, 32, 37, 100, 0, 0, 71};

char aShowpointD[16] = {114, 111, 117, 110, 100, 68, 97, 109, 97, 103, 101, 32, 61, 32, 37, 100};

char aGrounddamageD_0[20] = {108, 97, 99, 107, 72, 111, 108, 101, 84, 121, 112, 101, 32, 61, 32, 37, 100, 0, 0, 85};

char aBlackholetypeD_0[20] = {115, 101, 67, 111, 109, 98, 105, 110, 101, 77, 111, 118, 101, 32, 61, 32, 37, 100, 0, 72};

char aUsecombinemove_0[20] = {105, 116, 83, 97, 109, 101, 84, 101, 97, 109, 32, 61, 32, 37, 100, 0, 0, 0, 0, 75};

char aHitsameteamD_0[20] = {75, 67, 111, 110, 102, 105, 103, 0, 0, 0, 0, 70, 117, 108, 108, 83, 99, 114, 101, 101};

char aKkconfig[12] = {117, 108, 108, 83, 99, 114, 101, 101, 110, 32, 61, 32};

char aFullscreenD[16] = {97, 99, 107, 71, 114, 111, 117, 110, 100, 82, 117, 110, 32, 61, 32, 37};

char aBackgroundrunD[20] = {115, 121, 110, 99, 87, 97, 105, 116, 32, 61, 32, 37, 100, 0, 0, 90, 111, 111, 109, 32};

char aVsyncwaitD[16] = {111, 111, 109, 32, 61, 32, 37, 100, 0, 0, 0, 68, 105, 114, 101, 99};

char aZoomD[12] = {105, 114, 101, 99, 116, 68, 114, 97, 119, 67, 111, 110};

char aDirectdrawconf[20] = {114, 114, 111, 114, 0, 0, 0, 68, 105, 114, 101, 99, 116, 68, 114, 97, 119, 67, 111, 110};

char aError_7[8] = {105, 114, 101, 99, 116, 68, 114, 97};

char aDirectdrawconf_4[32] = {110, 105, 116, 68, 101, 118, 105, 99, 101, 0, 0, 37, 100, 80, 32, 61, 32, 37, 100, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 144};

char aInitdevice[12] = {100, 80, 32, 61, 32, 37, 100, 0, 0, 0, 0, 69};

char aDpD[12] = {114, 114, 111, 114, 0, 0, 0, 144, 221, 146, 232, 131};

char aError_8[8] = {221, 146, 232, 131, 116, 131, 64, 131};

char byte_4B0FC0[28] = {101, 97, 112, 111, 110, 82, 97, 116, 101, 0, 0, 37, 48, 50, 100, 32, 61, 32, 37, 100, 0, 0, 0, 69, 114, 114, 111, 114};

char aWeaponrate[12] = {48, 50, 100, 32, 61, 32, 37, 100, 0, 0, 0, 69};

char a02dD[12] = {114, 114, 111, 114, 0, 0, 0, 144, 221, 146, 232, 131};

char aError_9[8] = {221, 146, 232, 131, 116, 131, 64, 131};

char byte_4B0FFC[28] = {111, 121, 83, 116, 105, 99, 107, 65, 115, 115, 105, 103, 110, 37, 100, 80, 0, 0, 0, 85, 112, 32, 61, 32, 37, 100, 0, 68};

char aJoystickassign[20] = {112, 32, 61, 32, 37, 100, 0, 68, 111, 119, 110, 32, 61, 32, 37, 100, 0, 0, 0, 76};

char aUpD[8] = {111, 119, 110, 32, 61, 32, 37, 100};

char aDownD[12] = {101, 102, 116, 32, 61, 32, 37, 100, 0, 0, 0, 82};

char aLeftD[12] = {105, 103, 104, 116, 32, 61, 32, 37, 100, 0, 0, 84};

char aRightD[12] = {114, 105, 103, 103, 101, 114, 37, 100, 32, 61, 32, 37};

char aTriggerDD[16] = {101, 108, 101, 99, 116, 32, 61, 32, 37, 100, 0, 83, 116, 97, 114, 116};

char aSelectD[12] = {116, 97, 114, 116, 32, 61, 32, 37, 100, 0, 0, 69};

char aStartD[12] = {114, 114, 111, 114, 0, 0, 0, 144, 221, 146, 232, 131};

char aError_10[8] = {221, 146, 232, 131, 116, 131, 64, 131};

char byte_4B1088[28] = {101, 121, 66, 111, 97, 114, 100, 65, 115, 115, 105, 103, 110, 37, 100, 80, 0, 0, 0, 85, 112, 32, 61, 32, 37, 51, 100, 0};

char aKeyboardassign[20] = {112, 32, 61, 32, 37, 51, 100, 0, 0, 0, 0, 68, 111, 119, 110, 32, 61, 32, 37, 51};

char aUp3d[12] = {111, 119, 110, 32, 61, 32, 37, 51, 100, 0, 0, 76};

char aDown3d[12] = {101, 102, 116, 32, 61, 32, 37, 51, 100, 0, 0, 82};

char aLeft3d[12] = {105, 103, 104, 116, 32, 61, 32, 37, 51, 100, 0, 83};

char aRight3d[12] = {101, 108, 101, 99, 116, 32, 61, 32, 37, 51, 100, 0};

char aSelect3d[16] = {116, 97, 114, 116, 32, 61, 32, 37, 51, 100, 0, 84, 114, 105, 103, 103};

char aStart3d[12] = {114, 105, 103, 103, 101, 114, 37, 100, 32, 61, 32, 37};

char aTriggerD3d[16] = {104, 111, 119, 70, 80, 83, 0, 67, 111, 110, 102, 105, 103, 0, 0, 80};

char KeyName[8] = {111, 110, 102, 105, 103, 0, 0, 80};

char aConfig_0[8] = {117, 116, 68, 97, 109, 97, 103, 101};

char aPutdamage[12] = {111, 110, 102, 105, 103, 0, 0, 71, 97, 109, 101, 83};

char aConfig_1[8] = {97, 109, 101, 83, 112, 101, 101, 100};

char aGamespeed[12] = {111, 110, 102, 105, 103, 0, 0, 72, 105, 116, 83, 116};

char aConfig_2[8] = {105, 116, 83, 116, 111, 112, 0, 67};

char aHitstop[8] = {111, 110, 102, 105, 103, 0, 0, 83};

char aConfig_3[8] = {97, 109, 101, 67, 104, 97, 114, 0};

char aSamechar[12] = {111, 110, 102, 105, 103, 0, 0, 85, 115, 101, 73, 116};

char aConfig_4[8] = {115, 101, 73, 116, 101, 109, 0, 67};

char aUseitem[8] = {111, 110, 102, 105, 103, 0, 0, 72};

char aConfig_5[8] = {105, 116, 83, 97, 109, 101, 84, 101};

char aHitsameteam[12] = {111, 110, 102, 105, 103, 0, 0, 85, 115, 101, 87, 101};

char aConfig_6[8] = {115, 101, 87, 101, 97, 112, 111, 110};

char aUseweaponnum[16] = {111, 110, 102, 105, 103, 0, 0, 65, 116, 116, 97, 99, 107, 66, 117, 116};

char aConfig_7[8] = {116, 116, 97, 99, 107, 66, 117, 116};

char aAttackbuttongu_0[20] = {111, 110, 102, 105, 103, 0, 0, 85, 115, 101, 67, 111, 109, 98, 105, 110, 101, 77, 111, 118};

char aConfig_8[8] = {115, 101, 67, 111, 109, 98, 105, 110};

char aUsecombinemove_1[16] = {111, 110, 102, 105, 103, 0, 0, 71, 114, 111, 117, 110, 100, 68, 97, 109};

char aConfig_9[8] = {114, 111, 117, 110, 100, 68, 97, 109};

char aGrounddamage[16] = {111, 110, 102, 105, 103, 0, 0, 66, 108, 97, 99, 107, 72, 111, 108, 101};

char aConfig_10[8] = {108, 97, 99, 107, 72, 111, 108, 101};

char aBlackholetype[16] = {111, 110, 102, 105, 103, 0, 0, 82, 97, 110, 100, 111, 109, 83, 101, 108};

char aConfig_11[8] = {97, 110, 100, 111, 109, 83, 101, 108};

char aRandomselectfi_0[24] = {111, 110, 102, 105, 103, 0, 0, 83, 117, 114, 118, 105, 118, 97, 108, 82, 101, 99, 111, 114, 100, 86, 101, 114};

char aConfig_12[8] = {117, 114, 118, 105, 118, 97, 108, 82};

char aSurvivalrecord_4[24] = {111, 110, 102, 105, 103, 0, 0, 83, 117, 114, 118, 105, 118, 97, 108, 82, 101, 99, 111, 114, 100, 69, 97, 115};

char aConfig_13[8] = {117, 114, 118, 105, 118, 97, 108, 82};

char aSurvivalrecord_5[20] = {111, 110, 102, 105, 103, 0, 0, 83, 117, 114, 118, 105, 118, 97, 108, 82, 101, 99, 111, 114};

char aConfig_14[8] = {117, 114, 118, 105, 118, 97, 108, 82};

char aSurvivalrecord_6[24] = {111, 110, 102, 105, 103, 0, 0, 83, 117, 114, 118, 105, 118, 97, 108, 82, 101, 99, 111, 114, 100, 72, 97, 114};

char aConfig_15[8] = {117, 114, 118, 105, 118, 97, 108, 82};

char aSurvivalrecord_7[20] = {111, 110, 102, 105, 103, 0, 0, 83, 117, 114, 118, 105, 118, 97, 108, 82, 101, 99, 111, 114};

char aConfig_16[8] = {117, 114, 118, 105, 118, 97, 108, 82};

char aSurvivalrecord_8[24] = {111, 110, 102, 105, 103, 0, 0, 71, 97, 109, 101, 78, 117, 109, 0, 75, 75, 67, 111, 110, 102, 105, 103, 0};

char aConfig_17[8] = {97, 109, 101, 78, 117, 109, 0, 75};

char aGamenum[8] = {75, 67, 111, 110, 102, 105, 103, 0};

char aKkconfig_0[12] = {115, 84, 97, 103, 0, 0, 0, 75, 75, 67, 111, 110};

char aIstag[8] = {75, 67, 111, 110, 102, 105, 103, 0};

char aKkconfig_1[12] = {108, 97, 121, 101, 114, 78, 117, 109, 0, 0, 0, 75};

char aPlayernum[12] = {75, 67, 111, 110, 102, 105, 103, 0, 0, 0, 0, 73};

char aKkconfig_2[12] = {115, 85, 115, 101, 73, 116, 101, 109, 0, 0, 0, 75};

char aIsuseitem[12] = {75, 67, 111, 110, 102, 105, 103, 0, 0, 0, 0, 87};

char aKkconfig_3[12] = {101, 97, 112, 111, 110, 78, 117, 109, 0, 0, 0, 75};

char aWeaponnum[12] = {75, 67, 111, 110, 102, 105, 103, 0, 0, 0, 0, 83};

char aKkconfig_4[12] = {104, 111, 119, 80, 111, 105, 110, 116, 0, 0, 0, 75};

char aShowpoint[12] = {75, 67, 111, 110, 102, 105, 103, 0, 0, 0, 0, 71};

char aKkconfig_5[12] = {114, 111, 117, 110, 100, 68, 97, 109, 97, 103, 101, 0};

char aGrounddamage_0[16] = {75, 67, 111, 110, 102, 105, 103, 0, 0, 0, 0, 66, 108, 97, 99, 107};

char aKkconfig_6[12] = {108, 97, 99, 107, 72, 111, 108, 101, 84, 121, 112, 101};

char aBlackholetype_0[16] = {75, 67, 111, 110, 102, 105, 103, 0, 0, 0, 0, 85, 115, 101, 67, 111};

char aKkconfig_7[12] = {115, 101, 67, 111, 109, 98, 105, 110, 101, 77, 111, 118};

char aUsecombinemove_2[16] = {75, 67, 111, 110, 102, 105, 103, 0, 0, 0, 0, 72, 105, 116, 83, 97};

char aKkconfig_8[12] = {105, 116, 83, 97, 109, 101, 84, 101, 97, 109, 0, 75};

char aHitsameteam_0[12] = {75, 67, 111, 110, 102, 105, 103, 0, 0, 0, 0, 70};

char aKkconfig_9[12] = {117, 108, 108, 83, 99, 114, 101, 101, 110, 0, 0, 68};

char aFullscreen[12] = {105, 114, 101, 99, 116, 68, 114, 97, 119, 67, 111, 110};

char aDirectdrawconf_0[20] = {97, 99, 107, 71, 114, 111, 117, 110, 100, 82, 117, 110, 0, 0, 0, 68, 105, 114, 101, 99};

char aBackgroundrun[16] = {105, 114, 101, 99, 116, 68, 114, 97, 119, 67, 111, 110, 102, 105, 103, 0};

char aDirectdrawconf_1[20] = {115, 121, 110, 99, 87, 97, 105, 116, 0, 0, 0, 68, 105, 114, 101, 99, 116, 68, 114, 97};

char aVsyncwait[12] = {105, 114, 101, 99, 116, 68, 114, 97, 119, 67, 111, 110};

char aDirectdrawconf_2[20] = {111, 111, 109, 0, 0, 0, 0, 68, 105, 114, 101, 99, 116, 68, 114, 97, 119, 67, 111, 110};

char aZoom[8] = {105, 114, 101, 99, 116, 68, 114, 97};

char aDirectdrawconf_3[20] = {101, 97, 112, 111, 110, 82, 97, 116, 101, 0, 0, 37, 48, 50, 100, 0, 0, 0, 0, 73};

char aWeaponrate_0[12] = {48, 50, 100, 0, 0, 0, 0, 73, 110, 105, 116, 68};

char a02d[8] = {110, 105, 116, 68, 101, 118, 105, 99};

char aInitdevice_0[12] = {100, 80, 0, 74, 111, 121, 83, 116, 105, 99, 107, 65};

char aDp[4] = {111, 121, 83, 116};

char aJoystickassign_0[20] = {112, 0, 0, 68, 111, 119, 110, 0, 0, 0, 0, 76, 101, 102, 116, 0, 0, 0, 0, 82};

char aUp_0[4] = {111, 119, 110, 0};

char aDown[8] = {101, 102, 116, 0, 0, 0, 0, 82};

char aLeft[8] = {105, 103, 104, 116, 0, 0, 0, 83};

char aRight[8] = {101, 108, 101, 99, 116, 0, 0, 83};

char aSelect[8] = {116, 97, 114, 116, 0, 0, 0, 84};

char aStart[8] = {114, 105, 103, 103, 101, 114, 37, 100};

char aTriggerD[12] = {101, 121, 66, 111, 97, 114, 100, 65, 115, 115, 105, 103};

char aKeyboardassign_0[20] = {112, 0, 0, 68, 111, 119, 110, 0, 0, 0, 0, 76, 101, 102, 116, 0, 0, 0, 0, 82};

char aUp_1[4] = {111, 119, 110, 0};

char aDown_0[8] = {101, 102, 116, 0, 0, 0, 0, 82};

char aLeft_0[8] = {105, 103, 104, 116, 0, 0, 0, 83};

char aRight_0[8] = {101, 108, 101, 99, 116, 0, 0, 83};

char aSelect_0[8] = {116, 97, 114, 116, 0, 0, 0, 84};

char aStart_0[8] = {114, 105, 103, 103, 101, 114, 37, 100};

char aTriggerD_0[12] = {51, 100, 0, 71, 114, 97, 112, 104, 105, 99, 92, 83};

char a3d_0[4] = {114, 97, 112, 104};

char aGraphicStagese[24] = {116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 95, 83, 101, 108, 101, 99, 116, 46, 98, 109};

char aStageStage02dS[28] = {116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 46, 98, 109, 112, 0, 67, 104, 97, 114, 83, 101, 108, 46, 119};

char aStageStage02dB[20] = {104, 97, 114, 83, 101, 108, 46, 119, 97, 118, 0, 0, 183, 192, 211, 249, 0, 0, 0, 0};

char aCharselWav_0[13] = {192, 211, 249, 0, 0, 0, 0, 203, 217, 182, 200, 0, 0};

char byte_4B1551[8] = {217, 182, 200, 0, 0, 0, 0, 183};

char byte_4B1559[8] = {180, 187, 247, 0, 0, 0, 0, 205};

char byte_4B1561[8] = {200, 0, 0, 0, 0, 0, 37, 115};

char dword_4B1569[7] = {115, 0, 0, 0, 0, 0, 0};

char aS_5[20] = {48, 50, 100, 0, 0, 0, 0, 0, 0, 0, 200, 173, 0, 0, 0, 0, 0, 0, 0, 0};

char a02d_0[6] = {0, 0, 0, 0, 200, 173};

char dword_4B158A[5] = {173, 0, 0, 0, 0};

char dword_4B158F[5] = {0, 0, 0, 0, 205};

char dword_4B1594[5] = {182, 0, 0, 0, 0};

char dword_4B1599[5] = {0, 0, 0, 0, 206};

char dword_4B159E[5] = {228, 198, 247, 0, 129};

char dword_4B15A3[5] = {64, 129, 64, 0, 206};

char dword_4B15A8[5] = {228, 205, 182, 0, 129};

char dword_4B15AD[5] = {64, 129, 64, 0, 0};

char dword_4B15B2[6] = {114, 97, 112, 104, 105, 99};

char aGraphicTitleBm[20] = {105, 116, 108, 101, 46, 119, 97, 118, 0, 0, 0, 130, 101, 130, 137, 130, 135, 130, 136, 130};

char aTitleWav[12] = {101, 130, 137, 130, 135, 130, 136, 130, 148, 129, 64, 130};

char byte_4B15D8[62] = {96, 129, 64, 130, 148, 130, 143, 130, 149, 130, 146, 130, 142, 130, 129, 130, 141, 130, 133, 130, 142, 130, 148, 129, 64, 130, 151, 130, 136, 130, 133, 130, 146, 130, 133, 129, 64, 130, 153, 130, 143, 130, 149, 129, 64, 130, 134, 130, 137, 130, 135, 130, 136, 130, 148, 129, 64, 130, 141, 130, 149, 130};

char byte_4B1616[76] = {148, 130, 133, 130, 129, 130, 141, 130, 147, 129, 64, 130, 134, 130, 143, 130, 146, 129, 64, 130, 148, 130, 136, 130, 133, 129, 64, 130, 131, 130, 136, 130, 129, 130, 141, 130, 144, 130, 137, 130, 143, 130, 142, 130, 147, 130, 136, 130, 137, 130, 144, 0, 0, 130, 98, 130, 136, 130, 129, 130, 142, 130, 135, 130, 133, 129, 64, 130, 143, 130, 144, 130, 148, 130, 137, 130};

char byte_4B1662[54] = {98, 130, 136, 130, 129, 130, 142, 130, 135, 130, 133, 129, 64, 130, 143, 130, 144, 130, 148, 130, 137, 130, 143, 130, 142, 130, 147, 0, 0, 130, 114, 130, 148, 130, 129, 130, 146, 130, 148, 129, 64, 130, 146, 130, 133, 130, 131, 130, 143, 130, 146, 130, 132, 130};

char byte_4B1698[30] = {114, 130, 148, 130, 129, 130, 146, 130, 148, 129, 64, 130, 146, 130, 133, 130, 131, 130, 143, 130, 146, 130, 132, 130, 137, 130, 142, 130, 135, 129};

char word_4B16B6[48] = {114, 130, 148, 130, 143, 130, 144, 129, 64, 130, 146, 130, 133, 130, 131, 130, 143, 130, 146, 130, 132, 130, 137, 130, 142, 130, 135, 129, 64, 130, 146, 130, 133, 130, 144, 130, 140, 130, 129, 130, 153, 36, 49, 0, 0, 130, 98, 130};

char word_4B16E6[46] = {98, 130, 129, 130, 142, 129, 69, 130, 148, 129, 64, 130, 131, 130, 136, 130, 129, 130, 142, 130, 135, 130, 133, 129, 64, 130, 131, 130, 149, 130, 146, 130, 146, 130, 133, 130, 142, 130, 148, 129, 64, 130, 144, 130, 143, 130};

char word_4B1714[62] = {97, 130, 129, 130, 131, 130, 139, 129, 64, 130, 148, 130, 143, 129, 64, 130, 148, 130, 137, 130, 148, 130, 140, 130, 133, 0, 0, 130, 148, 130, 136, 130, 133, 129, 64, 130, 151, 130, 137, 130, 142, 130, 142, 130, 133, 130, 146, 129, 65, 129, 64, 130, 151, 130, 137, 130, 148, 130, 136, 129, 64, 0};

char byte_4B1752[28] = {148, 130, 136, 130, 133, 129, 64, 130, 151, 130, 137, 130, 142, 130, 142, 130, 133, 130, 146, 129, 65, 129, 64, 130, 151, 130, 137, 130};

char byte_4B176E[36] = {81, 130, 142, 130, 132, 129, 64, 130, 144, 130, 140, 130, 129, 130, 131, 130, 133, 129, 65, 129, 64, 130, 151, 130, 137, 130, 148, 130, 136, 129, 64, 0, 0, 130, 118, 130};

char byte_4B1792[34] = {118, 130, 136, 130, 129, 130, 148, 129, 72, 129, 64, 0, 0, 130, 115, 130, 133, 130, 129, 130, 141, 129, 64, 37, 115, 0, 0, 37, 51, 100, 0, 129, 64, 0};

char byte_4B17B4[14] = {115, 130, 133, 130, 129, 130, 141, 129, 64, 37, 115, 0, 0, 37};

char byte_4B17C2[14] = {51, 100, 0, 129, 64, 0, 0, 62, 62, 0, 0, 130, 97, 130};

char a3d_6[4] = {64, 0, 0, 62};

char byte_4B17D4[4] = {62, 0, 0, 130};

char asc_4B17D8[4] = {97, 130, 129, 130};

char byte_4B17DC[10] = {106, 130, 137, 130, 132, 0, 0, 0, 0, 130};

char byte_4B17E6[10] = {115, 130, 143, 129, 64, 130, 133, 130, 150, 130};

char byte_4B17F0[138] = {82, 130, 146, 130, 132, 129, 64, 130, 144, 130, 140, 130, 129, 130, 131, 130, 133, 129, 65, 129, 64, 130, 151, 130, 137, 130, 148, 130, 136, 129, 64, 0, 0, 130, 83, 130, 148, 130, 136, 129, 64, 130, 144, 130, 140, 130, 129, 130, 131, 130, 133, 129, 65, 129, 64, 130, 151, 130, 137, 130, 148, 130, 136, 129, 64, 0, 0, 130, 116, 130, 142, 130, 148, 130, 137, 130, 140, 129, 73, 129, 72, 92, 110, 0, 0, 130, 97, 130, 133, 130, 148, 130, 148, 130, 133, 130, 146, 129, 64, 130, 140, 130, 149, 130, 131, 130, 139, 129, 64, 130, 142, 130, 133, 130, 152, 130, 148, 129, 64, 130, 148, 130, 137, 130, 141, 130, 133, 129, 73, 0, 0, 130, 84, 0, 0, 130, 85, 0};

char byte_4B187A[34] = {83, 130, 148, 130, 136, 129, 64, 130, 144, 130, 140, 130, 129, 130, 131, 130, 133, 129, 65, 129, 64, 130, 151, 130, 137, 130, 148, 130, 136, 129, 64, 0, 0, 130};

char byte_4B189C[34] = {116, 130, 142, 130, 148, 130, 137, 130, 140, 129, 73, 129, 72, 92, 110, 0, 0, 130, 97, 130, 133, 130, 148, 130, 148, 130, 133, 130, 146, 129, 64, 130, 140, 130};

char byte_4B18BE[18] = {97, 130, 133, 130, 148, 130, 148, 130, 133, 130, 146, 129, 64, 130, 140, 130, 149, 130};

char byte_4B18D0[46] = {84, 0, 0, 130, 85, 0, 0, 130, 86, 0, 0, 0, 0, 130, 96, 130, 140, 130, 146, 130, 133, 130, 129, 130, 132, 130, 153, 129, 64, 130, 143, 130, 142, 129, 64, 130, 129, 130, 142, 130, 143, 130, 148, 130, 136, 130};

char word_4B18FE[4] = {85, 0, 0, 130};

char word_4B1902[4] = {86, 0, 0, 0};

char word_4B1906[6] = {96, 130, 140, 130, 146, 130};

char byte_4B190C[114] = {96, 130, 140, 130, 146, 130, 137, 130, 135, 130, 136, 130, 148, 129, 73, 129, 64, 130, 104, 130, 148, 129, 69, 130, 147, 129, 64, 130, 148, 130, 136, 130, 133, 129, 64, 130, 129, 130, 142, 130, 142, 130, 143, 130, 149, 130, 142, 130, 131, 130, 133, 130, 141, 130, 133, 130, 142, 130, 148, 129, 64, 130, 143, 130, 134, 129, 64, 129, 64, 129, 64, 130, 148, 130, 136, 130, 133, 129, 64, 130, 134, 130, 137, 130, 142, 130, 129, 130, 140, 129, 64, 130, 147, 130, 148, 130, 129, 130, 142, 130, 132, 130, 137, 130, 142, 130, 135, 130, 147, 129, 73, 92, 119, 91};

char byte_4B197E[174] = {102, 130, 143, 130, 143, 130, 132, 129, 64, 130, 138, 130, 143, 130, 130, 129, 73, 0, 0, 130, 109, 130, 137, 130, 131, 130, 133, 129, 64, 130, 135, 130, 143, 130, 137, 130, 142, 130, 135, 129, 73, 0, 0, 130, 98, 130, 143, 130, 142, 130, 135, 130, 146, 130, 129, 130, 148, 130, 149, 130, 140, 130, 129, 130, 148, 130, 137, 130, 143, 130, 142, 130, 147, 129, 73, 0, 0, 130, 103, 130, 143, 130, 151, 129, 64, 130, 132, 130, 137, 130, 132, 129, 64, 130, 129, 130, 140, 130, 140, 129, 64, 130, 148, 130, 136, 130, 133, 129, 64, 130, 148, 130, 133, 130, 129, 130, 141, 130, 147, 129, 64, 130, 148, 130, 137, 130, 133, 129, 73, 129, 72, 129, 64, 130, 109, 130, 143, 129, 64, 130, 151, 130, 129, 130, 153, 129, 96, 92, 110, 92, 119, 91, 54, 48, 93, 129, 66, 129, 66, 129, 66, 130, 120, 130, 143, 130, 149, 129, 64, 130, 132, 130, 137, 130};

char byte_4B1A2C[20] = {109, 130, 137, 130, 131, 130, 133, 129, 64, 130, 135, 130, 143, 130, 137, 130, 142, 130, 135, 129};

char byte_4B1A40[24] = {98, 130, 143, 130, 142, 130, 135, 130, 146, 130, 129, 130, 148, 130, 149, 130, 140, 130, 129, 130, 148, 130, 137, 130};

char byte_4B1A58[34] = {103, 130, 143, 130, 151, 129, 64, 130, 132, 130, 137, 130, 132, 129, 64, 130, 129, 130, 140, 130, 140, 129, 64, 130, 148, 130, 136, 130, 133, 129, 64, 130, 148, 130};

char byte_4B1A7A[158] = {87, 0, 0, 130, 88, 0, 0, 129, 91, 0, 0, 183, 192, 211, 249, 0, 0, 0, 0, 130, 114, 130, 148, 130, 129, 130, 146, 130, 148, 0, 0, 130, 101, 130, 137, 130, 142, 130, 129, 130, 140, 129, 64, 130, 97, 130, 129, 130, 148, 130, 148, 130, 140, 130, 133, 0, 0, 209, 161, 184, 246, 188, 199, 194, 188, 129, 73, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 130, 80, 130, 111, 0, 130, 81, 130, 111, 0, 0, 185, 202, 202, 194, 196, 163, 202, 189, 46, 46, 46, 46, 0, 201, 232, 214, 195, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 130, 115, 130, 136, 130, 129, 130, 148, 129, 64, 130, 131, 130, 143, 130, 142, 130, 131, 130, 140, 130, 149, 130, 132, 130, 133, 130, 147, 129, 64, 130};

char word_4B1B18[4] = {88, 0, 0, 129};

char word_4B1B1C[4] = {91, 0, 0, 183};

char byte_4B1B20[4] = {192, 211, 249, 0};

char dword_4B1B24[8] = {114, 130, 148, 130, 129, 130, 146, 130};

char byte_4B1B2C[12] = {101, 130, 137, 130, 142, 130, 129, 130, 140, 129, 64, 130};

char byte_4B1B38[26] = {161, 184, 246, 188, 199, 194, 188, 129, 73, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};

char byte_4B1B52[30] = {80, 130, 111, 0, 130, 81, 130, 111, 0, 0, 185, 202, 202, 194, 196, 163, 202, 189, 46, 46, 46, 46, 0, 201, 232, 214, 195, 46, 46, 46};

char unk_4B1B70[11] = {202, 202, 194, 196, 163, 202, 189, 46, 46, 46, 46};

char unk_4B1B7B[29] = {115, 130, 136, 130, 129, 130, 148, 129, 64, 130, 131, 130, 143, 130, 142, 130, 131, 130, 140, 130, 149, 130, 132, 130, 133, 130, 147, 129, 64};

char byte_4B1B98[106] = {144, 130, 143, 130, 137, 130, 142, 130, 148, 130, 147, 129, 70, 129, 64, 0, 0, 129, 64, 196, 163, 202, 189, 209, 161, 212, 241, 0, 0, 0, 0, 129, 64, 185, 202, 202, 194, 196, 163, 202, 189, 0, 129, 64, 182, 212, 213, 189, 196, 163, 202, 189, 0, 129, 64, 201, 250, 180, 230, 196, 163, 202, 189, 0, 129, 64, 184, 241, 182, 183, 177, 200, 200, 252, 0, 129, 64, 129, 64, 201, 232, 214, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 120, 130, 143, 130};

char byte_4B1C02[18] = {64, 196, 163, 202, 189, 209, 161, 212, 241, 0, 0, 0, 0, 129, 64, 185, 202, 202};

char unk_4B1C14[14] = {64, 185, 202, 202, 194, 196, 163, 202, 189, 0, 129, 64, 182, 212};

char unk_4B1C22[70] = {120, 130, 143, 130, 149, 129, 64, 130, 131, 130, 129, 130, 142, 129, 64, 130, 143, 130, 142, 130, 140, 130, 153, 129, 64, 130, 147, 130, 148, 130, 129, 130, 146, 130, 148, 129, 64, 130, 129, 129, 64, 130, 146, 130, 133, 130, 144, 130, 140, 130, 129, 130, 153, 129, 64, 130, 143, 130, 142, 129, 64, 130, 148, 130, 136, 130, 133, 129, 64, 130};

char word_4B1C68[98] = {111, 130, 140, 130, 129, 130, 153, 129, 64, 130, 129, 130, 135, 130, 129, 130, 137, 130, 142, 0, 0, 130, 114, 130, 149, 130, 131, 130, 139, 129, 64, 130, 137, 130, 148, 129, 73, 0, 130, 98, 129, 69, 130, 141, 130, 133, 130, 146, 130, 133, 129, 73, 0, 0, 0, 130, 102, 130, 143, 129, 64, 130, 136, 130, 143, 130, 141, 130, 133, 129, 73, 0, 0, 0, 130, 110, 130, 106, 0, 0, 0, 0, 129, 64, 0, 0, 0, 130, 102, 130, 143, 130, 148, 130, 131, 130, 136, 130};

char byte_4B1CCA[22] = {114, 130, 149, 130, 131, 130, 139, 129, 64, 130, 137, 130, 148, 129, 73, 0, 130, 98, 129, 69, 130, 141};

char unk_4B1CE0[53] = {110, 130, 106, 0, 0, 0, 0, 129, 64, 0, 0, 0, 130, 102, 130, 143, 130, 148, 130, 131, 130, 136, 130, 129, 129, 73, 0, 0, 0, 130, 109, 130, 143, 129, 64, 130, 151, 130, 129, 130, 153, 129, 73, 0, 0, 203, 217, 182, 200, 0, 0, 0, 130};

char unk_4B1D15[6] = {0, 129, 64, 0, 0, 0};

char dword_4B1D1B[40] = {217, 182, 200, 0, 0, 0, 130, 114, 130, 131, 130, 146, 130, 133, 130, 151, 129, 64, 130, 148, 130, 136, 130, 129, 130, 148, 129, 73, 0, 0, 0, 0, 129, 64, 0, 0, 0, 130, 114, 130};

char dword_4B1D43[31] = {0, 129, 64, 0, 0, 0, 130, 114, 130, 129, 130, 153, 129, 64, 130, 151, 130, 136, 130, 129, 130, 148, 129, 72, 0, 0, 0, 130, 102, 130, 143};

char dword_4B1D62[45] = {64, 130, 144, 130, 146, 130, 133, 130, 147, 130, 147, 129, 64, 130, 148, 130, 136, 130, 133, 129, 64, 130, 114, 130, 133, 130, 140, 130, 133, 130, 131, 130, 148, 129, 64, 130, 130, 130, 149, 130, 148, 130, 148, 130, 143};

char byte_4B1D8F[76] = {248, 0, 0, 0, 0, 0, 0, 0, 0, 183, 180, 187, 247, 0, 0, 0, 0, 0, 0, 129, 64, 184, 241, 182, 183, 188, 210, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 129, 64, 129, 64, 200, 173, 187, 247, 188, 210, 46, 46, 46, 46, 0, 0, 0, 0, 129, 64, 129, 64, 129, 64, 185, 166, 183, 242, 188, 210, 46, 46, 0, 0, 0, 0, 129, 64, 200};

char dword_4B1DDB[5] = {0, 0, 0, 0, 183};

char dword_4B1DE0[5] = {180, 187, 247, 0, 0};

char dword_4B1DE5[5] = {0, 0, 0, 0, 129};

char dword_4B1DEA[5] = {64, 184, 241, 182, 183};

char unk_4B1DEF[64] = {86, 37, 50, 100, 0, 0, 0, 130, 115, 130, 137, 130, 135, 130, 133, 130, 146, 0, 0, 37, 100, 80, 0, 0, 0, 188, 188, 196, 220, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 130, 107, 130, 117, 0, 0, 43, 37, 50, 100, 0, 0, 130, 110, 130, 106, 129, 73, 0, 0, 37, 100, 0};

char aLv2d_0[20] = {100, 80, 0, 0, 0, 188, 188, 196, 220, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0};

char aDp_4[6] = {188, 196, 220, 46, 46, 46};

char byte_4B1E49[16] = {107, 130, 117, 0, 0, 43, 37, 50, 100, 0, 0, 130, 110, 130, 106, 129};

char dword_4B1E59[6] = {37, 50, 100, 0, 0, 130};

char a2d_0[6] = {110, 130, 106, 129, 73, 0};

char byte_4B1E65[8] = {100, 0, 0, 130, 111, 0, 0, 130};

char aD_8[4] = {111, 0, 0, 130};

char byte_4B1E71[4] = {98, 130, 111, 130};

char byte_4B1E75[8] = {98, 130, 136, 130, 133, 130, 133, 130};

char byte_4B1E7D[24] = {80, 32, 37, 51, 100, 47, 37, 51, 100, 0, 0, 208, 194, 211, 206, 207, 183, 46, 46, 46, 46, 46, 46, 46};

char Format[12] = {194, 211, 206, 207, 183, 46, 46, 46, 46, 46, 46, 46};

char unk_4B1EA1[35] = {114, 130, 148, 130, 129, 130, 146, 130, 148, 129, 64, 130, 134, 130, 146, 130, 143, 130, 141, 129, 64, 130, 148, 130, 136, 130, 133, 129, 64, 130, 130, 130, 133, 130, 135};

char byte_4B1EC4[94] = {113, 130, 143, 130, 149, 130, 142, 130, 132, 0, 37, 50, 100, 80, 79, 73, 78, 84, 0, 0, 76, 86, 37, 50, 100, 0, 0, 205, 230, 188, 210, 181, 196, 202, 253, 193, 191, 129, 66, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 196, 209, 182, 200, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 209, 161, 212, 241, 196, 209, 182, 200, 129};

char byte_4B1F22[11] = {50, 100, 80, 79, 73, 78, 84, 0, 0, 76, 86};

char a2dpoint[10] = {86, 37, 50, 100, 0, 0, 205, 230, 188, 210};

char aLv2d_1[7] = {230, 188, 210, 181, 196, 202, 253};

char byte_4B1F3E[36] = {209, 182, 200, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 209, 161, 212, 241, 196, 209, 182, 200, 129, 66, 46, 46, 46, 46, 46};

char byte_4B1F62[22] = {161, 212, 241, 196, 209, 182, 200, 129, 66, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};

char byte_4B1F78[36] = {80, 46, 46, 46, 46, 46, 46, 0, 130, 81, 46, 46, 46, 46, 0, 130, 82, 46, 46, 46, 46, 0, 130, 83, 46, 46, 46, 46, 46, 46, 0, 130, 84, 46, 46, 46};

char unk_4B1F9C[44] = {64, 129, 64, 130, 96, 0, 129, 64, 129, 64, 130, 97, 0, 0, 37, 100, 80, 0, 0, 68, 69, 86, 73, 67, 69, 0, 0, 32, 32, 32, 32, 85, 80, 0, 0, 32, 32, 68, 79, 87, 78, 0, 0, 32};

char unk_4B1FC8[15] = {100, 80, 0, 0, 68, 69, 86, 73, 67, 69, 0, 0, 32, 32, 32};

char aDp_3[5] = {69, 86, 73, 67, 69};

char aDevice[8] = {32, 32, 32, 85, 80, 0, 0, 32};

char aUp_2[8] = {32, 68, 79, 87, 78, 0, 0, 32};

char aDown_1[8] = {32, 76, 69, 70, 84, 0, 0, 32};

char aLeft_1[8] = {82, 73, 71, 72, 84, 0, 0, 32};

char aRight_1[8] = {32, 32, 32, 32, 65, 0, 0, 32};

char aA[8] = {32, 32, 32, 32, 66, 0, 0, 32};

char aB[8] = {32, 32, 32, 32, 67, 0, 0, 32};

char aC[8] = {32, 32, 65, 43, 66, 0, 0, 32};

char aAB[8] = {32, 32, 65, 43, 67, 0, 0, 83};

char aAC[8] = {69, 76, 69, 67, 84, 0, 0, 32};

char aSelect_1[8] = {83, 84, 65, 82, 84, 0, 0, 129};

char aStart_1[8] = {64, 129, 64, 129, 64, 129, 64, 129};

char byte_4B203C[408] = {101, 130, 98, 196, 163, 202, 189, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 130, 114, 130, 133, 130, 140, 130, 133, 130, 131, 130, 148, 129, 64, 130, 151, 130, 136, 130, 133, 130, 148, 130, 136, 130, 133, 130, 146, 129, 64, 130, 134, 130, 146, 130, 137, 130, 133, 130, 142, 130, 132, 130, 140, 130, 153, 129, 64, 130, 134, 130, 137, 130, 146, 130, 133, 0, 0, 130, 104, 130, 147, 129, 64, 130, 143, 130, 142, 129, 64, 130, 143, 130, 146, 129, 64, 130, 143, 130, 134, 130, 134, 129, 66, 0, 0, 130, 98, 130, 111, 130, 116, 182, 211, 206, 233, 201, 232, 214, 195, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 130, 96, 129, 64, 130, 140, 130, 143, 130, 129, 130, 132, 129, 64, 130, 98, 130, 111, 130, 116, 129, 64, 130, 148, 130, 133, 130, 129, 130, 141, 129, 64, 130, 147, 130, 133, 130, 140, 130, 133, 130, 131, 130, 148, 130, 137, 130, 143, 130, 142, 130, 147, 129, 64, 130, 134, 130, 146, 130, 143, 130, 141, 129, 64, 130, 129, 0, 0, 130, 134, 130, 137, 130, 140, 130, 133, 129, 64, 130, 143, 130, 146, 129, 64, 130, 97, 129, 64, 130, 135, 130, 133, 130, 142, 130, 133, 130, 146, 130, 129, 130, 148, 130, 133, 129, 64, 130, 148, 130, 136, 130, 133, 130, 141, 129, 64, 130, 146, 130, 129, 130, 142, 130, 132, 130, 143, 130, 141, 130, 140, 130, 153, 129, 66, 0, 0, 206, 228, 198, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 161, 212, 241, 206, 228, 198, 247, 202, 253, 193, 191, 129, 66, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 182, 211, 206, 233, 202, 253, 193, 191, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};

char byte_4B21D4[28] = {114, 130, 133, 130, 140, 130, 133, 130, 131, 130, 148, 129, 64, 130, 151, 130, 136, 130, 133, 130, 148, 130, 136, 130, 133, 130, 146, 129};

char byte_4B21F0[58] = {104, 130, 147, 129, 64, 130, 143, 130, 142, 129, 64, 130, 143, 130, 146, 129, 64, 130, 143, 130, 134, 130, 134, 129, 66, 0, 0, 130, 98, 130, 111, 130, 116, 182, 211, 206, 233, 201, 232, 214, 195, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};

char byte_4B222A[28] = {98, 130, 111, 130, 116, 182, 211, 206, 233, 201, 232, 214, 195, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};

char byte_4B2246[36] = {96, 129, 64, 130, 140, 130, 143, 130, 129, 130, 132, 129, 64, 130, 98, 130, 111, 130, 116, 129, 64, 130, 148, 130, 133, 130, 129, 130, 141, 129, 64, 130, 147, 130, 133, 130};

char byte_4B226A[68] = {134, 130, 137, 130, 140, 130, 133, 129, 64, 130, 143, 130, 146, 129, 64, 130, 97, 129, 64, 130, 135, 130, 133, 130, 142, 130, 133, 130, 146, 130, 129, 130, 148, 130, 133, 129, 64, 130, 148, 130, 136, 130, 133, 130, 141, 129, 64, 130, 146, 130, 129, 130, 142, 130, 132, 130, 143, 130, 141, 130, 140, 130, 153, 129, 66, 0, 0, 206};

char byte_4B22AE[68] = {228, 198, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 161, 212, 241, 206, 228, 198, 247, 202, 253, 193, 191, 129, 66, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};

char byte_4B22F2[16] = {161, 212, 241, 206, 228, 198, 247, 202, 253, 193, 191, 129, 66, 46, 46, 46};

char byte_4B2302[80] = {211, 206, 233, 202, 253, 193, 191, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 130, 114, 130, 133, 130, 140, 130, 133, 130, 131, 130, 148, 129, 64, 130, 136, 130, 143, 130, 151, 129, 64, 130, 141, 130, 129, 130, 142, 130, 153, 129, 64, 130, 148, 130, 133, 130, 129, 130, 141, 130, 147, 129, 64, 130, 151, 130, 137, 130};

char byte_4B2352[32] = {114, 130, 133, 130, 140, 130, 133, 130, 131, 130, 148, 129, 64, 130, 136, 130, 143, 130, 151, 129, 64, 130, 141, 130, 129, 130, 142, 130, 153, 129, 64, 130};

char byte_4B2372[60] = {144, 130, 129, 130, 146, 130, 148, 130, 137, 130, 131, 130, 137, 130, 144, 130, 129, 130, 148, 130, 137, 130, 142, 130, 135, 129, 64, 130, 137, 130, 142, 129, 64, 130, 148, 130, 136, 130, 133, 129, 64, 130, 148, 130, 143, 130, 149, 130, 146, 130, 142, 130, 129, 130, 141, 130, 133, 130, 142, 130};

char byte_4B23AE[66] = {200, 200, 252, 182, 211, 206, 233, 202, 253, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 130, 114, 130, 133, 130, 140, 130, 133, 130, 131, 130, 148, 129, 64, 130, 136, 130, 143, 130, 151, 129, 64, 130, 141, 130, 129, 130, 142, 130, 153, 129, 64, 130, 148, 130, 133, 130, 129, 130, 141, 130, 147, 129, 64, 130};

char byte_4B23F0[22] = {114, 130, 133, 130, 140, 130, 133, 130, 131, 130, 148, 129, 64, 130, 136, 130, 143, 130, 151, 129, 64, 130};

char byte_4B2406[64] = {64, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 48, 50, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 66, 111, 100, 121, 37, 48, 50, 100, 46, 98, 109, 112, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 48, 49, 112};

char byte_4B2446[6] = {114, 97, 112, 104, 105, 99};

char aGraphic02ppale[24] = {114, 97, 112, 104, 105, 99, 92, 66, 111, 100, 121, 37, 48, 50, 100, 46, 98, 109, 112, 0, 0, 0, 0, 71};

char aGraphicBody02d_0[24] = {114, 97, 112, 104, 105, 99, 92, 48, 49, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 71};

char aGraphic01ppale[24] = {114, 97, 112, 104, 105, 99, 92, 66, 111, 100, 121, 37, 48, 50, 100, 46, 98, 109, 112, 0, 0, 0, 0, 66};

char aGraphicBody02d_1[24] = {71, 77, 92, 37, 115, 0, 0, 35, 76, 79, 79, 80, 80, 79, 83, 0, 0, 0, 0, 68, 101, 109, 111, 92};

char aBgmS[8] = {76, 79, 79, 80, 80, 79, 83, 0};

char aLooppos[12] = {101, 109, 111, 92, 79, 112, 101, 110, 105, 110, 103, 46};

char aDemoOpeningTxt[20] = {64, 0, 0, 129, 64, 0, 0, 130, 111, 130, 135, 129, 66, 130, 80, 0, 0, 130, 109, 130};

char byte_4B24D4[4] = {64, 0, 0, 130};

char byte_4B24D8[4] = {111, 130, 135, 129};

char byte_4B24DC[10] = {109, 130, 100, 130, 119, 130, 115, 0, 0, 130};

char byte_4B24E6[10] = {97, 130, 96, 130, 98, 130, 106, 0, 0, 130};

char byte_4B24F0[10] = {100, 130, 109, 130, 99, 0, 0, 130, 99, 130};

char byte_4B24FA[8] = {99, 130, 110, 130, 97, 0, 0, 130};

char byte_4B2502[8] = {108, 0, 0, 130, 99, 0, 0, 37};

char byte_4B250A[4] = {99, 0, 0, 37};

char byte_4B250E[4] = {50, 100, 0, 130};

char a2d_2[4] = {98, 130, 129, 130};

char byte_4B2516[20] = {64, 0, 0, 32, 65, 0, 0, 32, 66, 0, 0, 65, 66, 0, 0, 32, 79, 0, 0, 0};

char byte_4B252A[4] = {65, 0, 0, 32};

char aA_0[4] = {66, 0, 0, 65};

char aB_0[4] = {66, 0, 0, 32};

char aAb[4] = {79, 0, 0, 0};

char aO[6] = {70, 129, 64, 130, 111, 130};

char byte_4B2540[44] = {96, 130, 145, 130, 149, 130, 129, 130, 146, 130, 137, 130, 149, 130, 147, 0, 0, 130, 111, 130, 137, 130, 147, 130, 131, 130, 133, 130, 147, 0, 0, 130, 96, 130, 146, 130, 137, 130, 133, 130, 147, 0, 0, 130};

char byte_4B256C[18] = {111, 130, 137, 130, 147, 130, 131, 130, 133, 130, 147, 0, 0, 130, 96, 130, 146, 130};

char byte_4B257E[14] = {96, 130, 146, 130, 137, 130, 133, 130, 147, 0, 0, 130, 104, 130};

char byte_4B258C[12] = {104, 130, 147, 129, 64, 130, 148, 130, 136, 130, 137, 130};

char byte_4B2598[34] = {161, 212, 241, 200, 203, 206, 239, 129, 66, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 202};

char byte_4B25BA[34] = {199, 181, 196, 129, 73, 129, 73, 129, 64, 129, 64, 129, 64, 178, 187, 129, 73, 129, 73, 0, 0, 37, 50, 100, 0, 130, 117, 130, 114, 0, 0, 37, 51, 100};

char byte_4B25DC[22] = {50, 100, 0, 130, 117, 130, 114, 0, 0, 37, 51, 100, 32, 80, 79, 73, 78, 84, 0, 0, 0, 129};

char a2d_3[4] = {117, 130, 114, 0};

char byte_4B25F6[6] = {51, 100, 32, 80, 79, 73};

char a3dPoint[12] = {70, 129, 64, 208, 194, 200, 203, 206, 239, 129, 72, 46};

char byte_4B2608[24] = {199, 181, 196, 129, 73, 129, 73, 129, 64, 129, 64, 178, 187, 129, 73, 129, 73, 0, 0, 130, 111, 130, 135, 129};

char byte_4B2620[20] = {111, 130, 135, 129, 66, 130, 81, 0, 0, 130, 115, 130, 129, 130, 149, 130, 146, 130, 149, 130};

char byte_4B2634[10] = {115, 130, 129, 130, 149, 130, 146, 130, 149, 130};

char byte_4B263E[14] = {107, 130, 133, 130, 143, 0, 0, 129, 149, 0, 0, 129, 64, 0};

char byte_4B264C[8] = {149, 0, 0, 129, 64, 0, 0, 129};

char byte_4B2654[4] = {64, 0, 0, 129};

char byte_4B2658[4] = {91, 0, 0, 129};

char unk_4B265C[4] = {64, 0, 0, 129};

char byte_4B2660[4] = {91, 0, 0, 130};

char byte_4B2664[4] = {102, 130, 133, 130};

char byte_4B2668[14] = {98, 130, 129, 130, 142, 130, 131, 130, 133, 130, 146, 0, 0, 130};

char byte_4B2676[14] = {117, 130, 137, 130, 146, 130, 135, 130, 143, 0, 0, 130, 107, 130};

char byte_4B2684[12] = {107, 130, 137, 130, 130, 130, 146, 130, 129, 0, 0, 130};

char byte_4B2690[12] = {114, 130, 131, 130, 143, 130, 146, 130, 144, 130, 137, 130};

char byte_4B269C[16] = {114, 130, 129, 130, 135, 130, 137, 130, 148, 130, 148, 130, 129, 130, 146, 0};

char byte_4B26AC[18] = {97, 130, 140, 130, 143, 130, 143, 130, 132, 129, 64, 130, 115, 130, 153, 130, 144, 130};

char byte_4B26BE[22] = {100, 130, 142, 130, 148, 130, 133, 130, 146, 129, 64, 130, 130, 130, 140, 130, 143, 130, 143, 130, 132, 129};

char byte_4B26D4[34] = {161, 184, 246, 182, 211, 211, 209, 129, 66, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 37};

char byte_4B26F6[34] = {100, 62, 0, 37, 100, 62, 0, 37, 100, 62, 0, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 0, 0, 130, 230, 130, 177, 130, 230, 130, 177, 0, 0, 0};

char aD_10[4] = {100, 62, 0, 37};

char aD_11[4] = {100, 62, 0, 129};

char aD_12[4] = {64, 129, 64, 129};

char unk_4B2724[12] = {230, 130, 177, 130, 230, 130, 177, 0, 0, 0, 0, 77};

char byte_4B2730[12] = {101, 110, 117, 46, 119, 97, 118, 0, 0, 186, 207, 204};

char aMenuWav_0[10] = {207, 204, 229, 188, 188, 46, 46, 46, 46, 46};

char byte_4B2746[28] = {170, 129, 94, 185, 216, 129, 64, 186, 207, 204, 229, 188, 188, 129, 66, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};

char byte_4B2762[60] = {203, 186, 166, 207, 221, 218, 229, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 37, 100, 0, 0, 0, 0, 32, 37, 100, 80, 0, 0, 0, 0, 67, 80, 85, 0, 76, 86, 37, 50, 100, 0, 0, 0, 37, 52, 100, 0, 129, 72, 129};

char byte_4B279E[28] = {100, 0, 0, 0, 0, 32, 37, 100, 80, 0, 0, 0, 0, 67, 80, 85, 0, 76, 86, 37, 50, 100, 0, 0, 0, 37, 52, 100};

char aD_13[6] = {37, 100, 80, 0, 0, 0};

char aDp_0[8] = {80, 85, 0, 76, 86, 37, 50, 100};

char aCpu[4] = {86, 37, 50, 100};

char aLv2d[8] = {52, 100, 0, 129, 72, 129, 72, 129};

char a4d[4] = {72, 129, 72, 129};

char byte_4B27D8[12] = {199, 213, 226, 184, 246, 200, 203, 206, 239, 129, 72, 46};

char byte_4B27E4[34] = {199, 181, 196, 129, 73, 129, 73, 129, 64, 129, 64, 129, 64, 178, 187, 129, 73, 129, 73, 46, 46, 0, 0, 36, 49, 129, 64, 130, 113, 130, 143, 130, 149, 130};

char byte_4B2806[24] = {49, 129, 64, 130, 113, 130, 143, 130, 149, 130, 142, 130, 132, 129, 64, 129, 64, 129, 64, 129, 64, 36, 49, 129};

char a1_1[50] = {103, 130, 133, 130, 146, 130, 133, 129, 69, 130, 147, 129, 64, 130, 153, 130, 143, 130, 149, 130, 146, 129, 64, 130, 142, 130, 133, 130, 152, 130, 148, 129, 64, 130, 143, 130, 144, 130, 144, 130, 143, 130, 142, 130, 133, 130, 142, 130, 148, 0};

char byte_4B2850[52] = {70, 0, 0, 37, 50, 100, 0, 129, 70, 0, 0, 197, 197, 195, 251, 0, 129, 64, 129, 64, 0, 129, 64, 129, 64, 0, 188, 199, 194, 188, 0, 211, 206, 207, 183, 0, 0, 0, 0, 202, 199, 181, 196, 129, 73, 129, 73, 46, 46, 46, 46, 46};

char byte_4B2884[4] = {50, 100, 0, 129};

char a2d_4[4] = {70, 0, 0, 197};

char byte_4B288C[4] = {197, 195, 251, 0};

char dword_4B2890[5] = {64, 129, 64, 0, 129};

char dword_4B2895[5] = {64, 129, 64, 0, 188};

char dword_4B289A[5] = {199, 194, 188, 0, 211};

char dword_4B289F[5] = {206, 207, 183, 0, 0};

char dword_4B28A4[8] = {199, 181, 196, 129, 73, 129, 73, 46};

char byte_4B28AC[46] = {115, 129, 69, 130, 147, 129, 64, 130, 131, 130, 149, 130, 146, 130, 146, 130, 133, 130, 142, 130, 148, 129, 64, 130, 147, 130, 148, 130, 129, 130, 148, 130, 147, 129, 66, 129, 64, 130, 96, 130, 131, 130, 131, 130, 133, 130};

char aS_6[54] = {113, 130, 133, 0, 0, 0, 0, 62, 62, 0, 0, 62, 62, 0, 0, 62, 62, 0, 0, 77, 101, 110, 117, 46, 119, 97, 118, 0, 0, 0, 0, 130, 102, 130, 143, 129, 64, 130, 135, 130, 133, 130, 148, 129, 64, 129, 69, 130, 133, 130, 141, 129, 73, 0};

char dword_4B2910[8] = {62, 0, 0, 62, 62, 0, 0, 62};

char asc_4B2918[4] = {62, 0, 0, 62};

char asc_4B291C[4] = {62, 0, 0, 77};

char asc_4B2920[4] = {101, 110, 117, 46};

char aMenuWav_1[12] = {102, 130, 143, 129, 64, 130, 135, 130, 133, 130, 148, 129};

char byte_4B2930[24] = {49, 130, 108, 130, 129, 130, 148, 130, 131, 130, 136, 129, 64, 130, 113, 130, 133, 130, 147, 130, 149, 130, 140, 130};

char a1_0[32] = {37, 100, 32, 80, 79, 73, 78, 84, 0, 0, 130, 103, 130, 133, 130, 146, 130, 133, 129, 64, 130, 129, 130, 146, 130, 133, 129, 64, 130, 148, 130, 136};

char aDPoint[11] = {103, 130, 133, 130, 146, 130, 133, 129, 64, 130, 129};

char byte_4B2973[44] = {64, 129, 64, 36, 49, 197, 197, 195, 251, 36, 49, 46, 46, 46, 46, 46, 46, 0, 0, 130, 129, 130, 132, 0, 0, 0, 0, 0, 129, 149, 0, 0, 129, 170, 0, 0, 129, 171, 0, 0, 77, 101, 110, 117};

char byte_4B299F[20] = {129, 130, 132, 0, 0, 0, 0, 0, 129, 149, 0, 0, 129, 170, 0, 0, 129, 171, 0, 0};

char dword_4B29B3[9] = {149, 0, 0, 129, 170, 0, 0, 129, 171};

char byte_4B29BC[4] = {170, 0, 0, 129};

char byte_4B29C0[4] = {171, 0, 0, 77};

char byte_4B29C4[4] = {101, 110, 117, 46};

char aMenuWav_2[12] = {149, 0, 0, 60, 45, 0, 0, 45, 62, 0, 0, 77};

char byte_4B29D4[4] = {45, 0, 0, 45};

char asc_4B29D8[4] = {62, 0, 0, 77};

char asc_4B29DC[4] = {101, 110, 117, 46};

char aMenuWav_3[12] = {149, 0, 0, 60, 45, 0, 0, 45, 62, 0, 0, 130};

char byte_4B29EC[4] = {45, 0, 0, 45};

char asc_4B29F0[4] = {62, 0, 0, 130};

char asc_4B29F4[4] = {118, 130, 129, 130};

char byte_4B29F8[30] = {170, 129, 94, 185, 216, 129, 64, 179, 161, 190, 176, 201, 203, 186, 166, 207, 221, 218, 229, 129, 66, 46, 46, 46, 46, 46, 46, 46, 46, 46};

char byte_4B2A16[58] = {216, 46, 46, 46, 46, 0, 191, 170, 46, 46, 0, 0, 203, 192, 205, 246, 207, 221, 218, 229, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 130, 110, 130, 101, 130, 101, 0, 130, 110, 130, 109, 0, 0, 37, 51, 100, 32, 80, 79, 73, 78, 84};

char unk_4B2A50[13] = {192, 205, 246, 207, 221, 218, 229, 46, 46, 46, 46, 46, 46};

char byte_4B2A5D[24] = {110, 130, 101, 130, 101, 0, 130, 110, 130, 109, 0, 0, 37, 51, 100, 32, 80, 79, 73, 78, 84, 0, 0, 130};

char unk_4B2A75[13] = {51, 100, 32, 80, 79, 73, 78, 84, 0, 0, 130, 153, 129};

char a3dPoint_0[11] = {153, 129, 73, 0, 130, 111, 130, 146, 130, 143, 130};

char dword_4B2A8D[5] = {111, 130, 146, 130, 143};

char byte_4B2A92[54] = {114, 97, 112, 104, 105, 99, 92, 65, 110, 116, 101, 114, 111, 111, 109, 66, 111, 100, 121, 37, 48, 50, 100, 46, 98, 109, 112, 0, 0, 0, 0, 68, 97, 116, 97, 92, 65, 110, 116, 101, 114, 111, 111, 109, 84, 105, 108, 101, 80, 97, 116, 46, 100, 97};

char aGraphicAnteroo[32] = {97, 116, 97, 92, 65, 110, 116, 101, 114, 111, 111, 109, 84, 105, 108, 101, 80, 97, 116, 46, 100, 97, 116, 0, 0, 0, 0, 68, 97, 116, 97, 92};

char aDataAnteroomti[28] = {97, 116, 97, 92, 65, 110, 116, 101, 114, 111, 111, 109, 67, 71, 46, 100, 97, 116, 0, 87, 105, 110, 110, 101, 114, 46, 119, 97};

char aDataAnteroomcg[20] = {105, 110, 110, 101, 114, 46, 119, 97, 118, 0, 0, 76, 111, 115, 101, 114, 46, 119, 97, 118};

char aWinnerWav[12] = {111, 115, 101, 114, 46, 119, 97, 118, 0, 0, 0, 200};

char aLoserWav[12] = {203, 206, 239, 0, 208, 197, 207, 162, 0, 46, 46, 129};

char dword_4B2B30[5] = {197, 207, 162, 0, 46};

char dword_4B2B35[5] = {46, 129, 64, 0, 37};

char dword_4B2B3A[5] = {115, 181, 196, 208, 197};

char aS_7[21] = {114, 97, 112, 104, 105, 99, 92, 65, 110, 116, 101, 114, 111, 111, 109, 46, 98, 109, 112, 0, 0};

char aGraphicAnteroo_0[24] = {64, 129, 64, 0, 188, 199, 194, 188, 211, 206, 207, 183, 129, 66, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0};

char dword_4B2B6C[5] = {199, 194, 188, 211, 206};

char byte_4B2B71[20] = {199, 194, 188, 211, 206, 207, 183, 129, 64, 130, 110, 130, 106, 129, 73, 36, 49, 0, 0, 130};

char byte_4B2B85[20] = {143, 130, 146, 129, 64, 130, 135, 130, 143, 129, 64, 130, 136, 130, 143, 130, 141, 130, 133, 129};

char byte_4B2B99[24] = {106, 130, 137, 130, 131, 130, 139, 129, 64, 130, 129, 130, 147, 130, 147, 129, 64, 130, 129, 130, 142, 130, 132, 129};

char byte_4B2BB1[78] = {199, 194, 188, 46, 46, 46, 46, 129, 64, 130, 153, 130, 143, 130, 149, 130, 146, 129, 64, 130, 135, 130, 129, 130, 141, 130, 133, 129, 64, 130, 129, 130, 142, 130, 132, 129, 64, 130, 135, 130, 137, 130, 150, 130, 133, 129, 64, 130, 137, 130, 148, 129, 64, 130, 129, 130, 142, 130, 143, 130, 148, 130, 136, 130, 133, 130, 146, 129, 64, 130, 148, 130, 146, 130, 153, 129, 73, 0};

char byte_4B2BFF[80] = {120, 130, 143, 130, 149, 129, 64, 130, 151, 130, 143, 130, 142, 129, 69, 130, 148, 129, 64, 130, 140, 130, 143, 130, 147, 130, 133, 129, 64, 130, 147, 130, 143, 129, 64, 130, 133, 130, 129, 130, 147, 130, 137, 130, 140, 130, 153, 129, 64, 130, 142, 130, 133, 130, 152, 130, 148, 129, 64, 130, 148, 130, 137, 130, 141, 130, 133, 129, 73, 0, 0, 130, 108, 130, 137, 130, 147, 130, 149, 130};

char byte_4B2C4F[72] = {108, 130, 137, 130, 147, 130, 149, 130, 154, 130, 149, 129, 69, 130, 147, 129, 64, 130, 136, 130, 129, 130, 132, 129, 64, 130, 133, 130, 142, 130, 143, 130, 149, 130, 135, 130, 136, 129, 64, 130, 129, 130, 142, 130, 132, 129, 64, 130, 136, 130, 133, 130, 129, 130, 132, 130, 147, 129, 64, 130, 136, 130, 143, 130, 141, 130, 133, 129, 66, 0, 0, 130};

char byte_4B2C97[72] = {111, 130, 137, 130, 131, 130, 139, 129, 64, 130, 153, 130, 143, 130, 149, 130, 146, 130, 147, 130, 133, 130, 140, 130, 134, 129, 64, 130, 149, 130, 144, 129, 64, 130, 129, 130, 142, 130, 132, 129, 64, 130, 131, 130, 136, 130, 129, 130, 140, 130, 140, 130, 133, 130, 142, 130, 135, 130, 133, 129, 64, 130, 148, 130, 136, 130, 133, 129, 64, 130, 131, 130};

char byte_4B2CDF[102] = {209, 182, 200, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 188, 199, 194, 188, 0, 0, 209, 161, 212, 241, 196, 209, 182, 200, 129, 66, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 0, 0, 130, 98, 130, 136, 130, 133, 130, 131, 130, 139, 129, 64, 130, 131, 130, 149, 130, 146, 130, 146, 130, 133, 130, 142, 130, 148, 129, 64, 130, 146, 130, 129, 130, 142, 130, 139, 130, 137, 130, 142};

char byte_4B2D45[22] = {161, 212, 241, 196, 209, 182, 200, 129, 66, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};

char byte_4B2D5B[41] = {98, 130, 136, 130, 133, 130, 131, 130, 139, 129, 64, 130, 131, 130, 149, 130, 146, 130, 146, 130, 133, 130, 142, 130, 148, 129, 64, 130, 146, 130, 129, 130, 142, 130, 139, 130, 137, 130, 142, 130, 135};

char byte_4B2D84[46] = {161, 184, 246, 188, 199, 194, 188, 129, 66, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 188, 199, 194, 188, 129, 72, 46};

char byte_4B2DB2[40] = {199, 194, 188, 129, 72, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 129, 64, 129};

char byte_4B2DDA[38] = {64, 129, 64, 129, 64, 129, 64, 129, 64, 202, 199, 181, 196, 129, 73, 129, 73, 129, 64, 129, 64, 178, 187, 129, 73, 129, 73, 0, 0, 130, 108, 130, 129, 130, 142, 0, 0, 0};

char byte_4B2E00[30] = {108, 130, 129, 130, 142, 0, 0, 0, 0, 62, 62, 0, 0, 129, 171, 0, 0, 83, 97, 118, 101, 37, 48, 50, 100, 46, 100, 97, 116, 0};

char byte_4B2E1E[10] = {62, 0, 0, 129, 171, 0, 0, 83, 97, 118};

char asc_4B2E28[4] = {171, 0, 0, 83};

char byte_4B2E2C[4] = {97, 118, 101, 37};

char aSave02dDat[16] = {68, 83, 65, 86, 69, 68, 65, 84, 65, 0, 0, 83, 97, 118, 101, 37};

char aKdsavedata[12] = {97, 118, 101, 37, 48, 50, 100, 46, 100, 97, 116, 0};

char aSave02dDat_0[16] = {68, 83, 65, 86, 69, 68, 65, 84, 65, 0, 0, 78, 79, 37, 100, 0};

char aKdsavedata_0[12] = {79, 37, 100, 0, 0, 0, 0, 36, 49, 130, 107, 130};

char aNoD[8] = {49, 130, 107, 130, 117, 129, 64, 129};

char a1[28] = {170, 129, 94, 185, 216, 179, 161, 190, 176, 181, 196, 203, 192, 205, 246, 207, 221, 218, 229, 129, 66, 46, 46, 46, 46, 46, 46, 46};

char byte_4B2E8C[72] = {100, 130, 142, 130, 148, 130, 133, 130, 146, 129, 64, 130, 130, 130, 137, 130, 146, 130, 148, 130, 136, 129, 64, 130, 132, 130, 129, 130, 148, 130, 133, 0, 0, 130, 109, 130, 149, 130, 148, 130, 147, 0, 0, 130, 98, 130, 146, 130, 129, 130, 154, 130, 153, 0, 0, 129, 64, 129, 64, 129, 64, 203, 192, 205, 246, 202, 253, 193, 191, 129, 70, 0};

char byte_4B2ED4[34] = {109, 130, 149, 130, 148, 130, 147, 0, 0, 130, 98, 130, 146, 130, 129, 130, 154, 130, 153, 0, 0, 129, 64, 129, 64, 129, 64, 203, 192, 205, 246, 202, 253, 193};

char byte_4B2EF6[10] = {98, 130, 146, 130, 129, 130, 154, 130, 153, 0};

char byte_4B2F00[12] = {64, 129, 64, 129, 64, 203, 192, 205, 246, 202, 253, 193};

char byte_4B2F0C[32] = {101, 110, 117, 46, 119, 97, 118, 0, 0, 0, 0, 130, 103, 130, 133, 130, 146, 130, 133, 129, 64, 130, 131, 130, 143, 130, 141, 130, 133, 130, 147, 129};

char aMenuWav_4[12] = {103, 130, 133, 130, 146, 130, 133, 129, 64, 130, 131, 130};

char byte_4B2F38[62] = {104, 130, 148, 129, 69, 130, 147, 129, 64, 130, 132, 130, 143, 129, 91, 130, 143, 130, 146, 129, 91, 130, 132, 130, 137, 130, 133, 129, 64, 130, 148, 130, 137, 130, 141, 130, 133, 129, 64, 129, 91, 129, 64, 130, 133, 130, 137, 130, 148, 130, 136, 130, 133, 130, 146, 129, 64, 130, 135, 130, 143, 129};

char byte_4B2F76[72] = {107, 130, 143, 130, 129, 130, 132, 129, 64, 130, 134, 130, 129, 130, 137, 130, 140, 130, 133, 130, 132, 129, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 62, 0, 0, 62, 62, 0, 0, 68, 101, 109};

char word_4B2FBE[62] = {62, 0, 0, 62, 62, 0, 0, 68, 101, 109, 111, 92, 84, 105, 103, 101, 114, 68, 101, 109, 111, 48, 49, 46, 116, 120, 116, 0, 0, 0, 0, 68, 101, 109, 111, 92, 84, 105, 103, 101, 114, 68, 101, 109, 111, 48, 50, 46, 116, 120, 116, 0, 0, 0, 0, 68, 101, 109, 111, 92, 84, 105};

char asc_4B2FFC[4] = {62, 0, 0, 68};

char asc_4B3000[4] = {101, 109, 111, 92};

char aDemoTigerdemo0[24] = {101, 109, 111, 92, 84, 105, 103, 101, 114, 68, 101, 109, 111, 48, 50, 46, 116, 120, 116, 0, 0, 0, 0, 68};

char aDemoTigerdemo0_0[24] = {101, 109, 111, 92, 84, 105, 103, 101, 114, 68, 101, 109, 111, 48, 51, 46, 116, 120, 116, 0, 0, 0, 0, 68};

char aDemoTigerdemo0_1[24] = {101, 109, 111, 92, 69, 110, 100, 105, 110, 103, 48, 49, 46, 116, 120, 116, 0, 0, 0, 112, 97, 105, 114, 46};

char aDemoEnding01Tx[20] = {97, 105, 114, 46, 116, 120, 116, 0, 0, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35};

char aPairTxt[12] = {83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0};

char aStart_2[8] = {69, 78, 68, 0, 0, 0, 0, 35};

char aEnd[8] = {83, 84, 65, 82, 84, 0, 0, 129};

char aStart_3[8] = {72, 129, 72, 129, 72, 129, 72, 129};

char byte_4B3084[12] = {101, 112, 108, 97, 121, 46, 98, 105, 110, 0, 0, 130};

char FileName[12] = {102, 130, 143, 130, 143, 130, 132, 129, 64, 130, 135, 130};

char byte_4B309C[42] = {103, 130, 133, 130, 146, 130, 133, 129, 64, 130, 129, 130, 146, 130, 133, 129, 64, 130, 148, 130, 136, 130, 133, 129, 64, 130, 131, 130, 149, 130, 146, 130, 146, 130, 133, 130, 142, 130, 148, 129, 64, 130};

char byte_4B30C6[62] = {106, 130, 137, 130, 131, 130, 139, 129, 64, 130, 129, 130, 147, 130, 147, 129, 64, 130, 129, 130, 142, 130, 132, 129, 64, 130, 129, 130, 137, 130, 141, 129, 64, 130, 134, 130, 143, 130, 146, 129, 64, 130, 148, 130, 136, 130, 133, 129, 64, 130, 131, 130, 136, 130, 129, 130, 141, 130, 144, 130, 137, 130};

char byte_4B3104[78] = {212, 202, 190, 200, 203, 206, 239, 208, 197, 207, 162, 129, 66, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 50, 46, 98, 109, 112, 0, 0, 0, 0, 71};

char byte_4B3152[54] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 50, 46, 98, 109, 112, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 50, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0};

char aGraphicSystem0[24] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 50, 46, 98, 109, 112, 0, 0, 0, 0, 69};

char aGraphicSystem0_0[24] = {114, 114, 111, 114, 0, 0, 0, 131, 137, 131, 67, 131, 116, 131, 69, 131, 67, 131, 147, 131, 104, 131, 69, 138};

char aError_11[8] = {137, 131, 67, 131, 116, 131, 69, 131};

char byte_4B31C0[52] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 50, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 137, 131, 67, 131, 116, 131, 69, 131, 67, 131, 147, 131, 104, 131, 69, 138, 231, 131, 79, 131};

char aGraphicSystem0_1[24] = {114, 114, 111, 114, 0, 0, 0, 131, 137, 131, 67, 131, 116, 131, 69, 131, 67, 131, 147, 131, 104, 131, 69, 138};

char aError_12[8] = {137, 131, 67, 131, 116, 131, 69, 131};

char byte_4B3214[52] = {64, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 202, 199, 181, 196, 129, 73, 129, 73, 129, 64, 129, 64, 178, 187, 129, 73, 129, 73, 46, 46, 46, 46, 0, 0, 209, 161, 212, 241, 213, 226, 184, 246, 200, 203, 206, 239, 129};

char byte_4B3248[40] = {161, 212, 241, 213, 226, 184, 246, 200, 203, 206, 239, 129, 72, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};

char byte_4B3270[50] = {98, 130, 143, 130, 142, 130, 135, 130, 146, 130, 129, 130, 148, 130, 149, 130, 140, 130, 129, 130, 148, 130, 137, 130, 143, 130, 142, 130, 147, 129, 64, 130, 143, 130, 142, 129, 64, 130, 146, 130, 133, 130, 129, 130, 131, 130, 136, 130, 137, 130};

char byte_4B32A2[90] = {116, 130, 142, 130, 134, 130, 143, 130, 146, 130, 148, 130, 149, 130, 142, 130, 129, 130, 148, 130, 133, 130, 140, 130, 153, 129, 65, 129, 64, 130, 148, 130, 136, 130, 133, 129, 64, 130, 131, 130, 136, 130, 129, 130, 141, 130, 144, 130, 137, 130, 143, 130, 142, 130, 147, 130, 136, 130, 137, 130, 144, 129, 64, 130, 147, 130, 140, 130, 137, 130, 144, 130, 144, 130, 133, 130, 132, 129, 64, 130, 148, 130, 136, 130, 146, 130, 143, 130, 149, 130};

char byte_4B32FC[136] = {62, 0, 0, 62, 62, 0, 0, 129, 170, 0, 0, 129, 171, 0, 0, 68, 101, 109, 111, 92, 37, 115, 0, 77, 105, 115, 117, 122, 117, 95, 69, 110, 100, 46, 116, 120, 116, 0, 0, 83, 116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 46, 100, 97, 116, 0, 71, 114, 97, 112, 104, 105, 99, 92, 72, 101, 97, 100, 46, 98, 109, 112, 0, 0, 130, 120, 130, 143, 130, 149, 129, 64, 130, 141, 130, 129, 130, 153, 129, 64, 130, 136, 130, 129, 130, 150, 130, 133, 129, 64, 130, 140, 130, 143, 130, 147, 130, 148, 129, 65, 129, 64, 130, 130, 130, 149, 130, 148, 129, 64, 130, 136, 130, 133, 130, 146, 130, 133, 129, 64, 129, 91, 129};

char asc_4B3384[4] = {62, 0, 0, 129};

char asc_4B3388[4] = {170, 0, 0, 129};

char byte_4B338C[4] = {171, 0, 0, 68};

char byte_4B3390[4] = {101, 109, 111, 92};

char aDemoS[8] = {105, 115, 117, 122, 117, 95, 69, 110};

char aMisuzuEndTxt[16] = {116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 46, 100};

char aStageStage02dD[20] = {114, 97, 112, 104, 105, 99, 92, 72, 101, 97, 100, 46, 98, 109, 112, 0, 0, 130, 120, 130};

char aGraphicHeadBmp[18] = {120, 130, 143, 130, 149, 129, 64, 130, 141, 130, 129, 130, 153, 129, 64, 130, 136, 130};

char byte_4B33D2[102] = {107, 130, 133, 130, 134, 130, 148, 129, 94, 130, 113, 130, 137, 130, 135, 130, 136, 130, 148, 129, 70, 129, 64, 130, 144, 130, 140, 130, 129, 130, 153, 130, 133, 130, 146, 129, 64, 129, 64, 130, 116, 130, 144, 129, 94, 130, 99, 130, 143, 130, 151, 130, 142, 129, 70, 129, 64, 130, 148, 130, 133, 130, 129, 130, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char byte_4B3438[128] = {96, 0, 0, 130, 129, 0, 0, 130, 100, 0, 0, 130, 133, 0, 0, 130, 104, 0, 0, 130, 137, 0, 0, 130, 110, 0, 0, 130, 143, 0, 0, 130, 116, 0, 0, 130, 149, 0, 0, 131, 135, 0, 0, 131, 64, 0, 0, 131, 66, 0, 0, 131, 68, 0, 0, 131, 70, 0, 0, 131, 72, 0, 0, 130, 191, 0, 0, 131, 96, 0, 0, 37, 115, 37, 115, 0, 0, 0, 0, 130, 96, 0, 0, 130, 97, 0, 0, 130, 98, 0, 0, 130, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char byte_4B34B8[4] = {129, 0, 0, 130};

char byte_4B34BC[4] = {100, 0, 0, 130};

char byte_4B34C0[4] = {133, 0, 0, 130};

char byte_4B34C4[4] = {104, 0, 0, 130};

char byte_4B34C8[4] = {137, 0, 0, 130};

char byte_4B34CC[4] = {110, 0, 0, 130};

char byte_4B34D0[4] = {143, 0, 0, 130};

char byte_4B34D4[4] = {116, 0, 0, 130};

char byte_4B34D8[4] = {149, 0, 0, 131};

char byte_4B34DC[8] = {64, 0, 0, 131, 66, 0, 0, 131};

char byte_4B34E4[4] = {66, 0, 0, 131};

char byte_4B34E8[4] = {68, 0, 0, 131};

char byte_4B34EC[4] = {70, 0, 0, 131};

char byte_4B34F0[8] = {191, 0, 0, 131, 96, 0, 0, 37};

char byte_4B34F8[4] = {96, 0, 0, 37};

char byte_4B34FC[4] = {115, 37, 115, 0};

char aSS[8] = {96, 0, 0, 130, 97, 0, 0, 130};

char word_4B3508[2] = {0, 130};

char byte_4B350A[2] = {97, 0};

char word_4B350C[2] = {0, 130};

char byte_4B350E[2] = {98, 0};

char word_4B3510[2] = {0, 130};

char byte_4B3512[2] = {99, 0};

char word_4B3514[2] = {0, 0};

char byte_4B3516[410] = {114, 97, 112, 104, 105, 99, 92, 67, 104, 101, 101, 114, 71, 105, 114, 108, 95, 70, 97, 99, 101, 46, 98, 109, 112, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 67, 104, 101, 101, 114, 71, 105, 114, 108, 95, 83, 101, 108, 101, 99, 116, 46, 98, 109, 112, 0, 0, 0, 0, 107, 107, 95, 116, 101, 97, 109, 46, 116, 120, 116, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 66, 111, 100, 121, 37, 48, 50, 100, 46, 98, 109, 112, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 0, 0, 117, 110, 100, 111, 117, 107, 97, 105, 95, 99, 104, 97, 114, 115, 101, 108, 46, 119, 97, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 51, 100, 0, 129, 72, 129, 72, 129, 72, 129, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 101, 109, 111, 92, 75, 75, 95, 82, 101, 115, 117, 108, 116, 49, 46, 116, 120, 116, 0, 67, 104, 101};

char aGraphicCheergi[28] = {114, 97, 112, 104, 105, 99, 92, 67, 104, 101, 101, 114, 71, 105, 114, 108, 95, 83, 101, 108, 101, 99, 116, 46, 98, 109, 112, 0};

char aGraphicCheergi_0[32] = {107, 95, 116, 101, 97, 109, 46, 116, 120, 116, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 35, 83, 84, 65, 82};

char aKkTeamTxt[12] = {83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0};

char aStart_4[8] = {69, 78, 68, 0, 0, 0, 0, 35};

char aEnd_0[8] = {83, 84, 65, 82, 84, 0, 0, 35};

char aStart_5[8] = {69, 78, 68, 0, 0, 0, 0, 71};

char aEnd_1[8] = {114, 97, 112, 104, 105, 99, 92, 66};

char aGraphicBody02d_2[24] = {114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0};

char aGraphic02dppal_0[28] = {110, 100, 111, 117, 107, 97, 105, 95, 99, 104, 97, 114, 115, 101, 108, 46, 119, 97, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char aUndoukaiCharse[196] = {0, 0, 0, 37, 51, 100, 0, 129, 72, 129, 72, 129, 72, 129, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 101, 109, 111, 92, 75, 75, 95, 82, 101, 115, 117, 108, 116, 49, 46, 116, 120, 116, 0, 67, 104, 101, 101, 114, 71, 105, 114, 108, 115, 46, 119, 97, 118, 0, 0, 37, 100, 0, 0, 195, 251, 0, 0, 37, 51, 100, 0, 130, 111, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 67, 104, 101, 101, 114, 71, 105, 114, 108, 95, 80, 97, 108, 101, 116, 116, 101, 37, 48, 50, 100, 46, 98, 105, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 75, 75, 95, 82, 101, 115, 117, 108, 116, 50, 46, 98, 109, 112, 0, 0, 83, 111, 117, 110, 100, 92, 67, 104, 101, 101, 114, 38, 87, 104, 105, 115, 116, 108, 101, 46, 119, 97, 118, 0, 75, 75, 95, 82, 101, 115, 117, 108, 116, 49, 46, 119, 97, 118, 0, 0, 75};

char byte_4B3810[4] = {51, 100, 0, 129};

char a3d_1[4] = {72, 129, 72, 129};

char byte_4B3818[28] = {101, 109, 111, 92, 75, 75, 95, 82, 101, 115, 117, 108, 116, 49, 46, 116, 120, 116, 0, 67, 104, 101, 101, 114, 71, 105, 114, 108};

char aDemoKkResult1T[20] = {104, 101, 101, 114, 71, 105, 114, 108, 115, 46, 119, 97, 118, 0, 0, 37, 100, 0, 0, 195};

char aCheergirlsWav[16] = {100, 0, 0, 195, 251, 0, 0, 37, 51, 100, 0, 130, 111, 0, 0, 71};

char aD_18[16] = {114, 97, 112, 104, 105, 99, 92, 67, 104, 101, 101, 114, 71, 105, 114, 108};

char aGraphicCheergi_1[44] = {114, 97, 112, 104, 105, 99, 92, 75, 75, 95, 82, 101, 115, 117, 108, 116, 50, 46, 98, 109, 112, 0, 0, 83, 111, 117, 110, 100, 92, 67, 104, 101, 101, 114, 38, 87, 104, 105, 115, 116, 108, 101, 46, 119};

char aGraphicKkResul[24] = {111, 117, 110, 100, 92, 67, 104, 101, 101, 114, 38, 87, 104, 105, 115, 116, 108, 101, 46, 119, 97, 118, 0, 75};

char pszFileName[24] = {75, 95, 82, 101, 115, 117, 108, 116, 49, 46, 119, 97, 118, 0, 0, 75, 75, 95, 82, 101, 115, 117, 108, 116};

char aKkResult1Wav[16] = {75, 95, 82, 101, 115, 117, 108, 116, 50, 46, 119, 97, 118, 0, 0, 0};

char aKkResult2Wav[388] = {101, 109, 111, 92, 75, 75, 95, 82, 101, 115, 117, 108, 116, 51, 46, 116, 120, 116, 0, 42, 49, 115, 116, 0, 0, 0, 0, 42, 50, 110, 100, 0, 0, 0, 0, 42, 51, 114, 100, 0, 0, 0, 0, 68, 101, 109, 111, 92, 75, 75, 95, 82, 101, 115, 117, 108, 116, 51, 46, 116, 120, 116, 0, 71, 114, 97, 112, 104, 105, 99, 92, 75, 75, 95, 82, 101, 115, 117, 108, 116, 51, 95, 66, 111, 100, 121, 37, 48, 50, 100, 46, 98, 109, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char aDemoKkResult3T[20] = {49, 115, 116, 0, 0, 0, 0, 42, 50, 110, 100, 0, 0, 0, 0, 42, 51, 114, 100, 0};

char a1st_0[8] = {50, 110, 100, 0, 0, 0, 0, 42};

char a2nd_0[8] = {51, 114, 100, 0, 0, 0, 0, 68};

char a3rd_0[8] = {101, 109, 111, 92, 75, 75, 95, 82};

char aDemoKkResult3T_0[20] = {114, 97, 112, 104, 105, 99, 92, 75, 75, 95, 82, 101, 115, 117, 108, 116, 51, 95, 66, 111};

char aGraphicKkResul_0[258] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char byte_4B3B9A[4] = {0, 0, 0, 0};

char byte_4B3B9E[4] = {0, 0, 0, 0};

char byte_4B3BA2[4] = {0, 0, 0, 0};

char byte_4B3BA6[4] = {0, 0, 0, 0};

char byte_4B3BAA[4] = {0, 0, 0, 0};

char byte_4B3BAE[4] = {0, 0, 0, 0};

char byte_4B3BB2[4] = {0, 0, 0, 0};

char byte_4B3BB6[4] = {0, 0, 0, 0};

char byte_4B3BBA[4] = {0, 0, 0, 0};

char byte_4B3BBE[334] = {114, 97, 112, 104, 105, 99, 92, 83, 116, 97, 103, 101, 83, 101, 108, 101, 99, 116, 46, 98, 109, 112, 0, 83, 116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 95, 83, 101, 108, 101, 99, 116, 46, 98, 109, 112, 0, 0, 83, 116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 46, 98, 109, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 62, 0, 0, 37, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 100, 0, 0, 37, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 115, 0, 0, 37, 48, 50, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 101, 109, 111, 92, 75, 75, 95, 69, 110, 100, 46, 116, 120, 116, 0, 75, 75, 95, 69, 110, 100, 46, 119, 97, 118, 0, 0, 68, 68, 95, 69, 110, 100, 68, 101, 109, 111, 46, 116, 120, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char aGraphicStagese_0[24] = {116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 95, 83, 101, 108, 101, 99, 116, 46, 98, 109};

char aStageStage02dS_0[28] = {116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 46, 98, 109, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char aStageStage02dB_0[40] = {62, 0, 0, 37, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 100, 0, 0, 37, 115, 0, 0, 0};

char asc_4B3D68[4] = {100, 0, 0, 0};

char aD_0[28] = {100, 0, 0, 37, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char aD_1[4] = {115, 0, 0, 0};

char aS_0[32] = {115, 0, 0, 37, 48, 50, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char aS_1[4] = {48, 50, 100, 0};

char a02d_1[116] = {101, 109, 111, 92, 75, 75, 95, 69, 110, 100, 46, 116, 120, 116, 0, 75, 75, 95, 69, 110, 100, 46, 119, 97, 118, 0, 0, 68, 68, 95, 69, 110, 100, 68, 101, 109, 111, 46, 116, 120, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char aDemoKkEndTxt[16] = {75, 95, 69, 110, 100, 46, 119, 97, 118, 0, 0, 68, 68, 95, 69, 110};

char aKkEndWav[12] = {68, 95, 69, 110, 100, 68, 101, 109, 111, 46, 116, 120};

char aDdEnddemoTxt[724] = {98, 71, 0, 171, 98, 71, 0, 199, 98, 71, 0, 227, 98, 71, 0, 255, 98, 71, 0, 27, 99, 71, 0, 55, 99, 71, 0, 83, 99, 71, 0, 114, 99, 71, 0, 145, 99, 71, 0, 176, 99, 71, 0, 207, 99, 71, 0, 238, 99, 71, 0, 46, 100, 71, 0, 44, 100, 71, 0, 75, 100, 71, 0, 10, 0, 0, 0, 129, 64, 0, 130, 96, 0, 130, 97, 0, 130, 98, 0, 130, 99, 0, 130, 100, 0, 130, 101, 0, 130, 102, 0, 130, 103, 0, 130, 104, 0, 130, 105, 0, 130, 106, 0, 130, 107, 0, 130, 108, 0, 130, 109, 0, 130, 110, 0, 130, 111, 0, 130, 112, 0, 130, 113, 0, 130, 114, 0, 130, 115, 0, 130, 116, 0, 130, 117, 0, 130, 118, 0, 130, 119, 0, 130, 120, 0, 130, 121, 0, 130, 129, 0, 130, 130, 0, 130, 131, 0, 130, 132, 0, 130, 133, 0, 130, 134, 0, 130, 135, 0, 130, 136, 0, 130, 137, 0, 130, 138, 0, 130, 139, 0, 130, 140, 0, 130, 141, 0, 130, 142, 0, 130, 143, 0, 130, 144, 0, 130, 145, 0, 130, 146, 0, 130, 147, 0, 130, 148, 0, 130, 149, 0, 130, 150, 0, 130, 151, 0, 130, 152, 0, 130, 153, 0, 130, 154, 0, 60, 62, 0, 62, 62, 0, 144, 108, 0, 129, 119, 0, 129, 120, 0, 130, 240, 0, 130, 193, 0, 130, 225, 0, 130, 227, 0, 130, 229, 0, 130, 79, 0, 130, 80, 0, 130, 81, 0, 130, 82, 0, 130, 83, 0, 130, 84, 0, 130, 85, 0, 130, 86, 0, 130, 87, 0, 130, 88, 0, 130, 160, 0, 130, 162, 0, 130, 164, 0, 130, 166, 0, 130, 168, 0, 130, 169, 0, 130, 171, 0, 130, 173, 0, 130, 175, 0, 130, 177, 0, 130, 179, 0, 130, 181, 0, 130, 183, 0, 130, 185, 0, 130, 187, 0, 130, 189, 0, 130, 191, 0, 130, 194, 0, 130, 196, 0, 130, 198, 0, 130, 200, 0, 130, 201, 0, 130, 202, 0, 130, 203, 0, 130, 204, 0, 130, 205, 0, 130, 208, 0, 130, 211, 0, 130, 214, 0, 130, 217, 0, 130, 220, 0, 130, 221, 0, 130, 222, 0, 130, 223, 0, 130, 224, 0, 130, 226, 0, 130, 228, 0, 130, 230, 0, 130, 231, 0, 130, 232, 0, 130, 233, 0, 130, 234, 0, 130, 235, 0, 130, 237, 0, 130, 240, 0, 130, 241, 0, 131, 66, 0, 129, 117, 0, 186, 207, 0, 204, 229, 0, 188, 188, 0, 196, 220, 0, 191, 170, 0, 185, 216, 0, 129, 74, 0, 129, 75, 0, 129, 91, 0, 129, 99, 0, 129, 73, 0, 129, 72, 0, 129, 147, 0, 129, 94, 0, 129, 70, 0, 129, 118, 0, 194, 210, 0, 180, 230, 0, 185, 166, 0, 183, 242, 0, 202, 253, 0, 193, 191, 0, 213, 226, 0, 212, 241, 0, 181, 192, 0, 200, 225, 0, 201, 250, 0, 196, 209, 0, 188, 199, 0, 194, 188, 0, 208, 194, 0, 211, 206, 0, 207, 183, 0, 188, 204, 0, 208, 248, 0, 202, 189, 0, 203, 192, 0, 205, 246, 0, 190, 223, 0, 184, 196, 0, 177, 228, 0, 182, 212, 0, 192, 224, 0, 208, 205, 0, 179, 161, 0, 190, 176, 0, 205, 230, 0, 188, 210, 0, 207, 221, 0, 218, 229, 0, 196, 163, 0, 202, 194, 0, 201, 203, 0, 186, 166, 0, 206, 239, 0, 185, 202, 0, 213, 189, 0, 209, 161, 0, 184, 241, 0, 182, 183, 0, 177, 200, 46, 200, 252, 0, 60, 45, 0, 45, 62, 0, 62, 60, 0, 182, 211, 0, 206, 233, 0, 207, 212, 0, 202, 190, 0, 200, 203, 0, 129, 104, 0, 129, 65, 0, 129, 66, 0, 129, 69, 0, 36, 49, 0, 129, 105, 0, 129, 106, 0, 86, 83, 0, 129, 170, 0, 129, 171, 0, 49, 62, 0, 50, 62, 0, 51, 62, 0, 52, 62, 0, 53, 62, 0, 54, 62, 0, 55, 62, 0, 56, 62, 0, 202, 199, 0, 178, 187, 0, 181, 196, 0, 184, 246, 0, 211, 209, 0, 208, 197, 0, 207, 162, 0, 197, 197, 0, 195, 251, 0, 215, 197, 0};

char funcs_476478[64] = {0, 0, 0, 129, 64, 0, 130, 96, 0, 130, 97, 0, 130, 98, 0, 130, 99, 0, 130, 100, 0, 130, 101, 0, 130, 102, 0, 130, 103, 0, 130, 104, 0, 130, 105, 0, 130, 106, 0, 130, 107, 0, 130, 108, 0, 130, 109, 0, 130, 110, 0, 130, 111, 0, 130, 112, 0, 130, 113, 0, 130, 114, 0, 130};

char byte_4B4154[4] = {64, 0, 130, 96};

char byte_4B4158[1] = {0};

char byte_4B4159[739] = {170, 0, 130, 172, 0, 130, 174, 0, 130, 176, 0, 130, 178, 0, 130, 180, 0, 130, 182, 0, 130, 184, 0, 130, 186, 0, 130, 188, 0, 130, 190, 0, 130, 192, 0, 130, 195, 0, 130, 197, 0, 130, 199, 0, 130, 206, 0, 130, 209, 0, 130, 212, 0, 130, 215, 0, 130, 218, 0, 131, 75, 0, 131, 77, 0, 131, 79, 0, 131, 81, 0, 131, 83, 0, 131, 85, 0, 131, 87, 0, 131, 89, 0, 131, 91, 0, 131, 93, 0, 131, 95, 0, 131, 97, 0, 131, 100, 0, 131, 102, 0, 131, 104, 0, 131, 111, 0, 131, 114, 0, 131, 117, 0, 131, 120, 0, 131, 123, 0, 131, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 169, 0, 130, 171, 0, 130, 173, 0, 130, 175, 0, 130, 177, 0, 130, 179, 0, 130, 181, 0, 130, 183, 0, 130, 185, 0, 130, 187, 0, 130, 189, 0, 130, 191, 0, 130, 194, 0, 130, 196, 0, 130, 198, 0, 130, 205, 0, 130, 208, 0, 130, 211, 0, 130, 214, 0, 130, 217, 0, 131, 74, 0, 131, 76, 0, 131, 78, 0, 131, 80, 0, 131, 82, 0, 131, 84, 0, 131, 86, 0, 131, 88, 0, 131, 90, 0, 131, 92, 0, 131, 94, 0, 131, 96, 0, 131, 99, 0, 131, 101, 0, 131, 103, 0, 131, 110, 0, 131, 113, 0, 131, 116, 0, 131, 119, 0, 131, 122, 0, 131, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 207, 0, 130, 210, 0, 130, 213, 0, 130, 216, 0, 130, 219, 0, 131, 112, 0, 131, 115, 0, 131, 118, 0, 131, 121, 0, 131, 124, 0, 0, 0, 130, 205, 0, 130, 208, 0, 130, 211, 0, 130, 214, 0, 130, 217, 0, 131, 110, 0, 131, 113, 0, 131, 116, 0, 131, 119, 0, 131, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 125, 129, 91, 131, 86, 131, 131, 131, 139, 131, 65, 129, 91, 131, 99, 0, 0, 131, 74, 131, 147, 131, 116, 129, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 182, 130, 227, 130, 164, 130, 199, 130, 164, 130, 169, 0, 0, 0, 0, 0, 0, 131, 94, 131, 67, 131, 75, 129, 91, 131, 125, 131, 88, 131, 78, 0, 0, 0, 0, 0, 0, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 97, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 130, 96, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 215, 197, 181, 216, 130, 97, 46, 46, 46, 46, 46, 46, 46, 46, 46};

char byte_4B443C[1] = {0};

char byte_4B443D[243] = {169, 0, 130, 171, 0, 130, 173, 0, 130, 175, 0, 130, 177, 0, 130, 179, 0, 130, 181, 0, 130, 183, 0, 130, 185, 0, 130, 187, 0, 130, 189, 0, 130, 191, 0, 130, 194, 0, 130, 196, 0, 130, 198, 0, 130, 205, 0, 130, 208, 0, 130, 211, 0, 130, 214, 0, 130, 217, 0, 131, 74, 0, 131, 76, 0, 131, 78, 0, 131, 80, 0, 131, 82, 0, 131, 84, 0, 131, 86, 0, 131, 88, 0, 131, 90, 0, 131, 92, 0, 131, 94, 0, 131, 96, 0, 131, 99, 0, 131, 101, 0, 131, 103, 0, 131, 110, 0, 131, 113, 0, 131, 116, 0, 131, 119, 0, 131, 122, 0, 131, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char byte_4B4530[1] = {0};

char byte_4B4531[243] = {207, 0, 130, 210, 0, 130, 213, 0, 130, 216, 0, 130, 219, 0, 131, 112, 0, 131, 115, 0, 131, 118, 0, 131, 121, 0, 131, 124, 0, 0, 0, 130, 205, 0, 130, 208, 0, 130, 211, 0, 130, 214, 0, 130, 217, 0, 131, 110, 0, 131, 113, 0, 131, 116, 0, 131, 119, 0, 131, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 125, 129, 91, 131, 86, 131, 131, 131, 139, 131, 65, 129, 91, 131, 99, 0, 0, 131, 74, 131, 147, 131, 116, 129, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 182, 130, 227, 130, 164, 130, 199, 130, 164, 130, 169, 0, 0, 0, 0, 0, 0, 131, 94, 131, 67, 131, 75, 129, 91, 131, 125, 131, 88, 131, 78, 0, 0, 0, 0, 0, 0, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 97, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 130, 96, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 215, 197, 181, 216, 130, 97, 46};

char byte_4B4624[1] = {0};

char byte_4B4625[31] = {205, 0, 130, 208, 0, 130, 211, 0, 130, 214, 0, 130, 217, 0, 131, 110, 0, 131, 113, 0, 131, 116, 0, 131, 119, 0, 131, 122, 0, 0, 0};

char byte_4B4644[1] = {0};

char byte_4B4645[123] = {64, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 129, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 97, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 130, 96, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 215, 197, 181, 216, 130, 97, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 197, 181, 216, 130, 96, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};

char unk_4B46C0[1972] = {49, 130, 114, 130, 149, 130, 144, 130, 133, 130, 146, 130, 96, 130, 146, 130, 141, 130, 143, 130, 36, 49, 130, 103, 130, 153, 130, 144, 130, 133, 130, 146, 130, 96, 130, 146, 130, 141, 130, 143, 130, 130, 109, 130, 143, 130, 80, 130, 82, 130, 79, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 130, 109, 130, 143, 130, 80, 130, 82, 130, 80, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 130, 109, 130, 143, 130, 80, 130, 82, 130, 81, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 130, 109, 130, 143, 130, 80, 130, 82, 130, 82, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 130, 109, 130, 143, 130, 80, 130, 82, 130, 83, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 130, 109, 130, 143, 130, 80, 130, 82, 130, 84, 46, 46, 46, 46, 46, 46, 46, 46, 0, 0, 0, 130, 109, 130, 143, 130, 80, 130, 82, 130, 85, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 130, 109, 130, 143, 130, 80, 130, 82, 130, 86, 46, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 109, 130, 143, 130, 80, 130, 82, 130, 87, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 130, 109, 130, 143, 130, 80, 130, 82, 130, 88, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 0, 130, 109, 130, 143, 130, 80, 130, 83, 130, 79, 46, 46, 46, 46, 46, 46, 0, 0, 0, 0, 0, 0, 0, 0, 131, 76, 131, 98, 131, 78, 130, 170, 130, 214, 130, 241, 130, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 112, 131, 147, 131, 96, 130, 170, 130, 214, 130, 241, 130, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 191, 130, 225, 130, 173, 130, 191, 130, 182, 130, 201, 131, 76, 131, 98, 131, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 191, 130, 225, 130, 173, 130, 191, 130, 182, 130, 201, 131, 112, 131, 147, 131, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 95, 131, 69, 131, 147, 130, 181, 130, 189, 130, 196, 130, 171, 130, 204, 130, 160, 130, 189, 130, 220, 130, 169, 130, 160, 130, 181, 130, 204, 92, 110, 130, 191, 130, 169, 130, 173, 130, 197, 131, 76, 131, 98, 131, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 99, 130, 105, 131, 76, 131, 98, 131, 78, 131, 113, 131, 98, 131, 103, 130, 182, 130, 201, 92, 110, 68, 79, 130, 162, 130, 170, 130, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 95, 131, 98, 131, 86, 131, 133, 131, 87, 131, 131, 131, 147, 131, 118, 130, 182, 130, 201, 68, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 87, 131, 131, 131, 147, 131, 118, 130, 169, 130, 177, 130, 164, 130, 191, 130, 227, 130, 164, 130, 201, 92, 110, 131, 76, 131, 98, 131, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 87, 131, 131, 131, 147, 131, 118, 130, 169, 130, 177, 130, 164, 130, 191, 130, 227, 130, 164, 130, 201, 92, 110, 131, 112, 131, 147, 131, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 75, 129, 91, 131, 104, 130, 170, 130, 214, 130, 241, 130, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 87, 131, 131, 131, 147, 131, 118, 130, 191, 130, 227, 130, 164, 130, 201, 131, 76, 131, 98, 131, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 87, 131, 131, 131, 147, 131, 118, 130, 191, 130, 227, 130, 164, 130, 169, 130, 99, 130, 105, 130, 191, 130, 227, 130, 164, 130, 201, 92, 110, 131, 76, 131, 98, 131, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 200, 130, 176, 130, 170, 130, 214, 130, 241, 130, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 200, 130, 200, 130, 223, 131, 87, 131, 131, 131, 147, 131, 118, 130, 191, 130, 227, 130, 164, 130, 201, 92, 110, 131, 112, 131, 147, 131, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 183, 130, 162, 130, 191, 130, 229, 130, 173, 131, 87, 131, 131, 131, 147, 131, 118, 130, 191, 130, 227, 130, 164, 130, 201, 92, 110, 131, 112, 131, 147, 131, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 112, 131, 147, 131, 96, 130, 189, 130, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 95, 131, 98, 131, 86, 131, 133, 130, 169, 130, 99, 130, 105, 130, 191, 130, 227, 130, 164, 130, 201, 92, 110, 131, 112, 131, 147, 131, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 95, 131, 98, 131, 86, 131, 133, 130, 191, 130, 227, 130, 164, 130, 201, 131, 112, 131, 147, 131, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 95, 131, 98, 131, 86, 131, 133, 130, 191, 130, 227, 130, 164, 130, 201, 130, 220, 130, 166, 130, 81, 130, 169, 130, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 177, 130, 164, 130, 176, 130, 171, 130, 240, 130, 183, 130, 241, 130, 186, 130, 241, 130, 197, 131, 75, 129, 91, 131, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 212, 130, 171, 130, 240, 130, 224, 130, 193, 130, 196, 131, 112, 131, 147, 131, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 95, 131, 98, 131, 86, 131, 133, 130, 191, 130, 227, 130, 164, 130, 201, 92, 110, 130, 212, 130, 171, 130, 240, 130, 200, 130, 176, 130, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 99, 130, 105, 130, 191, 130, 227, 130, 164, 130, 201, 92, 110, 130, 212, 130, 171, 130, 240, 130, 200, 130, 176, 130, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 218, 130, 164, 130, 240, 130, 224, 130, 193, 130, 196, 131, 112, 131, 147, 131, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 80, 130, 81, 130, 169, 130, 162, 130, 204, 130, 160, 130, 198, 131, 112, 131, 147, 131, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 79, 130, 81, 130, 169, 130, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 189, 130, 168, 130, 234, 130, 196, 130, 162, 130, 233, 131, 76, 131, 131, 131, 137, 130, 240, 92, 110, 130, 169, 130, 194, 130, 162, 130, 197, 131, 76, 131, 98, 131, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 173, 130, 164, 130, 191, 130, 227, 130, 164, 130, 201, 130, 162, 130, 233, 130, 198, 130, 171, 130, 201, 92, 110, 68, 79, 129, 123, 131, 112, 131, 147, 131, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 173, 130, 164, 130, 191, 130, 227, 130, 164, 130, 201, 130, 162, 130, 233, 130, 198, 130, 171, 130, 201, 92, 110, 68, 79, 129, 123, 131, 112, 131, 147, 131, 96, 129, 123, 131, 76, 131, 98, 131, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 169, 130, 170, 130, 241, 130, 190, 130, 198, 130, 171, 130, 201, 92, 110, 85, 80, 130, 81, 130, 169, 130, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char unk_4B4E74[276] = {76, 131, 98, 131, 78, 130, 170, 130, 214, 130, 241, 130, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 112, 131, 147, 131, 96, 130, 170, 130, 214, 130, 241, 130, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 191, 130, 225, 130, 173, 130, 191, 130, 182, 130, 201, 131, 76, 131, 98, 131, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 191, 130, 225, 130, 173, 130, 191, 130, 182, 130, 201, 131, 112, 131, 147, 131, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 95, 131, 69, 131, 147, 130, 181, 130, 189, 130, 196, 130, 171, 130, 204, 130, 160, 130, 189, 130, 220, 130, 169, 130, 160, 130, 181, 130, 204, 92, 110, 130, 191, 130, 169, 130, 173, 130, 197, 131, 76, 131, 98, 131, 78, 0, 0, 0};

char unk_4B4F88[2168] = {177, 130, 164, 130, 176, 130, 171, 130, 240, 130, 173, 130, 231, 130, 193, 130, 196, 130, 224, 92, 110, 130, 208, 130, 233, 130, 220, 130, 200, 130, 173, 130, 200, 130, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 177, 130, 164, 130, 176, 130, 171, 130, 240, 130, 173, 130, 231, 130, 193, 130, 196, 130, 224, 92, 110, 130, 208, 130, 233, 130, 220, 130, 200, 130, 173, 130, 200, 130, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 103, 130, 111, 130, 204, 130, 176, 130, 241, 130, 181, 130, 229, 130, 164, 130, 197, 92, 110, 130, 177, 130, 164, 130, 176, 130, 171, 130, 232, 130, 229, 130, 173, 130, 170, 130, 160, 130, 170, 130, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 103, 130, 111, 130, 204, 130, 176, 130, 241, 130, 181, 130, 229, 130, 164, 130, 197, 92, 110, 130, 218, 130, 164, 130, 172, 130, 229, 130, 232, 130, 229, 130, 173, 130, 170, 130, 160, 130, 170, 130, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 183, 130, 206, 130, 226, 130, 179, 130, 201, 131, 123, 129, 91, 131, 105, 131, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 104, 131, 98, 131, 87, 131, 123, 129, 91, 131, 139, 130, 204, 130, 160, 130, 194, 130, 169, 130, 162, 130, 170, 92, 110, 130, 164, 130, 220, 130, 173, 130, 200, 130, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 201, 130, 190, 130, 241, 131, 87, 131, 131, 131, 147, 131, 118, 92, 110, 130, 179, 130, 231, 130, 201, 130, 206, 130, 203, 130, 201, 131, 123, 129, 91, 131, 105, 131, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 189, 130, 220, 130, 201, 130, 212, 130, 171, 130, 240, 130, 200, 130, 176, 130, 189, 130, 198, 130, 171, 130, 204, 92, 110, 131, 95, 131, 129, 129, 91, 131, 87, 130, 170, 130, 160, 130, 170, 130, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 65, 131, 67, 131, 101, 131, 128, 130, 204, 130, 177, 130, 164, 130, 169, 130, 170, 130, 81, 130, 206, 130, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 169, 130, 189, 130, 196, 130, 212, 130, 171, 130, 240, 130, 224, 130, 193, 130, 196, 130, 162, 130, 196, 130, 224, 92, 110, 131, 75, 129, 91, 131, 104, 130, 197, 130, 171, 130, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 206, 130, 173, 130, 190, 130, 241, 130, 170, 130, 169, 130, 200, 130, 231, 130, 184, 92, 110, 130, 206, 130, 173, 130, 205, 130, 194, 130, 183, 130, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 75, 129, 91, 131, 104, 131, 123, 131, 94, 131, 147, 130, 197, 130, 168, 130, 171, 130, 160, 130, 170, 130, 233, 130, 204, 130, 240, 92, 110, 130, 168, 130, 173, 130, 231, 130, 185, 130, 231, 130, 234, 130, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 221, 130, 184, 130, 204, 130, 200, 130, 169, 130, 201, 130, 162, 130, 233, 130, 198, 92, 110, 130, 204, 130, 164, 130, 232, 130, 229, 130, 173, 130, 170, 130, 160, 130, 170, 130, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 83, 112, 67, 104, 97, 114, 71, 114, 97, 112, 104, 105, 99, 37, 48, 50, 100, 46, 116, 120, 116, 0, 0, 0, 35, 71, 82, 65, 80, 72, 73, 67, 83, 84, 65, 82, 84, 0, 0, 0, 35, 71, 82, 65, 80, 72, 73, 67, 69, 78, 68, 0, 71, 114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 0, 0, 83, 112, 101, 99, 105, 97, 108, 77, 111, 118, 101, 76, 105, 115, 116, 46, 116, 120, 116, 0, 130, 160, 0, 0, 32, 65, 0, 0, 32, 66, 0, 0, 65, 66, 0, 0, 32, 79, 0, 0, 37, 50, 100, 47, 37, 50, 100, 13, 10, 0, 0, 0, 32, 32, 32, 37, 115, 140, 94, 58, 0, 0, 0, 0, 32, 130, 200, 130, 181, 44, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 0, 0, 0, 32, 130, 200, 130, 181, 44, 0, 0, 32, 37, 115, 44, 0, 0, 0, 0, 32, 0, 0, 0, 13, 10, 0, 0, 13, 10, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 72, 101, 97, 100, 46, 98, 109, 112, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 0, 0, 75, 68, 46, 105, 110, 105, 0, 0, 37, 115, 92, 37, 115, 0, 0, 0, 67, 104, 97, 114, 68, 97, 116, 97, 46, 116, 120, 116, 0, 0, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 68, 97, 116, 97, 92, 67, 104, 101, 101, 114, 71, 105, 114, 108, 68, 97, 116, 97, 46, 116, 120, 116, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 35, 68, 69, 70, 0, 0, 0, 0, 35, 68, 69, 70, 69, 78, 68, 0, 68, 101, 109, 111, 92, 75, 75, 95, 82, 101, 115, 117, 108, 116, 49, 46, 116, 120, 116, 0, 42, 49, 115, 116, 0, 0, 0, 0, 42, 50, 110, 100, 0, 0, 0, 0, 42, 51, 114, 100, 0, 0, 0, 0, 42, 66, 105, 114, 105, 0, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 87, 112, 71, 114, 97, 112, 104, 105, 99, 32, 32, 0, 71, 114, 97, 112, 104, 105, 99, 92, 83, 107, 105, 110, 67, 111, 108, 111, 114, 46, 116, 120, 116, 0, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 37, 115, 92, 68, 97, 116, 97, 92, 87, 101, 97, 112, 111, 110, 84, 80, 46, 100, 97, 116, 0, 0, 0, 0, 37, 115, 92, 68, 97, 116, 97, 92, 87, 101, 97, 112, 111, 110, 67, 71, 46, 100, 97, 116, 0, 0, 0, 0, 37, 115, 92, 68, 97, 116, 97, 92, 84, 105, 108, 101, 80, 97, 116, 37, 48, 50, 100, 46, 100, 97, 116, 0, 37, 115, 92, 68, 97, 116, 97, 92, 67, 104, 97, 114, 71, 114, 97, 112, 104, 105, 99, 37, 48, 50, 100, 46, 100, 97, 116, 0, 37, 115, 92, 68, 97, 116, 97, 92, 109, 105, 115, 117, 122, 117, 95, 116, 112, 46, 100, 97, 116, 0, 0, 0, 37, 115, 92, 68, 97, 116, 97, 92, 109, 105, 115, 117, 122, 117, 95, 99, 103, 46, 100, 97, 116, 0, 0, 0, 37, 115, 92, 68, 97, 116, 97, 92, 68, 111, 117, 98, 108, 101, 95, 68, 114, 97, 103, 111, 110, 95, 84, 80, 46, 100, 97, 116, 0, 0, 0, 0, 37, 115, 92, 68, 97, 116, 97, 92, 68, 111, 117, 98, 108, 101, 95, 68, 114, 97, 103, 111, 110, 95, 67, 71, 46, 100, 97, 116, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 67, 104, 97, 114, 83, 101, 108, 66, 111, 100, 121, 46, 98, 109, 112, 0, 71, 114, 97, 112, 104, 105, 99, 92, 67, 104, 97, 114, 83, 101, 108, 66, 111, 100, 121, 46, 98, 109, 112, 0, 71, 114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 70, 111, 110, 116, 48, 48, 46, 98, 109, 112, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 116, 131, 72, 131, 147, 131, 103, 131, 112, 131, 94, 129, 91, 131, 147, 141, 236, 144, 172, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 129, 66, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 70, 111, 110, 116, 48, 49, 46, 98, 109, 112, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 116, 131, 72, 131, 147, 131, 103, 131, 112, 131, 94, 129, 91, 131, 147, 141, 236, 144, 172, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 129, 66, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 68, 97, 109, 97, 103, 101, 70, 111, 110, 116, 46, 98, 109, 112, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 95, 131, 129, 129, 91, 131, 87, 151, 112, 131, 116, 131, 72, 131, 147, 131, 103, 131, 112, 131, 94, 129, 91, 131, 147, 141, 236, 144, 172, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 129, 66, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 52, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 129, 131, 106, 131, 133, 129, 91, 151, 112, 148, 119, 140, 105, 131, 112, 131, 94, 129, 91, 131, 147, 141, 236, 144, 172, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 129, 66, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 52, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 129, 131, 106, 131, 133, 129, 91, 151, 112, 148, 189, 147, 93, 148, 119, 140, 105, 131, 112, 131, 94, 129, 91, 131, 147, 141, 236, 144, 172, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 129, 66, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 52, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 129, 131, 106, 131, 133, 129, 91, 151, 112, 131, 116, 131, 140, 129, 91, 131, 128, 131, 112, 131, 94, 129, 91, 131, 147, 141, 236, 144, 172, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 129, 66, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 69, 102, 102, 101, 99, 116, 48, 49, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 71, 131, 116, 131, 70, 131, 78, 131, 103, 131, 79, 131, 137, 131, 116, 131, 66, 131, 98, 131, 78, 147, 199, 130, 221, 141, 158, 130, 221, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 129, 66, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 69, 102, 102, 101, 99, 116, 48, 49, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 71, 131, 116, 131, 70, 131, 78, 131};

char unk_4B5800[744] = {114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 83, 112, 67, 104, 97, 114, 71, 114, 97, 112, 104, 105, 99, 37, 48, 50, 100, 46, 116, 120, 116, 0, 0, 0, 35, 71, 82, 65, 80, 72, 73, 67, 83, 84, 65, 82, 84, 0, 0, 0, 35, 71, 82, 65, 80, 72, 73, 67, 69, 78, 68, 0, 71, 114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 0, 0, 83, 112, 101, 99, 105, 97, 108, 77, 111, 118, 101, 76, 105, 115, 116, 46, 116, 120, 116, 0, 130, 160, 0, 0, 32, 65, 0, 0, 32, 66, 0, 0, 65, 66, 0, 0, 32, 79, 0, 0, 37, 50, 100, 47, 37, 50, 100, 13, 10, 0, 0, 0, 32, 32, 32, 37, 115, 140, 94, 58, 0, 0, 0, 0, 32, 130, 200, 130, 181, 44, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 0, 0, 0, 32, 130, 200, 130, 181, 44, 0, 0, 32, 37, 115, 44, 0, 0, 0, 0, 32, 0, 0, 0, 13, 10, 0, 0, 13, 10, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 72, 101, 97, 100, 46, 98, 109, 112, 0, 0, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 0, 0, 75, 68, 46, 105, 110, 105, 0, 0, 37, 115, 92, 37, 115, 0, 0, 0, 67, 104, 97, 114, 68, 97, 116, 97, 46, 116, 120, 116, 0, 0, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 68, 97, 116, 97, 92, 67, 104, 101, 101, 114, 71, 105, 114, 108, 68, 97, 116, 97, 46, 116, 120, 116, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 35, 68, 69, 70, 0, 0, 0, 0, 35, 68, 69, 70, 69, 78, 68, 0, 68, 101, 109, 111, 92, 75, 75, 95, 82, 101, 115, 117, 108, 116, 49, 46, 116, 120, 116, 0, 42, 49, 115, 116, 0, 0, 0, 0, 42, 50, 110, 100, 0, 0, 0, 0, 42, 51, 114, 100, 0, 0, 0, 0, 42, 66, 105, 114, 105, 0, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 87, 112, 71, 114, 97, 112, 104, 105, 99, 32, 32, 0, 71, 114, 97, 112, 104, 105, 99, 92, 83, 107, 105, 110, 67, 111, 108, 111, 114, 46, 116, 120, 116, 0, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 37, 115, 92, 68, 97, 116, 97, 92, 87, 101, 97, 112, 111, 110, 84, 80, 46, 100, 97, 116, 0, 0, 0, 0, 37, 115, 92, 68, 97, 116, 97, 92, 87, 101, 97, 112, 111, 110, 67, 71, 46, 100, 97, 116, 0, 0, 0, 0, 37, 115, 92, 68, 97, 116, 97, 92, 84, 105, 108, 101, 80, 97, 116, 37, 48, 50, 100, 46, 100, 97, 116, 0, 37, 115, 92, 68, 97, 116, 97, 92, 67, 104, 97, 114, 71, 114, 97, 112, 104, 105, 99, 37, 48, 50, 100, 46, 100, 97, 116, 0, 37, 115, 92, 68, 97, 116, 97, 92, 109, 105, 115, 117, 122, 117, 95, 116, 112, 46, 100, 97, 116, 0, 0, 0, 37, 115, 92, 68, 97, 116, 97, 92, 109, 105, 115, 117, 122, 117, 95, 99, 103, 46, 100, 97, 116, 0, 0, 0, 37, 115, 92, 68, 97, 116, 97, 92, 68, 111, 117, 98, 108, 101, 95, 68, 114, 97, 103, 111, 110, 95, 84, 80, 46, 100, 97, 116, 0, 0, 0, 0, 37, 115, 92, 68, 97, 116, 97, 92, 68, 111, 117, 98, 108, 101, 95, 68, 114, 97, 103, 111, 110, 95, 67, 71, 46, 100, 97, 116, 0};

char aGraphic02dppal_1[28] = {114, 97, 112, 104, 105, 99, 92, 83, 112, 67, 104, 97, 114, 71, 114, 97, 112, 104, 105, 99, 37, 48, 50, 100, 46, 116, 120, 116};

char aGraphicSpcharg[32] = {71, 82, 65, 80, 72, 73, 67, 83, 84, 65, 82, 84, 0, 0, 0, 35, 71, 82, 65, 80, 72, 73, 67, 69, 78, 68, 0, 71, 114, 97, 112, 104};

char String1[16] = {71, 82, 65, 80, 72, 73, 67, 69, 78, 68, 0, 71, 114, 97, 112, 104};

char aGraphicend[12] = {114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112};

char aGraphic02dppal_2[28] = {112, 101, 99, 105, 97, 108, 77, 111, 118, 101, 76, 105, 115, 116, 46, 116, 120, 116, 0, 130, 160, 0, 0, 32, 65, 0, 0, 32};

char aSpecialmovelis[20] = {160, 0, 0, 32, 65, 0, 0, 32, 66, 0, 0, 65, 66, 0, 0, 32, 79, 0, 0, 37};

char unk_4B5B70[4] = {65, 0, 0, 32};

char word_4B5B74[2] = {0, 32};

char byte_4B5B76[2] = {66, 0};

char word_4B5B78[2] = {0, 65};

char byte_4B5B7A[2] = {66, 0};

char word_4B5B7C[2] = {0, 32};

char byte_4B5B7E[2] = {79, 0};

char word_4B5B80[2] = {0, 37};

char byte_4B5B82[2] = {50, 100};

char a2d2d_0[12] = {32, 32, 37, 115, 140, 94, 58, 0, 0, 0, 0, 32};

char unk_4B5B90[12] = {130, 200, 130, 181, 44, 32, 32, 32, 32, 32, 32, 32};

char unk_4B5B9C[32] = {130, 200, 130, 181, 44, 0, 0, 32, 37, 115, 44, 0, 0, 0, 0, 32, 0, 0, 0, 13, 10, 0, 0, 13, 10, 0, 0, 71, 114, 97, 112, 104};

char unk_4B5BBC[8] = {37, 115, 44, 0, 0, 0, 0, 32};

char aS_2[8] = {0, 0, 0, 13, 10, 0, 0, 13};

char asc_4B5BCC[4] = {10, 0, 0, 13};

char asc_4B5BD0[4] = {10, 0, 0, 71};

char asc_4B5BD4[4] = {114, 97, 112, 104};

char aGraphicHeadBmp_0[20] = {114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46};

char aGraphic02dppal_3[28] = {68, 46, 105, 110, 105, 0, 0, 37, 115, 92, 37, 115, 0, 0, 0, 67, 104, 97, 114, 68, 97, 116, 97, 46, 116, 120, 116, 0};

char aKdIni[8] = {115, 92, 37, 115, 0, 0, 0, 67};

char aSS_0[8] = {104, 97, 114, 68, 97, 116, 97, 46};

char aChardataTxt[16] = {83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 35};

char aStart_6[8] = {69, 78, 68, 0, 0, 0, 0, 35};

char aEnd_2[8] = {83, 84, 65, 82, 84, 0, 0, 35};

char aStart_7[8] = {69, 78, 68, 0, 0, 0, 0, 68};

char aEnd_3[8] = {97, 116, 97, 92, 67, 104, 101, 101};

char aDataCheergirld[24] = {83, 84, 65, 82, 84, 0, 0, 35, 69, 78, 68, 0, 0, 0, 0, 35, 68, 69, 70, 0, 0, 0, 0, 35};

char aStart_8[8] = {69, 78, 68, 0, 0, 0, 0, 35};

char aEnd_4[8] = {68, 69, 70, 0, 0, 0, 0, 35};

char aDef[8] = {68, 69, 70, 69, 78, 68, 0, 68};

char aDefend_0[8] = {101, 109, 111, 92, 75, 75, 95, 82};

char aDemoKkResult1T_0[20] = {49, 115, 116, 0, 0, 0, 0, 42, 50, 110, 100, 0, 0, 0, 0, 42, 51, 114, 100, 0};

char a1st_1[8] = {50, 110, 100, 0, 0, 0, 0, 42};

char a2nd_1[8] = {51, 114, 100, 0, 0, 0, 0, 42};

char a3rd_1[8] = {66, 105, 114, 105, 0, 0, 0, 35};

char aBiri_0[8] = {83, 84, 65, 82, 84, 0, 0, 35};

char aStart_9[8] = {69, 78, 68, 0, 0, 0, 0, 87};

char aEnd_5[8] = {112, 71, 114, 97, 112, 104, 105, 99};

char aWpgraphic[12] = {114, 97, 112, 104, 105, 99, 92, 83, 107, 105, 110, 67};

char aGraphicSkincol[24] = {69, 78, 68, 0, 0, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 35, 83, 84, 65, 82, 84, 0, 0, 37};

char aEnd_6[8] = {83, 84, 65, 82, 84, 0, 0, 35};

char aStart_10[8] = {83, 84, 65, 82, 84, 0, 0, 37};

char aStart_11[8] = {115, 92, 68, 97, 116, 97, 92, 87};

char aSDataWeapontpD[24] = {115, 92, 68, 97, 116, 97, 92, 87, 101, 97, 112, 111, 110, 67, 71, 46, 100, 97, 116, 0, 0, 0, 0, 37};

char aSDataWeaponcgD[24] = {115, 92, 68, 97, 116, 97, 92, 84, 105, 108, 101, 80, 97, 116, 37, 48, 50, 100, 46, 100, 97, 116, 0, 37};

char aSDataTilepat02[24] = {115, 92, 68, 97, 116, 97, 92, 67, 104, 97, 114, 71, 114, 97, 112, 104, 105, 99, 37, 48, 50, 100, 46, 100};

char aSDataChargraph[28] = {115, 92, 68, 97, 116, 97, 92, 109, 105, 115, 117, 122, 117, 95, 116, 112, 46, 100, 97, 116, 0, 0, 0, 37, 115, 92, 68, 97};

char aSDataMisuzuTpD[24] = {115, 92, 68, 97, 116, 97, 92, 109, 105, 115, 117, 122, 117, 95, 99, 103, 46, 100, 97, 116, 0, 0, 0, 37};

char aSDataMisuzuCgD[24] = {115, 92, 68, 97, 116, 97, 92, 68, 111, 117, 98, 108, 101, 95, 68, 114, 97, 103, 111, 110, 95, 84, 80, 46};

char aSDataDoubleDra[32] = {115, 92, 68, 97, 116, 97, 92, 68, 111, 117, 98, 108, 101, 95, 68, 114, 97, 103, 111, 110, 95, 67, 71, 46, 100, 97, 116, 0, 0, 0, 0, 71};

char aSDataDoubleDra_0[32] = {114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0, 0, 0, 0, 71, 114, 97, 112, 104};

char aGraphic02dppal_4[28] = {114, 97, 112, 104, 105, 99, 92, 67, 104, 97, 114, 83, 101, 108, 66, 111, 100, 121, 46, 98, 109, 112, 0, 71, 114, 97, 112, 104};

char aGraphicCharsel[24] = {114, 97, 112, 104, 105, 99, 92, 67, 104, 97, 114, 83, 101, 108, 66, 111, 100, 121, 46, 98, 109, 112, 0, 71};

char aGraphicCharsel_0[24] = {114, 97, 112, 104, 105, 99, 92, 37, 48, 50, 100, 112, 80, 97, 108, 101, 116, 116, 101, 46, 98, 105, 110, 0};

char aGraphic02dppal_5[28] = {114, 97, 112, 104, 105, 99, 92, 70, 111, 110, 116, 48, 48, 46, 98, 109, 112, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131};

char aGraphicFont00B[20] = {114, 114, 111, 114, 0, 0, 0, 131, 116, 131, 72, 131, 147, 131, 103, 131, 112, 131, 94, 129};

char aError_13[8] = {116, 131, 72, 131, 147, 131, 103, 131};

char byte_4B5E58[40] = {114, 97, 112, 104, 105, 99, 92, 70, 111, 110, 116, 48, 49, 46, 98, 109, 112, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 116, 131, 72, 131, 147, 131, 103, 131, 112, 131, 94, 129};

char aGraphicFont01B[20] = {114, 114, 111, 114, 0, 0, 0, 131, 116, 131, 72, 131, 147, 131, 103, 131, 112, 131, 94, 129};

char aError_14[8] = {116, 131, 72, 131, 147, 131, 103, 131};

char byte_4B5E9C[40] = {114, 97, 112, 104, 105, 99, 92, 68, 97, 109, 97, 103, 101, 70, 111, 110, 116, 46, 98, 109, 112, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 95, 131, 129, 129, 91, 131, 87, 151};

char aGraphicDamagef[24] = {114, 114, 111, 114, 0, 0, 0, 131, 95, 131, 129, 129, 91, 131, 87, 151, 112, 131, 116, 131, 72, 131, 147, 131};

char aError_15[8] = {95, 131, 129, 129, 91, 131, 87, 151};

char byte_4B5EE4[48] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 52, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 129, 131, 106, 131, 133, 129, 91, 151, 112, 148, 119, 140, 105, 131, 112, 131};

char aGraphicSystem0_2[24] = {114, 114, 111, 114, 0, 0, 0, 131, 129, 131, 106, 131, 133, 129, 91, 151, 112, 148, 119, 140, 105, 131, 112, 131};

char aError_16[8] = {129, 131, 106, 131, 133, 129, 91, 151};

char byte_4B5F34[44] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 52, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 129, 131, 106, 131, 133, 129, 91, 151, 112, 148, 189, 147};

char aGraphicSystem0_3[24] = {114, 114, 111, 114, 0, 0, 0, 131, 129, 131, 106, 131, 133, 129, 91, 151, 112, 148, 189, 147, 93, 148, 119, 140};

char aError_17[8] = {129, 131, 106, 131, 133, 129, 91, 151};

char byte_4B5F80[48] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 52, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 129, 131, 106, 131, 133, 129, 91, 151, 112, 131, 116, 131, 140, 129, 91, 131};

char aGraphicSystem0_4[24] = {114, 114, 111, 114, 0, 0, 0, 131, 129, 131, 106, 131, 133, 129, 91, 151, 112, 131, 116, 131, 140, 129, 91, 131};

char aError_18[8] = {129, 131, 106, 131, 133, 129, 91, 151};

char byte_4B5FD0[48] = {114, 97, 112, 104, 105, 99, 92, 69, 102, 102, 101, 99, 116, 48, 49, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 71, 131, 116, 131, 70, 131, 78, 131, 103, 131, 79, 131, 137, 131, 116, 131};

char aGraphicEffect0[24] = {114, 114, 111, 114, 0, 0, 0, 131, 71, 131, 116, 131, 70, 131, 78, 131, 103, 131, 79, 131, 137, 131, 116, 131};

char aError_19[8] = {71, 131, 116, 131, 70, 131, 78, 131};

char byte_4B6020[48] = {114, 97, 112, 104, 105, 99, 92, 69, 102, 102, 101, 99, 116, 48, 49, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 71, 131, 116, 131, 70, 131, 78, 131, 103, 131, 79, 131, 137, 131, 116, 131};

char aGraphicEffect0_0[24] = {114, 114, 111, 114, 0, 0, 0, 131, 71, 131, 116, 131, 70, 131, 78, 131, 103, 131, 79, 131, 137, 131, 116, 131};

char aError_20[8] = {71, 131, 116, 131, 70, 131, 78, 131};

char byte_4B6070[48] = {114, 97, 112, 104, 105, 99, 92, 69, 102, 102, 101, 99, 116, 48, 49, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 71, 131, 116, 131, 70, 131, 78, 131, 103, 131, 79, 131, 137, 131, 116, 131};

char aGraphicEffect0_1[24] = {114, 114, 111, 114, 0, 0, 0, 131, 71, 131, 116, 131, 70, 131, 78, 131, 103, 131, 79, 131, 137, 131, 116, 131};

char aError_21[8] = {71, 131, 116, 131, 70, 131, 78, 131};

char byte_4B60C0[48] = {114, 97, 112, 104, 105, 99, 92, 69, 102, 102, 101, 99, 116, 48, 49, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 71, 131, 116, 131, 70, 131, 78, 131, 103, 131, 79, 131, 137, 131, 116, 131};

char aGraphicEffect0_2[24] = {114, 114, 111, 114, 0, 0, 0, 131, 71, 131, 116, 131, 70, 131, 78, 131, 103, 131, 79, 131, 137, 131, 116, 131};

char aError_22[8] = {71, 131, 116, 131, 70, 131, 78, 131};

char byte_4B6110[48] = {114, 97, 112, 104, 105, 99, 92, 69, 102, 102, 101, 99, 116, 48, 49, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 71, 131, 116, 131, 70, 131, 78, 131, 103, 131, 79, 131, 137, 131, 116, 131};

char aGraphicEffect0_3[24] = {114, 114, 111, 114, 0, 0, 0, 131, 71, 131, 116, 131, 70, 131, 78, 131, 103, 131, 79, 131, 137, 131, 116, 131};

char aError_23[8] = {71, 131, 116, 131, 70, 131, 78, 131};

char byte_4B6160[48] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 49, 95, 83, 46, 98, 109, 112, 0, 0, 71, 114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 49, 46, 98, 109, 112, 0, 0, 0, 0, 69};

char aGraphicSystem0_5[24] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 49, 46, 98, 109, 112, 0, 0, 0, 0, 69};

char aGraphicSystem0_6[24] = {114, 114, 111, 114, 0, 0, 0, 131, 69, 131, 67, 131, 147, 131, 104, 131, 69, 131, 112, 131, 94, 129, 91, 131};

char aError_24[8] = {69, 131, 67, 131, 147, 131, 104, 131};

char byte_4B61C8[40] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 50, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 137, 131, 67, 131, 116, 131, 111, 129};

char aGraphicSystem0_7[24] = {114, 114, 111, 114, 0, 0, 0, 131, 137, 131, 67, 131, 116, 131, 111, 129, 91, 131, 112, 131, 94, 129, 91, 131};

char aError_25[8] = {137, 131, 67, 131, 116, 131, 111, 129};

char byte_4B6210[40] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 50, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 88, 129, 91, 131, 112, 129, 91, 131};

char aGraphicSystem0_8[24] = {114, 114, 111, 114, 0, 0, 0, 131, 88, 129, 91, 131, 112, 129, 91, 131, 82, 131, 147, 131, 123, 131, 81, 129};

char aError_26[8] = {88, 129, 91, 131, 112, 129, 91, 131};

char byte_4B6258[52] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 50, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 88, 129, 91, 131, 112, 129, 91, 131, 82, 131, 147, 131, 123, 131, 81, 129, 91, 131, 87, 144};

char aGraphicSystem0_9[24] = {114, 114, 111, 114, 0, 0, 0, 131, 88, 129, 91, 131, 112, 129, 91, 131, 82, 131, 147, 131, 123, 131, 81, 129};

char aError_27[8] = {88, 129, 91, 131, 112, 129, 91, 131};

char byte_4B62AC[56] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 50, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 137, 131, 67, 131, 116, 131, 69, 131, 67, 131, 147, 131, 104, 131, 69, 143, 227, 144, 148, 142, 154, 131, 79, 131};

char aGraphicSystem0_10[24] = {114, 114, 111, 114, 0, 0, 0, 131, 137, 131, 67, 131, 116, 131, 69, 131, 67, 131, 147, 131, 104, 131, 69, 143};

char aError_28[8] = {137, 131, 67, 131, 116, 131, 69, 131};

char byte_4B6304[56] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 50, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 141, 135, 145, 204, 139, 90, 131, 81, 129, 91, 131, 87, 141, 236, 144, 172, 130, 201, 142, 184, 148, 115, 130, 181, 130};

char aGraphicSystem0_11[24] = {114, 114, 111, 114, 0, 0, 0, 141, 135, 145, 204, 139, 90, 131, 81, 129, 91, 131, 87, 141, 236, 144, 172, 130};

char aError_29[8] = {135, 145, 204, 139, 90, 131, 81, 129};

char byte_4B635C[36] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 50, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 141, 135, 145, 204, 139};

char aGraphicSystem0_12[24] = {114, 114, 111, 114, 0, 0, 0, 141, 135, 145, 204, 139, 90, 131, 74, 129, 91, 131, 92, 131, 139, 141, 236, 144};

char aError_30[8] = {135, 145, 204, 139, 90, 131, 74, 129};

char byte_4B63A0[36] = {114, 97, 112, 104, 105, 99, 92, 83, 104, 97, 100, 111, 119, 46, 98, 109, 112, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 137, 101, 130, 204, 131, 112, 131, 94, 129};

char aGraphicShadowB[20] = {114, 114, 111, 114, 0, 0, 0, 137, 101, 130, 204, 131, 112, 131, 94, 129, 91, 131, 147, 141};

char aError_31[8] = {101, 130, 204, 131, 112, 131, 94, 129};

char byte_4B63E0[36] = {114, 97, 112, 104, 105, 99, 92, 82, 101, 99, 116, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 148, 187, 146, 232, 152, 103, 131, 112, 131};

char aGraphicRectBmp[20] = {114, 114, 111, 114, 0, 0, 0, 148, 187, 146, 232, 152, 103, 131, 112, 131, 94, 129, 91, 131};

char aError_32[8] = {187, 146, 232, 152, 103, 131, 112, 131};

char byte_4B6420[36] = {114, 97, 112, 104, 105, 99, 92, 70, 97, 99, 101, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 138, 231, 131, 79, 131, 137, 131, 116, 131};

char aGraphicFaceBmp[20] = {114, 114, 111, 114, 0, 0, 0, 138, 231, 131, 79, 131, 137, 131, 116, 131, 66, 131, 98, 131};

char aError_33[8] = {231, 131, 79, 131, 137, 131, 116, 131};

char byte_4B6460[36] = {114, 97, 112, 104, 105, 99, 92, 83, 121, 115, 116, 101, 109, 48, 51, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 137, 131, 147, 131};

char aGraphicSystem0_13[24] = {114, 114, 111, 114, 0, 0, 0, 131, 137, 131, 147, 131, 104, 131, 82, 129, 91, 131, 139, 151, 112, 131, 79, 131};

char aError_34[8] = {137, 131, 147, 131, 104, 131, 82, 129};

char byte_4B64A4[56] = {114, 97, 112, 104, 105, 99, 92, 83, 116, 97, 103, 101, 83, 101, 108, 101, 99, 116, 46, 98, 109, 112, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 88, 131, 101, 129, 91, 131, 87, 131, 90, 131, 140, 131, 78, 131, 103, 151, 112, 131, 79, 131, 137, 131, 116, 131};

char aGraphicStagese_1[24] = {114, 114, 111, 114, 0, 0, 0, 131, 88, 131, 101, 129, 91, 131, 87, 131, 90, 131, 140, 131, 78, 131, 103, 151};

char aError_35[8] = {88, 131, 101, 129, 91, 131, 87, 131};

char byte_4B64FC[60] = {114, 97, 112, 104, 105, 99, 92, 73, 116, 101, 109, 46, 98, 109, 112, 0, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 65, 131, 67, 131, 101, 131, 128, 151, 112, 131, 79, 131, 137, 131, 116, 131, 66, 131, 98, 131, 78, 131, 112, 131, 94, 129, 91, 131, 147, 141, 236, 144};

char aGraphicItemBmp[20] = {114, 114, 111, 114, 0, 0, 0, 131, 65, 131, 67, 131, 101, 131, 128, 151, 112, 131, 79, 131};

char aError_36[8] = {65, 131, 67, 131, 101, 131, 128, 151};

char byte_4B6554[52] = {114, 97, 112, 104, 105, 99, 92, 87, 101, 97, 112, 111, 110, 46, 98, 109, 112, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 149, 144, 138, 237, 151, 112, 131, 79, 131, 137, 131, 116, 131, 66, 131, 98, 131, 78, 131, 112, 131, 94, 129, 91, 131};

char aGraphicWeaponB[20] = {114, 114, 111, 114, 0, 0, 0, 149, 144, 138, 237, 151, 112, 131, 79, 131, 137, 131, 116, 131};

char aError_37[8] = {144, 138, 237, 151, 112, 131, 79, 131};

char byte_4B65A4[48] = {111, 117, 110, 100, 92, 67, 117, 114, 115, 111, 117, 114, 46, 119, 97, 118, 0, 0, 0, 83, 111, 117, 110, 100, 92, 67, 108, 105, 99, 107, 46, 119, 97, 118, 0, 83, 111, 117, 110, 100, 92, 74, 117, 109, 112, 46, 119, 97};

char aSoundCursourWa[20] = {111, 117, 110, 100, 92, 67, 108, 105, 99, 107, 46, 119, 97, 118, 0, 83, 111, 117, 110, 100};

char aSoundClickWav[16] = {111, 117, 110, 100, 92, 74, 117, 109, 112, 46, 119, 97, 118, 0, 0, 83};

char aSoundJumpWav[16] = {111, 117, 110, 100, 92, 75, 97, 114, 97, 98, 117, 114, 105, 46, 119, 97};

char aSoundKaraburiW[20] = {111, 117, 110, 100, 92, 72, 105, 116, 48, 49, 46, 119, 97, 118, 0, 83, 111, 117, 110, 100};

char aSoundHit01Wav[16] = {111, 117, 110, 100, 92, 72, 105, 116, 48, 50, 46, 119, 97, 118, 0, 83};

char aSoundHit02Wav[16] = {111, 117, 110, 100, 92, 68, 111, 119, 110, 48, 49, 46, 119, 97, 118, 0};

char aSoundDown01Wav[20] = {111, 117, 110, 100, 92, 83, 108, 105, 100, 105, 110, 103, 46, 119, 97, 118, 0, 0, 0, 83};

char aSoundSlidingWa[20] = {111, 117, 110, 100, 92, 84, 115, 117, 107, 97, 109, 105, 46, 119, 97, 118, 0, 0, 0, 83};

char aSoundTsukamiWa[20] = {111, 117, 110, 100, 92, 72, 105, 116, 48, 51, 46, 119, 97, 118, 0, 83, 111, 117, 110, 100};

char aSoundHit03Wav[16] = {111, 117, 110, 100, 92, 84, 115, 117, 107, 105, 116, 111, 98, 97, 115, 105};

char aSoundTsukitoba[24] = {111, 117, 110, 100, 92, 71, 117, 97, 114, 100, 48, 49, 46, 119, 97, 118, 0, 0, 0, 83, 111, 117, 110, 100};

char aSoundGuard01Wa[20] = {111, 117, 110, 100, 92, 68, 111, 119, 110, 48, 51, 46, 119, 97, 118, 0, 0, 0, 0, 83};

char aSoundDown03Wav[20] = {111, 117, 110, 100, 92, 71, 111, 111, 100, 66, 121, 46, 119, 97, 118, 0, 0, 0, 0, 83};

char aSoundGoodbyWav[20] = {111, 117, 110, 100, 92, 69, 120, 112, 108, 111, 115, 105, 111, 110, 48, 49, 46, 119, 97, 118};

char aSoundExplosion[24] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 48, 49, 46, 119, 97, 118, 0, 83, 111, 117, 110, 100};

char aSoundSpecial01[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 48, 50, 46, 119, 97, 118, 0, 83};

char aSoundSpecial02[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 48, 51, 46, 119, 97, 118, 0, 83};

char aSoundSpecial03[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 48, 52, 46, 119, 97, 118, 0, 83};

char aSoundSpecial04[20] = {111, 117, 110, 100, 92, 68, 111, 119, 110, 48, 50, 46, 119, 97, 118, 0, 0, 0, 0, 83};

char aSoundDown02Wav[20] = {111, 117, 110, 100, 92, 84, 97, 105, 104, 111, 117, 46, 119, 97, 118, 0, 0, 0, 0, 83};

char aSoundTaihouWav[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 48, 53, 46, 119, 97, 118, 0, 83};

char aSoundSpecial05[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 48, 54, 46, 119, 97, 118, 0, 83};

char aSoundSpecial06[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 48, 55, 46, 119, 97, 118, 0, 83};

char aSoundSpecial07[20] = {111, 117, 110, 100, 92, 72, 105, 116, 48, 52, 46, 119, 97, 118, 0, 83, 111, 117, 110, 100};

char aSoundHit04Wav[16] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 48, 56, 46, 119};

char aSoundSpecial08[20] = {111, 117, 110, 100, 92, 72, 105, 116, 48, 53, 46, 119, 97, 118, 0, 83, 111, 117, 110, 100};

char aSoundHit05Wav[16] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 48, 57, 46, 119};

char aSoundSpecial09[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 49, 48, 46, 119, 97, 118, 0, 83};

char aSoundSpecial10[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 49, 49, 46, 119, 97, 118, 0, 83};

char aSoundSpecial11[20] = {111, 117, 110, 100, 92, 87, 101, 97, 112, 111, 110, 71, 101, 116, 46, 119, 97, 118, 0, 83};

char aSoundWeaponget[20] = {111, 117, 110, 100, 92, 66, 111, 117, 110, 100, 48, 49, 46, 119, 97, 118, 0, 0, 0, 83};

char aSoundBound01Wa[20] = {111, 117, 110, 100, 92, 66, 111, 117, 110, 100, 48, 50, 46, 119, 97, 118, 0, 0, 0, 83};

char aSoundBound02Wa[20] = {111, 117, 110, 100, 92, 66, 111, 117, 110, 100, 48, 51, 46, 119, 97, 118, 0, 0, 0, 83};

char aSoundBound03Wa[20] = {111, 117, 110, 100, 92, 66, 111, 117, 110, 100, 48, 52, 46, 119, 97, 118, 0, 0, 0, 83};

char aSoundBound04Wa[20] = {111, 117, 110, 100, 92, 75, 97, 114, 97, 98, 117, 114, 105, 50, 46, 119, 97, 118, 0, 83};

char aSoundKaraburi2[20] = {111, 117, 110, 100, 92, 66, 111, 117, 110, 100, 48, 53, 46, 119, 97, 118, 0, 0, 0, 83};

char aSoundBound05Wa[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 49, 50, 46, 119, 97, 118, 0, 83};

char aSoundSpecial12[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 49, 51, 46, 119, 97, 118, 0, 83};

char aSoundSpecial13[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 49, 52, 46, 119, 97, 118, 0, 83};

char aSoundSpecial14[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 49, 53, 46, 119, 97, 118, 0, 83};

char aSoundSpecial15[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 49, 54, 46, 119, 97, 118, 0, 83};

char aSoundSpecial16[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 49, 55, 46, 119, 97, 118, 0, 83};

char aSoundSpecial17[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 49, 56, 46, 119, 97, 118, 0, 83};

char aSoundSpecial18[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 49, 57, 46, 119, 97, 118, 0, 83};

char aSoundSpecial19[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 50, 48, 46, 119, 97, 118, 0, 83};

char aSoundSpecial20[20] = {111, 117, 110, 100, 92, 67, 111, 109, 109, 97, 110, 100, 48, 49, 46, 119, 97, 118, 0, 83};

char aSoundCommand01[20] = {111, 117, 110, 100, 92, 83, 112, 101, 99, 105, 97, 108, 50, 49, 46, 119, 97, 118, 0, 83};

char aSoundSpecial21[20] = {111, 117, 110, 100, 92, 72, 105, 116, 48, 54, 46, 119, 97, 118, 0, 83, 111, 117, 110, 100};

char aSoundHit06Wav[16] = {111, 117, 110, 100, 92, 72, 105, 116, 48, 55, 46, 119, 97, 118, 0, 83};

char aSoundHit07Wav[16] = {111, 117, 110, 100, 92, 69, 120, 112, 108, 111, 115, 105, 111, 110, 48, 50};

char aSoundExplosion_0[24] = {111, 117, 110, 100, 92, 68, 97, 115, 104, 46, 119, 97, 118, 0, 0, 83, 111, 117, 110, 100, 92, 66, 111, 117};

char aSoundDashWav[16] = {111, 117, 110, 100, 92, 66, 111, 117, 110, 100, 48, 54, 46, 119, 97, 118};

char aSoundBound06Wa[20] = {111, 117, 110, 100, 92, 84, 104, 114, 111, 119, 48, 49, 46, 119, 97, 118, 0, 0, 0, 83};

char aSoundThrow01Wa[20] = {111, 117, 110, 100, 92, 76, 118, 85, 112, 33, 33, 46, 119, 97, 118, 0, 0, 0, 0, 83};

char aSoundLvupWav[20] = {111, 117, 110, 100, 92, 67, 104, 101, 101, 114, 46, 119, 97, 118, 0, 83, 111, 117, 110, 100};

char aSoundCheerWav[16] = {111, 117, 110, 100, 92, 72, 105, 116, 48, 56, 46, 119, 97, 118, 0, 83};

char aSoundHit08Wav[16] = {111, 117, 110, 100, 92, 83, 117, 112, 101, 114, 67, 111, 109, 98, 111, 46};

char aSoundSupercomb[24] = {111, 117, 110, 100, 92, 83, 112, 108, 97, 115, 104, 68, 111, 119, 110, 46, 119, 97, 118, 0, 0, 0, 0, 83};

char aSoundSplashdow[24] = {111, 117, 110, 100, 92, 84, 101, 108, 101, 112, 111, 114, 116, 46, 119, 97, 118, 0, 0, 130, 108, 130, 114, 32};

char aSoundTeleportW[20] = {108, 130, 114, 32, 130, 111, 131, 83, 131, 86, 131, 98, 131, 78, 32, 40, 147, 250, 150, 123};

char pszFaceName[28] = {100, 0, 0, 37, 100, 44, 37, 100, 0, 0, 0, 75, 68, 46, 105, 110, 105, 0, 0, 37, 115, 92, 37, 115, 0, 0, 0, 76};

char aD_16[4] = {100, 44, 37, 100};

char aDD_0[8] = {68, 46, 105, 110, 105, 0, 0, 37};

char aKdIni_0[8] = {115, 92, 37, 115, 0, 0, 0, 76};

char aSS_1[8] = {101, 103, 101, 110, 100, 32, 111, 102};

char aLegendOfBurnin[28] = {101, 103, 101, 110, 100, 32, 111, 102, 32, 66, 117, 114, 110, 105, 110, 103, 32, 70, 105, 103, 104, 116, 101, 114, 115, 0, 0, 76};

char WindowName[28] = {101, 103, 101, 110, 100, 32, 111, 102, 32, 66, 117, 114, 110, 105, 110, 103, 32, 70, 105, 103, 104, 116, 101, 114, 115, 0, 0, 76};

char ClassName[28] = {101, 103, 101, 110, 100, 32, 111, 102, 32, 66, 117, 114, 110, 105, 110, 103, 32, 70, 105, 103, 104, 116, 101, 114, 115, 0, 0, 76};

char aLegendOfBurnin_2[28] = {101, 103, 101, 110, 100, 32, 111, 102, 32, 66, 117, 114, 110, 105, 110, 103, 32, 70, 105, 103, 104, 116, 101, 114, 115, 0, 0, 69};

char aLegendOfBurnin_3[28] = {114, 114, 111, 114, 0, 0, 0, 131, 95, 131, 67, 131, 140, 131, 78, 131, 103, 131, 84, 131, 69, 131, 147, 131, 104, 130, 204, 143};

char aError_38[8] = {95, 131, 67, 131, 140, 131, 78, 131};

char byte_4B6B34[44] = {115, 0, 0, 37, 115, 0, 0, 37, 100, 0, 0, 62, 62, 0, 0, 129, 170, 0, 0, 129, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char aS_9[4] = {115, 0, 0, 37};

char aS_10[4] = {100, 0, 0, 62};

char aD_17[4] = {62, 0, 0, 129};

char asc_4B6B6C[4] = {170, 0, 0, 129};

char byte_4B6B70[4] = {171, 0, 0, 0};

char byte_4B6B74[340] = {68, 95, 77, 65, 80, 68, 65, 84, 65, 0, 0, 2, 0, 0, 0, 32, 112, 111, 115, 32, 37, 100, 32, 115, 105, 122, 101, 32, 37, 100, 32, 0, 0, 0, 0, 9, 8, 7, 2, 1, 6, 3, 4, 5, 0, 0, 0, 75, 68, 95, 82, 101, 112, 108, 97, 121, 95, 70, 105, 108, 101, 0, 0, 75, 68, 95, 82, 101, 112, 108, 97, 121, 95, 70, 105, 108, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 116, 104, 105, 115, 0, 0, 0, 37, 115, 32, 130, 198, 130, 162, 130, 164, 131, 137, 131, 120, 131, 139, 130, 205, 130, 160, 130, 232, 130, 220, 130, 185, 130, 241, 0, 131, 137, 131, 120, 131, 139, 131, 71, 131, 137, 129, 91, 0, 0, 0, 0, 83, 116, 97, 103, 101, 37, 48, 50, 100, 46, 119, 97, 118, 0, 0, 0, 83, 116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 46, 98, 109, 112, 0, 69, 114, 114, 111, 114, 0, 0, 0, 144, 237, 147, 172, 151, 112, 148, 119, 140, 105, 130, 204, 131};

char aKdMapdata[12] = {0, 0, 0, 32, 112, 111, 115, 32, 37, 100, 32, 115};

char unk_4B6CD4[4] = {112, 111, 115, 32};

char aPosDSizeD[21] = {7, 2, 1, 6, 3, 4, 5, 0, 0, 0, 75, 68, 95, 82, 101, 112, 108, 97, 121, 95, 70};

char byte_4B6CED[11] = {68, 95, 82, 101, 112, 108, 97, 121, 95, 70, 105};

char aKdReplayFile[16] = {68, 95, 82, 101, 112, 108, 97, 121, 95, 70, 105, 108, 101, 0, 0, 0};

char aKdReplayFile_0[72] = {62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char asc_4B6D50[96] = {116, 104, 105, 115, 0, 0, 0, 37, 115, 32, 130, 198, 130, 162, 130, 164, 131, 137, 131, 120, 131, 139, 130, 205, 130, 160, 130, 232, 130, 220, 130, 185, 130, 241, 0, 131, 137, 131, 120, 131, 139, 131, 71, 131, 137, 129, 91, 0, 0, 0, 0, 83, 116, 97, 103, 101, 37, 48, 50, 100, 46, 119, 97, 118, 0, 0, 0, 83, 116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 46, 98, 109, 112, 0, 69, 114, 114, 111, 114, 0, 0, 0, 144};

char aThis[8] = {115, 32, 130, 198, 130, 162, 130, 164};

char aS_11[28] = {137, 131, 120, 131, 139, 131, 71, 131, 137, 129, 91, 0, 0, 0, 0, 83, 116, 97, 103, 101, 37, 48, 50, 100, 46, 119, 97, 118};

char byte_4B6DD4[16] = {116, 97, 103, 101, 37, 48, 50, 100, 46, 119, 97, 118, 0, 0, 0, 83};

char aStage02dWav[16] = {116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 46, 98};

char aStageStage02dB_1[20] = {114, 114, 111, 114, 0, 0, 0, 144, 237, 147, 172, 151, 112, 148, 119, 140, 105, 130, 204, 131};

char aError_39[8] = {237, 147, 172, 151, 112, 148, 119, 140};

char byte_4B6E10[44] = {116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 46, 100, 97, 116, 0, 83, 116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 95, 79, 98, 106, 46, 116, 120, 116, 0, 35};

char aStageStage02dD_0[20] = {116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48, 50, 100, 95, 79, 98, 106, 46, 116};

char aStageStage02dO[24] = {73, 78, 73, 84, 0, 0, 0, 35, 73, 78, 73, 84, 69, 78, 68, 0, 0, 0, 0, 76, 111, 97, 100, 66};

char aInit[8] = {73, 78, 73, 84, 69, 78, 68, 0};

char aInitend[12] = {111, 97, 100, 66, 109, 112, 0, 37, 115, 0, 0, 69};

char aLoadbmp[8] = {115, 0, 0, 69, 110, 116, 114, 121};

char aS_3[4] = {110, 116, 114, 121};

char aEntrypat[12] = {0, 0, 0, 76, 111, 97, 100, 67, 104, 97, 114, 71};

char aN_0[4] = {111, 97, 100, 67};

char aLoadchargraphi[16] = {0, 0, 0, 76, 111, 97, 100, 67, 71, 84, 80, 0, 0, 0, 0, 110};

char aN_1[4] = {111, 97, 100, 67};

char aLoadcgtp[12] = {0, 0, 0, 83, 116, 97, 114, 116, 80, 111, 115, 0};

char aN_2[4] = {116, 97, 114, 116};

char aStartpos[12] = {116, 97, 114, 116, 76, 105, 110, 101, 0, 0, 0, 76};

char aStartline[12] = {111, 97, 100, 66, 97, 99, 107, 66, 109, 112, 0, 78};

char aLoadbackbmp[12] = {101, 120, 116, 68, 101, 109, 111, 70, 105, 108, 101, 78};

char aNextdemofilena[20] = {111, 112, 121, 80, 97, 108, 101, 116, 116, 101, 115, 0, 0, 0, 0, 110, 0, 0, 0, 66};

char aCopypalettes[16] = {0, 0, 0, 66, 103, 109, 70, 105, 108, 101, 78, 97, 109, 101, 0, 35};

char aN_3[4] = {103, 109, 70, 105};

char aBgmfilename[12] = {83, 84, 82, 73, 78, 71, 0, 35, 83, 84, 82, 73};

char aString[8] = {83, 84, 82, 73, 78, 71, 69, 78};

char aStringend[12] = {83, 84, 82, 73, 78, 71, 0, 35, 83, 79, 85, 78};

char aString_0[8] = {83, 79, 85, 78, 68, 0, 0, 35};

char aSound[8] = {83, 79, 85, 78, 68, 69, 78, 68};

char aSoundend[12] = {83, 79, 85, 78, 68, 0, 0, 35, 77, 79, 86, 69};

char aSound_0[8] = {77, 79, 86, 69, 0, 0, 0, 35};

char aMove[8] = {77, 79, 86, 69, 69, 78, 68, 0};

char aMoveend[12] = {80, 85, 84, 0, 0, 0, 0, 35, 80, 85, 84, 69};

char aPut[8] = {80, 85, 84, 69, 78, 68, 0, 35};

char aPutend[8] = {80, 85, 84, 0, 0, 0, 0, 35};

char aPut_0[8] = {80, 85, 84, 69, 78, 68, 0, 35};

char aPutend_0[8] = {69, 84, 67, 68, 65, 84, 65, 0};

char aEtcdata[12] = {69, 84, 67, 68, 65, 84, 65, 69, 78, 68, 0, 83};

char aEtcdataend[12] = {116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48};

char aStageStage02dD_1[20] = {77, 79, 86, 69, 0, 0, 0, 35, 77, 79, 86, 69, 69, 78, 68, 0, 0, 0, 0, 83};

char aMove_0[8] = {77, 79, 86, 69, 69, 78, 68, 0};

char aMoveend_0[12] = {116, 97, 103, 101, 48, 48, 46, 119, 97, 118, 0, 83};

char aStage00Wav[12] = {116, 97, 103, 101, 92, 83, 116, 97, 103, 101, 37, 48};

char aStageStage02dD_2[28] = {72, 69, 76, 80, 0, 0, 0, 35, 78, 65, 77, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char aHelp_0[8] = {78, 65, 77, 69, 0, 0, 0, 0};

char aName[324] = {100, 0, 0, 86, 83, 0, 0, 37, 100, 80, 0, 62, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 100, 0, 0, 37, 100, 0, 0, 86, 83, 0, 0, 129, 171, 0, 0, 129, 171, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 13, 0, 0, 0, 3, 0, 0, 0, 6, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 3, 0, 0, 0, 21, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 11, 0, 0, 0, 3, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 22, 0, 0, 0, 7, 0, 0, 0, 7, 0, 0, 0, 12, 0, 0, 0, 7, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 25, 0, 0, 0, 24, 0, 0, 0, 24, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 24, 0, 0, 0, 24, 0, 0, 0, 24, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 35, 0, 0, 0, 35, 0, 0, 0, 35, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 48, 0, 0, 0, 48, 0, 0, 0, 48, 0, 0, 0, 48, 0, 0, 0, 48, 0, 0, 0, 48, 0, 0, 0, 53};

char aD_2[4] = {83, 0, 0, 37};

char aVs[4] = {100, 80, 0, 62};

char aDp_1[4] = {62, 0, 0, 0};

char asc_4B7140[48] = {100, 0, 0, 37, 100, 0, 0, 86, 83, 0, 0, 129, 171, 0, 0, 129, 171, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 8, 0, 0, 0, 9};

char aD_3[4] = {100, 0, 0, 86};

char aD_4[4] = {83, 0, 0, 129};

char aVs_0[4] = {171, 0, 0, 129};

char byte_4B717C[4] = {171, 0, 0, 0};

char dword_4B7180[28] = {0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 13, 0, 0, 0, 3, 0, 0, 0, 6, 0, 0, 0, 3};

char dword_4B719C[592] = {89, 80, 69, 58, 37, 50, 100, 44, 68, 72, 58, 37, 100, 0, 0, 86, 40, 37, 53, 100, 44, 37, 53, 100, 44, 37, 53, 100, 41, 32, 71, 40, 37, 51, 100, 44, 37, 51, 100, 44, 37, 51, 100, 41, 0, 0, 0, 80, 65, 82, 69, 78, 84, 58, 37, 50, 100, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 68, 68, 114, 97, 119, 69, 114, 114, 111, 114, 0, 0, 68, 105, 114, 101, 99, 116, 68, 114, 97, 119, 32, 111, 98, 106, 101, 99, 116, 32, 130, 170, 141, 236, 130, 234, 130, 220, 130, 185, 130, 241, 130, 197, 130, 181, 130, 189, 129, 66, 0, 0, 68, 68, 114, 97, 119, 69, 114, 114, 111, 114, 0, 0, 81, 117, 101, 114, 121, 73, 110, 116, 101, 114, 102, 97, 99, 101, 32, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 129, 66, 0, 68, 68, 114, 97, 119, 69, 114, 114, 111, 114, 0, 0, 139, 166, 146, 178, 131, 140, 131, 120, 131, 139, 130, 240, 144, 221, 146, 232, 130, 197, 130, 171, 130, 220, 130, 185, 130, 241, 130, 197, 130, 181, 130, 189, 129, 66, 0, 0, 69, 82, 82, 79, 82, 48, 51, 0, 149, 92, 142, 166, 131, 130, 129, 91, 131, 104, 130, 240, 144, 221, 146, 232, 130, 197, 130, 171, 130, 220, 130, 185, 130, 241, 130, 197, 130, 181, 130, 189, 129, 66, 0, 0, 78, 111, 116, 49, 54, 98, 105, 116, 0, 0, 0, 0, 137, 230, 150, 202, 131, 130, 129, 91, 131, 104, 130, 170, 130, 80, 130, 85, 131, 114, 131, 98, 131, 103, 130, 197, 130, 205, 130, 160, 130, 232, 130, 220, 130, 185, 130, 241, 129, 66, 0, 0, 69, 82, 82, 79, 82, 48, 52, 0, 131, 118, 131, 137, 131, 67, 131, 125, 131, 138, 129, 91, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 240, 141, 236, 144, 172, 143, 111, 151, 136, 130, 220, 130, 185, 130, 241, 130, 197, 130, 181, 130, 189, 129, 66, 0, 0, 0, 0, 69, 82, 82, 79, 82, 48, 53, 0, 131, 73, 131, 116, 131, 88, 131, 78, 131, 138, 129, 91, 131, 147, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 240, 141, 236, 144, 172, 143, 111, 151, 136, 130, 220, 130, 185, 130, 241, 130, 197, 130, 181, 130, 189, 129, 66, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 86, 131, 88, 131, 101, 131, 128, 131, 129, 131, 130, 131, 138, 151, 112, 151, 160, 131, 111, 131, 98, 131, 116, 131, 64, 130, 240, 10, 141, 236, 144, 172, 143, 111, 151, 136, 130, 220, 130, 185, 130, 241, 130, 197, 130, 181, 130, 189, 129, 66, 0, 131, 71, 131, 137, 129, 91, 0, 0, 67, 108, 105, 101, 110, 116, 84, 111, 83, 99, 114, 101, 101, 110, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 0, 0, 0, 0, 131, 71, 131, 137, 129, 91, 0, 0, 109, 95, 112, 68, 68, 83, 83, 121, 115, 83, 99, 45, 62, 71, 101, 116, 68, 67, 130, 201, 142, 184, 148, 115, 0, 0, 0, 0, 69, 82, 82, 79, 82, 48, 49, 0, 131, 141, 131, 88, 130, 198, 0, 0, 69, 110, 116, 114, 121, 80, 97, 116, 69, 114, 114, 111, 114};

char aType2dDhD[16] = {40, 37, 53, 100, 44, 37, 53, 100, 44, 37, 53, 100, 41, 32, 71, 40};

char aV5d5d5dG3d3d3d[32] = {65, 82, 69, 78, 84, 58, 37, 50, 100, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 68, 68, 114, 97, 119, 69, 114, 114, 111, 114, 0, 0, 68};

char aParent2d[12] = {114, 114, 111, 114, 0, 0, 0, 68, 68, 114, 97, 119};

char aError_40[8] = {68, 114, 97, 119, 69, 114, 114, 111};

char aDdrawerror[12] = {105, 114, 101, 99, 116, 68, 114, 97, 119, 32, 111, 98};

char aDirectdrawObje[40] = {68, 114, 97, 119, 69, 114, 114, 111, 114, 0, 0, 81, 117, 101, 114, 121, 73, 110, 116, 101, 114, 102, 97, 99, 101, 32, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189};

char aDdrawerror_0[12] = {117, 101, 114, 121, 73, 110, 116, 101, 114, 102, 97, 99};

char aQueryinterface[32] = {68, 114, 97, 119, 69, 114, 114, 111, 114, 0, 0, 139, 166, 146, 178, 131, 140, 131, 120, 131, 139, 130, 240, 144, 221, 146, 232, 130, 197, 130, 171, 130};

char aDdrawerror_1[12] = {166, 146, 178, 131, 140, 131, 120, 131, 139, 130, 240, 144};

char byte_4B749C[36] = {82, 82, 79, 82, 48, 51, 0, 149, 92, 142, 166, 131, 130, 129, 91, 131, 104, 130, 240, 144, 221, 146, 232, 130, 197, 130, 171, 130, 220, 130, 185, 130, 241, 130, 197, 130};

char aError03[8] = {92, 142, 166, 131, 130, 129, 91, 131};

char byte_4B74C8[36] = {111, 116, 49, 54, 98, 105, 116, 0, 0, 0, 0, 137, 230, 150, 202, 131, 130, 129, 91, 131, 104, 130, 170, 130, 80, 130, 85, 131, 114, 131, 98, 131, 103, 130, 197, 130};

char aNot16bit[12] = {230, 150, 202, 131, 130, 129, 91, 131, 104, 130, 170, 130};

char byte_4B74F8[40] = {82, 82, 79, 82, 48, 52, 0, 131, 118, 131, 137, 131, 67, 131, 125, 131, 138, 129, 91, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 240, 141, 236, 144, 172, 143, 111, 151};

char aError04[8] = {118, 131, 137, 131, 67, 131, 125, 131};

char byte_4B7528[52] = {82, 82, 79, 82, 48, 53, 0, 131, 73, 131, 116, 131, 88, 131, 78, 131, 138, 129, 91, 131, 147, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 240, 141, 236, 144, 172, 143, 111, 151, 136, 130, 220, 130, 185, 130, 241, 130, 197, 130};

char aError05[8] = {73, 131, 116, 131, 88, 131, 78, 131};

char byte_4B7564[52] = {114, 114, 111, 114, 0, 0, 0, 131, 86, 131, 88, 131, 101, 131, 128, 131, 129, 131, 130, 131, 138, 151, 112, 151, 160, 131, 111, 131, 98, 131, 116, 131, 64, 130, 240, 10, 141, 236, 144, 172, 143, 111, 151, 136, 130, 220, 130, 185, 130, 241, 130, 197};

char aError_41[8] = {86, 131, 88, 131, 101, 131, 128, 131};

char byte_4B75A0[52] = {71, 131, 137, 129, 91, 0, 0, 67, 108, 105, 101, 110, 116, 84, 111, 83, 99, 114, 101, 101, 110, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 0, 0, 0, 0, 131, 71, 131, 137, 129, 91, 0, 0, 109, 95, 112, 68, 68};

char byte_4B75D4[8] = {108, 105, 101, 110, 116, 84, 111, 83};

char aClienttoscreen[32] = {71, 131, 137, 129, 91, 0, 0, 109, 95, 112, 68, 68, 83, 83, 121, 115, 83, 99, 45, 62, 71, 101, 116, 68, 67, 130, 201, 142, 184, 148, 115, 0};

char byte_4B75FC[8] = {95, 112, 68, 68, 83, 83, 121, 115};

char aMPddssysscGetd[28] = {82, 82, 79, 82, 48, 49, 0, 131, 141, 131, 88, 130, 198, 0, 0, 69, 110, 116, 114, 121, 80, 97, 116, 69, 114, 114, 111, 114};

char aError01[8] = {141, 131, 88, 130, 198, 0, 0, 69};

char unk_4B7628[8] = {110, 116, 114, 121, 80, 97, 116, 69};

char aEntrypaterror[16] = {115, 144, 179, 130, 200, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131};

char byte_4B7640[36] = {84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 201, 137, 230, 145, 156, 130, 240, 131, 82, 131, 115, 129, 91, 130, 197, 130, 171, 130, 220, 130, 185, 130, 241, 130};

char byte_4B7664[48] = {110, 116, 114, 121, 80, 97, 116, 69, 114, 114, 111, 114, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 129, 69, 131, 141, 131, 88, 131, 103, 0, 0, 0, 0, 69};

char aEntrypaterror_0[16] = {114, 114, 111, 114, 0, 0, 0, 131, 84, 129, 91, 131, 116, 131, 70, 131};

char aError_42[8] = {84, 129, 91, 131, 116, 131, 70, 131};

char byte_4B76AC[24] = {114, 114, 111, 114, 0, 0, 0, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 170, 141, 236, 130};

char aError_43[8] = {84, 129, 91, 131, 116, 131, 70, 131};

char byte_4B76CC[60] = {114, 114, 111, 114, 0, 0, 0, 131, 141, 131, 88, 130, 198, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 240, 131, 65, 131, 147, 129, 69, 131, 141, 131, 98, 131, 78, 143, 111, 151, 136, 130, 220, 130, 185, 130, 241, 130};

char aError_44[8] = {141, 131, 88, 130, 198, 0, 0, 69};

char byte_4B7710[8] = {114, 114, 111, 114, 0, 0, 0, 131};

char aError_45[8] = {84, 129, 91, 131, 116, 131, 70, 131};

char byte_4B7720[48] = {114, 114, 111, 114, 0, 0, 0, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 170, 141, 236, 130, 231, 130, 234, 130, 196, 130, 162, 130, 200, 130, 162, 130, 204, 130, 201, 10, 69, 110, 116, 114, 121, 66, 105, 116};

char aError_46[8] = {84, 129, 91, 131, 116, 131, 70, 131};

char byte_4B7758[60] = {114, 114, 111, 114, 0, 0, 0, 130, 99, 130, 98, 130, 204, 142, 230, 147, 190, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 129, 66, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 130, 99, 130, 104, 130, 97, 130, 204, 141, 236, 144, 172, 130, 201, 142, 184, 148};

char aError_47[8] = {99, 130, 98, 130, 204, 142, 230, 147};

char dword_4B779C[28] = {114, 114, 111, 114, 0, 0, 0, 130, 99, 130, 104, 130, 97, 130, 204, 141, 236, 144, 172, 130, 201, 142, 184, 148, 115, 130, 181, 130};

char aError_48[8] = {99, 130, 104, 130, 97, 130, 204, 141};

char byte_4B77C0[32] = {114, 114, 111, 114, 0, 0, 0, 149, 115, 144, 179, 130, 200, 131, 95, 131, 67, 131, 140, 131, 78, 131, 103, 131, 104, 131, 141, 131, 69, 130, 214, 130};

char aError_49[8] = {115, 144, 179, 130, 200, 131, 95, 131};

char byte_4B77E8[40] = {114, 114, 111, 114, 0, 0, 0, 144, 86, 130, 181, 130, 162, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 240, 141, 236, 130, 233, 130, 177, 130, 198, 130, 170, 143, 111, 151};

char aError_50[8] = {86, 130, 181, 130, 162, 131, 84, 129};

char byte_4B7818[52] = {82, 82, 79, 82, 48, 54, 0, 131, 112, 131, 140, 131, 98, 131, 103, 130, 240, 141, 236, 144, 172, 130, 197, 130, 171, 130, 220, 130, 185, 130, 241, 130, 197, 130, 181, 130, 189, 129, 66, 0, 0, 0, 0, 69, 82, 82, 79, 82, 48, 55, 0, 130};

char aError06[8] = {112, 131, 140, 131, 98, 131, 103, 130};

char unk_4B7854[36] = {82, 82, 79, 82, 48, 55, 0, 130, 87, 131, 114, 131, 98, 131, 103, 131, 74, 131, 137, 129, 91, 130, 197, 130, 205, 130, 160, 130, 232, 130, 220, 130, 185, 130, 241, 129};

char aError07[8] = {87, 131, 114, 131, 98, 131, 103, 131};

char unk_4B7880[32] = {82, 82, 79, 82, 48, 55, 0, 131, 112, 131, 140, 131, 98, 131, 103, 130, 170, 131, 65, 131, 94, 131, 98, 131, 96, 130, 179, 130, 234, 130, 196, 130};

char aError07_0[8] = {112, 131, 140, 131, 98, 131, 103, 130};

char unk_4B78A8[36] = {82, 82, 79, 82, 48, 55, 0, 131, 112, 131, 140, 131, 98, 131, 103, 130, 170, 131, 84, 131, 124, 129, 91, 131, 103, 130, 179, 130, 234, 130, 196, 130, 162, 130, 220, 130};

char aError07_1[8] = {112, 131, 140, 131, 98, 131, 103, 130};

char unk_4B78D4[36] = {82, 82, 79, 82, 48, 55, 0, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 170, 131, 141, 131, 88, 131, 103, 130, 181, 130, 196, 130, 162, 130, 220, 130};

char aError07_2[8] = {84, 129, 91, 131, 116, 131, 70, 131};

char unk_4B7900[36] = {82, 82, 79, 82, 48, 55, 0, 71, 69, 78, 69, 82, 73, 67, 0, 69, 82, 82, 79, 82, 48, 55, 0, 73, 78, 86, 65, 76, 73, 68, 79, 66, 74, 69, 67, 84};

char aError07_3[8] = {69, 78, 69, 82, 73, 67, 0, 69};

char aGeneric[8] = {82, 82, 79, 82, 48, 55, 0, 73};

char aError07_4[8] = {78, 86, 65, 76, 73, 68, 79, 66};

char aInvalidobject[16] = {82, 82, 79, 82, 48, 55, 0, 73, 78, 86, 65, 76, 73, 68, 80, 65};

char aError07_5[8] = {78, 86, 65, 76, 73, 68, 80, 65};

char aInvalidparams[16] = {82, 82, 79, 82, 48, 55, 0, 73, 78, 86, 65, 76, 73, 68, 80, 73};

char aError07_6[8] = {78, 86, 65, 76, 73, 68, 80, 73};

char aInvalidpixelfo[20] = {114, 114, 111, 114, 0, 0, 0, 131, 129, 131, 130, 131, 138, 130, 170, 145, 171, 130, 232, 130};

char aError_51[8] = {129, 131, 130, 131, 138, 130, 170, 145};

char byte_4B7988[24] = {114, 114, 111, 114, 0, 0, 0, 131, 129, 131, 130, 131, 138, 130, 170, 145, 171, 130, 232, 130, 220, 130, 185, 130};

char aError_52[8] = {129, 131, 130, 131, 138, 130, 170, 145};

char byte_4B79A8[24] = {114, 114, 111, 114, 0, 0, 0, 73, 77, 71, 32, 131, 116, 131, 64, 131, 67, 131, 139, 130, 240, 131, 141, 129};

char aError_53[8] = {77, 71, 32, 131, 116, 131, 64, 131};

char aImg[40] = {114, 114, 111, 114, 0, 0, 0, 131, 114, 131, 98, 131, 103, 131, 125, 131, 98, 131, 118, 130, 170, 138, 214, 152, 65, 149, 116, 130, 175, 130, 231, 130, 234, 130, 196, 130, 162, 130, 220, 130};

char aError_54[8] = {114, 131, 98, 131, 103, 131, 125, 131};

char byte_4B79F8[40] = {82, 82, 79, 82, 0, 0, 0, 147, 199, 130, 221, 130, 177, 130, 222, 144, 148, 130, 170, 145, 229, 130, 171, 130, 183, 130, 172, 130, 220, 130, 183, 129, 66, 0, 0, 69, 110, 116, 114, 121};

char aError_55[8] = {199, 130, 221, 130, 177, 130, 222, 144};

char byte_4B7A28[28] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 142, 119, 146, 232, 130, 181, 130, 189, 131};

char aEntrypat_0[20] = {119, 146, 232, 130, 181, 130, 189, 131, 84, 131, 67, 131, 89, 130, 170, 145, 229, 130, 171, 130};

char byte_4B7A58[32] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 105, 32, 130, 170, 32, 77, 65, 88, 95, 80, 65, 95, 78};

char aEntrypat_1[20] = {32, 130, 170, 32, 77, 65, 88, 95, 80, 65, 95, 78, 85, 77, 32, 130, 240, 146, 180, 130};

char aI[32] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 66, 105, 116, 77, 97, 112, 32, 143, 73, 146, 91, 130, 201};

char aEntrypat_2[20] = {105, 116, 77, 97, 112, 32, 143, 73, 146, 91, 130, 201, 151, 136, 130, 220, 130, 181, 130, 189};

char aBitmap[24] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 131, 84, 129, 91, 131};

char aEntrypat_3[20] = {84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 240, 141, 236, 144, 172, 143, 111, 151};

char byte_4B7AEC[40] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 67, 117, 116, 66, 105, 116, 32, 130, 170, 131, 71, 131, 137, 129, 91, 130, 240, 149, 212, 130, 181};

char aEntrypat_4[20] = {117, 116, 66, 105, 116, 32, 130, 170, 131, 71, 131, 137, 129, 91, 130, 240, 149, 212, 130, 181};

char aCutbit[32] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 69, 110, 116, 114, 121, 66, 105, 116, 32, 130, 170, 131, 71};

char aEntrypat_5[20] = {110, 116, 114, 121, 66, 105, 116, 32, 130, 170, 131, 71, 131, 137, 129, 91, 130, 240, 149, 212};

char aEntrybit[32] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 69, 110, 116, 114, 121, 66, 105, 116, 50, 32, 130, 170, 131};

char aEntrypat_6[20] = {110, 116, 114, 121, 66, 105, 116, 50, 32, 130, 170, 131, 71, 131, 137, 129, 91, 130, 240, 149};

char aEntrybit2[36] = {82, 82, 79, 82, 0, 0, 0, 147, 199, 130, 221, 130, 177, 130, 222, 144, 148, 130, 170, 145, 229, 130, 171, 130, 183, 130, 172, 130, 220, 130, 183, 129, 66, 0, 0, 69};

char aError_56[8] = {199, 130, 221, 130, 177, 130, 222, 144};

char unk_4B7BBC[28] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 131, 84, 129, 91, 131, 116, 131, 70, 131};

char unk_4B7BD8[20] = {84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 240, 141, 236, 144, 172, 143, 111, 151};

char unk_4B7BEC[40] = {82, 82, 79, 82, 0, 0, 0, 80, 97, 116, 78, 117, 109, 32, 130, 170, 149, 115, 144, 179, 130, 197, 130, 183, 0, 0, 0, 69, 114, 114, 111, 114, 0, 0, 0, 131, 84, 129, 91, 131};

char aError_57[8] = {97, 116, 78, 117, 109, 32, 130, 170};

char unk_4B7C1C[20] = {114, 114, 111, 114, 0, 0, 0, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130};

char aError_58[8] = {84, 129, 91, 131, 116, 131, 70, 131};

char byte_4B7C38[32] = {114, 114, 111, 114, 0, 0, 0, 131, 141, 131, 88, 130, 198, 0, 0, 69, 82, 82, 79, 82, 0, 0, 0, 80, 97, 116, 78, 117, 109, 32, 130, 170};

char aError_59[8] = {141, 131, 88, 130, 198, 0, 0, 69};

char byte_4B7C60[8] = {82, 82, 79, 82, 0, 0, 0, 80};

char aError_60[8] = {97, 116, 78, 117, 109, 32, 130, 170};

char unk_4B7C70[20] = {114, 114, 111, 114, 0, 0, 0, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130};

char aError_61[8] = {84, 129, 91, 131, 116, 131, 70, 131};

char byte_4B7C8C[48] = {112, 68, 68, 83, 32, 61, 32, 78, 85, 76, 76, 0, 0, 0, 0, 109, 95, 112, 68, 68, 83, 98, 117, 102, 32, 61, 32, 78, 85, 76, 76, 32, 0, 0, 0, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 129};

char aLpddsNull[16] = {95, 112, 68, 68, 83, 98, 117, 102, 32, 61, 32, 78, 85, 76, 76, 32};

char aMPddsbufNull[20] = {84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 129, 69, 131, 141, 131, 88, 131, 103, 0};

char byte_4B7CE0[24] = {88, 0, 0, 69, 82, 82, 79, 82, 0, 0, 0, 147, 199, 130, 221, 130, 177, 130, 222, 144, 148, 130, 170, 145};

char asc_4B7CF8[4] = {82, 82, 79, 82};

char aError_62[8] = {199, 130, 221, 130, 177, 130, 222, 144};

char unk_4B7D04[28] = {101, 116, 68, 67, 32, 70, 97, 105, 108, 101, 100, 33, 0, 0, 0, 82, 101, 108, 101, 97, 115, 101, 68, 67, 32, 70, 97, 105};

char aGetdcFailed[16] = {101, 108, 101, 97, 115, 101, 68, 67, 32, 70, 97, 105, 108, 101, 100, 33};

char aReleasedcFaile[20] = {82, 82, 79, 82, 0, 0, 0, 147, 199, 130, 221, 130, 177, 130, 222, 144, 148, 130, 170, 145};

char aError_63[8] = {199, 130, 221, 130, 177, 130, 222, 144};

char unk_4B7D4C[28] = {84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 170, 141, 236, 130, 231, 130, 234, 130, 196, 130, 162, 130, 200, 130, 162, 130};

char byte_4B7D68[60] = {99, 130, 98, 130, 204, 142, 230, 147, 190, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 129, 66, 0, 0, 130, 99, 130, 104, 130, 97, 130, 204, 141, 236, 144, 172, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 129, 66, 0, 0, 0, 0, 131};

char byte_4B7DA4[28] = {99, 130, 104, 130, 97, 130, 204, 141, 236, 144, 172, 130, 201, 142, 184, 148, 115, 130, 181, 130, 220, 130, 181, 130, 189, 129, 66, 0};

char byte_4B7DC0[32] = {114, 131, 98, 131, 103, 131, 125, 131, 98, 131, 118, 130, 170, 138, 214, 152, 65, 149, 116, 130, 175, 130, 231, 130, 234, 130, 196, 130, 162, 130, 220, 130};

char byte_4B7DE0[40] = {82, 82, 79, 82, 0, 0, 0, 147, 199, 130, 221, 130, 177, 130, 222, 144, 148, 130, 170, 145, 229, 130, 171, 130, 183, 130, 172, 130, 220, 130, 183, 129, 66, 0, 0, 116, 121, 112, 101, 61};

char aError_64[8] = {199, 130, 221, 130, 177, 130, 222, 144};

char byte_4B7E10[28] = {121, 112, 101, 61, 37, 100, 44, 32, 120, 61, 37, 100, 44, 32, 121, 61, 37, 100, 44, 32, 119, 61, 37, 100, 44, 32, 104, 61};

char aTypeDXDYDWDHDB[48] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 142, 119, 146, 232, 130, 181, 130, 189, 131, 84, 131, 67, 131, 89, 130, 170, 145, 229, 130, 171, 130, 183, 130, 172, 130, 220, 130, 183, 0};

char aEntrypat_7[20] = {119, 146, 232, 130, 181, 130, 189, 131, 84, 131, 67, 131, 89, 130, 170, 145, 229, 130, 171, 130};

char byte_4B7E70[32] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 105, 32, 130, 170, 32, 77, 65, 88, 95, 80, 65, 95, 78};

char aEntrypat_8[20] = {32, 130, 170, 32, 77, 65, 88, 95, 80, 65, 95, 78, 85, 77, 32, 130, 240, 146, 180, 130};

char byte_4B7EA4[32] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 66, 105, 116, 77, 97, 112, 32, 143, 73, 146, 91, 130, 201};

char aEntrypat_9[20] = {105, 116, 77, 97, 112, 32, 143, 73, 146, 91, 130, 201, 151, 136, 130, 220, 130, 181, 130, 189};

char aBitmap_0[24] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 131, 84, 129, 91, 131};

char aEntrypat_10[20] = {84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 240, 141, 236, 144, 172, 143, 111, 151};

char byte_4B7F04[40] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 67, 117, 116, 66, 105, 116, 32, 130, 170, 131, 71, 131, 137, 129, 91, 130, 240, 149, 212, 130, 181};

char aEntrypat_11[20] = {117, 116, 66, 105, 116, 32, 130, 170, 131, 71, 131, 137, 129, 91, 130, 240, 149, 212, 130, 181};

char aCutbit_0[32] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 69, 110, 116, 114, 121, 66, 105, 116, 51, 32, 130, 170, 131};

char aEntrypat_12[20] = {110, 116, 114, 121, 66, 105, 116, 51, 32, 130, 170, 131, 71, 131, 137, 129, 91, 130, 240, 149};

char aEntrybit3[36] = {112, 68, 68, 83, 32, 61, 32, 78, 85, 76, 76, 0, 0, 0, 0, 109, 95, 112, 68, 68, 83, 98, 117, 102, 32, 61, 32, 78, 85, 76, 76, 32, 149, 96, 137, 230};

char aLpddsNull_0[16] = {95, 112, 68, 68, 83, 98, 117, 102, 32, 61, 32, 78, 85, 76, 76, 32};

char unk_4B7FA8[36] = {84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 129, 69, 131, 141, 131, 88, 131, 103, 0, 0, 0, 0, 68, 68, 69, 82, 82, 95, 73, 78, 86, 65, 76, 73, 68};

char unk_4B7FCC[24] = {68, 69, 82, 82, 95, 73, 78, 86, 65, 76, 73, 68, 82, 69, 67, 84, 0, 0, 0, 40, 32, 37, 100, 44};

char aDderrInvalidre[20] = {32, 37, 100, 44, 32, 37, 100, 32, 41, 32, 45, 32, 40, 32, 37, 100, 32, 44, 32, 37};

char aDDDD[28] = {88, 0, 0, 76, 111, 99, 107, 69, 114, 114, 111, 114, 32, 40, 32, 37, 100, 44, 32, 37, 100, 32, 41, 45, 40, 32, 37, 100};

char asc_4B8014[4] = {111, 99, 107, 69};

char aLockerrorDDDD[32] = {111, 99, 107, 69, 114, 114, 111, 114, 33, 32, 50, 0, 0, 0, 0, 76, 111, 99, 107, 69, 114, 114, 111, 114, 32, 40, 32, 37, 100, 44, 32, 37};

char aLockerror2[16] = {111, 99, 107, 69, 114, 114, 111, 114, 32, 40, 32, 37, 100, 44, 32, 37};

char aLockerrorDDDD_0[32] = {111, 99, 107, 69, 114, 114, 111, 114, 33, 32, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char aLockerror2_0[52] = {184, 148, 115, 0, 0, 0, 0, 109, 95, 112, 68, 68, 83, 66, 97, 99, 107, 32, 61, 32, 78, 85, 76, 76, 0, 0, 0, 76, 111, 99, 107, 69, 114, 114, 111, 114, 32, 40, 32, 37, 100, 44, 32, 37, 100, 32, 41, 45, 40, 32, 37, 100};

char byte_4B809C[8] = {95, 112, 68, 68, 83, 66, 97, 99};

char aMPddsbackNull[20] = {111, 99, 107, 69, 114, 114, 111, 114, 32, 40, 32, 37, 100, 44, 32, 37, 100, 32, 41, 45};

char aLockerrorDDDD_1[32] = {111, 99, 107, 69, 114, 114, 111, 114, 33, 32, 50, 32, 40, 37, 100, 44, 37, 100, 41, 45, 40, 37, 100, 44, 37, 100, 41, 0, 0, 0, 0, 69};

char aLockerror2DDDD[32] = {82, 82, 79, 82, 0, 0, 0, 131, 67, 131, 129, 129, 91, 131, 87, 131, 116, 131, 64, 131, 67, 131, 139, 130, 240, 147, 199, 130, 221, 141, 158, 130};

char aError_65[8] = {67, 131, 129, 129, 91, 131, 87, 131};

char unk_4B8100[44] = {82, 82, 79, 82, 0, 0, 0, 147, 199, 130, 221, 130, 177, 130, 222, 144, 148, 130, 170, 145, 229, 130, 171, 130, 183, 130, 172, 130, 220, 130, 183, 129, 66, 0, 0, 69, 110, 116, 114, 121, 80, 97, 116, 32};

char aError_66[8] = {199, 130, 221, 130, 177, 130, 222, 144};

char unk_4B8134[28] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 105, 32, 130, 170, 32, 77, 65, 88, 95};

char unk_4B8150[20] = {32, 130, 170, 32, 77, 65, 88, 95, 80, 65, 84, 95, 78, 85, 77, 32, 130, 240, 146, 180};

char unk_4B8164[32] = {110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 131, 84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130};

char unk_4B8184[20] = {84, 129, 91, 131, 116, 131, 70, 131, 67, 131, 88, 130, 240, 141, 236, 144, 172, 143, 111, 151};

char unk_4B8198[40] = {61, 37, 100, 44, 32, 101, 110, 100, 61, 37, 100, 44, 32, 87, 61, 37, 100, 44, 32, 72, 61, 37, 100, 0, 0, 0, 0, 69, 82, 82, 79, 82, 0, 0, 0, 69, 110, 116, 114, 121};

char aIDEndDWDHD[28] = {82, 82, 79, 82, 0, 0, 0, 69, 110, 116, 114, 121, 80, 97, 116, 32, 130, 204, 131, 71, 131, 137, 129, 91, 0, 0, 0, 69};

char aError_67[8] = {110, 116, 114, 121, 80, 97, 116, 32};

char unk_4B81E4[20] = {110, 116, 114, 121, 66, 105, 116, 51, 32, 130, 170, 131, 71, 131, 137, 129, 91, 130, 240, 149};

char unk_4B81F8[36] = {77, 65, 71, 69, 70, 73, 76, 69, 0, 0, 0, 104, 97, 110, 100, 108, 101, 32, 105, 115, 32, 110, 117, 108, 108, 10, 0, 100, 100, 99, 111, 112, 121, 98, 105, 116};

char aImagefile[12] = {97, 110, 100, 108, 101, 32, 105, 115, 32, 110, 117, 108};

char aHandleIsNull[16] = {100, 99, 111, 112, 121, 98, 105, 116, 109, 97, 112, 32, 102, 97, 105, 108};

char aDdcopybitmapFa[24] = {114, 101, 97, 116, 101, 99, 111, 109, 112, 97, 116, 105, 98, 108, 101, 32, 100, 99, 32, 102, 97, 105, 108, 101};

char OutputString[28] = {111, 99, 107, 32, 114, 101, 115, 111, 117, 114, 99, 101, 32, 102, 97, 105, 108, 101, 100, 10, 0, 0, 0, 32, 5, 147, 25, 0};

char aLockResourceFa[24] = {5, 147, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char unk_4B8284[28] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 152, 0, 0, 115, 152, 0, 0, 181, 46, 74, 0, 204};

char dword_4B82A0[24] = {46, 74, 0, 204, 46, 74, 0, 204, 46, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115};

char off_4B82B8[24] = {105, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 111, 115, 0, 0, 0, 0, 0, 0};

char unk_4B82D0[16] = {111, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108};

char unk_4B82E0[16] = {111, 103, 49, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161};

char aLog10[16] = {90, 74, 0, 2, 0, 0, 0, 21, 101, 74, 0, 0, 0, 0, 0, 204};

char off_4B8300[4] = {0, 0, 0, 21};

char dword_4B8304[16] = {63, 74, 0, 180, 124, 74, 0, 180, 124, 74, 0, 180, 124, 74, 0, 180};

char off_4B8314[4] = {124, 74, 0, 180};

char off_4B8318[4] = {124, 74, 0, 180};

char off_4B831C[4] = {124, 74, 0, 180};

char off_4B8320[4] = {124, 74, 0, 180};

char off_4B8324[4] = {124, 74, 0, 180};

char off_4B8328[4] = {124, 74, 0, 0};

char off_4B832C[4] = {0, 0, 0, 0};

char tbyte_4B8330[10] = {194, 104, 33, 162, 218, 15, 201, 255, 63, 0};

char tbyte_4B833A[10] = {0, 0, 0, 0, 0, 240, 63, 1, 8, 4};

char dbl_4B8344[9] = {4, 8, 8, 8, 4, 8, 8, 0, 4};

char unk_4B834D[19] = {97, 116, 97, 110, 50, 0, 0, 0, 0, 0, 0, 0, 2, 16, 0, 172, 73, 74, 0};

char unk_4B8360[80] = {0, 0, 0, 0, 0, 0, 128, 255, 127, 0, 0, 0, 0, 0, 0, 0, 128, 255, 255, 220, 167, 215, 185, 133, 102, 113, 177, 13, 64, 0, 0, 0, 0, 0, 0, 255, 255, 13, 64, 247, 54, 67, 12, 152, 25, 246, 149, 253, 63, 0, 0, 0, 0, 0, 0, 224, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 101, 120, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char tbyte_4B83B0[10] = {0, 0, 0, 0, 0, 0, 128, 255, 255, 220};

char tbyte_4B83BA[20] = {0, 0, 0, 0, 0, 255, 255, 13, 64, 247, 54, 67, 12, 152, 25, 246, 149, 253, 63, 0};

char tbyte_4B83CE[20] = {0, 0, 0, 0, 0, 224, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 101, 120};

char dbl_4B83E2[50] = {132, 75, 0, 30, 132, 75, 0, 0, 0, 32, 0, 32, 0, 32, 0, 32, 0, 32, 0, 32, 0, 32, 0, 32, 0, 32, 0, 40, 0, 40, 0, 40, 0, 40, 0, 40, 0, 32, 0, 32, 0, 32, 0, 32, 0, 32, 0, 32, 0, 32};

char off_4B8414[8] = {0, 32, 0, 32, 0, 32, 0, 32};

char __ctype[516] = {0, 0, 0, 46, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 204, 197, 74, 0, 188, 197, 74, 0, 5, 0, 0, 192, 11, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 192, 4, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 192, 4, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 192, 8, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 192, 8, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 192, 8, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 192, 8, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 192, 8, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 192, 8, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 192, 8, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 7, 0, 0, 0, 10, 0, 0, 0, 140, 0, 0, 0, 255, 255, 255, 255, 0, 10, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 56, 200, 74, 0, 8, 0, 0, 0, 12, 200, 74, 0, 9, 0, 0, 0, 224, 199, 74, 0, 10, 0, 0, 0, 188, 199, 74, 0, 16, 0, 0, 0, 144, 199, 74, 0, 17, 0, 0, 0, 96, 199, 74, 0, 18, 0, 0, 0, 60, 199, 74, 0, 19, 0, 0, 0, 16, 199, 74, 0, 24, 0, 0, 0, 216, 198, 74, 0, 25, 0, 0, 0, 176, 198, 74, 0, 26, 0, 0, 0, 120, 198, 74, 0, 27, 0, 0, 0, 64, 198, 74, 0, 28, 0, 0, 0, 24, 198, 74, 0, 120, 0, 0, 0, 8, 198, 74, 0, 121, 0, 0, 0, 248, 197, 74, 0, 122, 0, 0, 0, 232, 197, 74, 0, 252, 0, 0, 0, 228, 197, 74, 0, 255, 0, 0, 0, 212, 197, 74, 0, 248, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 1, 252, 255, 255, 53, 0, 0, 0, 11, 0, 0, 0, 64, 0, 0, 0, 255, 3, 0, 0, 128, 0, 0, 0, 129, 255, 255, 255, 24, 0, 0, 0, 8, 0, 0, 0, 32, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 4, 0, 0, 7, 0, 0, 10, 0, 0, 13, 0, 0, 0, 0, 112, 63, 0, 0, 136, 63, 0, 0, 0, 95, 0, 1, 0, 0, 4, 0, 0, 7, 0, 0, 10, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 238, 63, 0, 0, 0, 0, 0, 0, 240, 67, 0, 0, 0, 0, 0, 0, 240, 59, 0, 0, 0, 0, 0, 0, 240, 63, 0, 0, 0, 0, 0, 0, 224, 63, 0, 0, 0, 0, 0, 0, 255, 255, 254, 127, 84, 128, 74, 0, 90, 128, 74, 0, 95, 128, 74, 0, 101, 128, 74, 0, 106, 128, 74, 0, 112, 128, 74, 0, 118, 128, 74, 0, 124, 128, 74, 0, 130, 128, 74, 0, 158, 128, 74};

char cbMultiByte[4] = {0, 0, 0, 1};

char byte_4B8624[12] = {197, 74, 0, 188, 197, 74, 0, 5, 0, 0, 192, 11};

char Str[4] = {197, 74, 0, 5};

char off_4B8634[4] = {0, 0, 192, 11};

char dword_4B8638[4] = {0, 0, 0, 0};

char dword_4B863C[116] = {0, 0, 0, 7, 0, 0, 0, 10, 0, 0, 0, 140, 0, 0, 0, 255, 255, 255, 255, 0, 10, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 56, 200, 74, 0, 8, 0, 0, 0, 12, 200, 74, 0, 9, 0, 0, 0, 224, 199, 74, 0, 10, 0, 0, 0, 188, 199, 74, 0, 16, 0, 0, 0, 144, 199, 74, 0, 17, 0, 0, 0, 96, 199, 74, 0, 18, 0, 0, 0, 60, 199, 74, 0, 19, 0, 0, 0, 16, 199, 74, 0, 24, 0, 0, 0, 216, 198, 74, 0, 25, 0, 0, 0, 176, 198, 74, 0, 26, 0, 0, 0, 120};

char dword_4B86B0[4] = {0, 0, 0, 10};

char dword_4B86B4[4] = {0, 0, 0, 140};

char dword_4B86B8[4] = {0, 0, 0, 255};

char dword_4B86BC[4] = {255, 255, 255, 0};

char unk_4B86C0[16] = {0, 0, 0, 56, 200, 74, 0, 8, 0, 0, 0, 12, 200, 74, 0, 9};

char dword_4B86D0[4] = {200, 74, 0, 8};

char off_4B86D4[140] = {3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 1, 252, 255, 255, 53, 0, 0, 0, 11, 0, 0, 0, 64, 0, 0, 0, 255, 3, 0, 0, 128, 0, 0, 0, 129, 255, 255, 255, 24, 0, 0, 0, 8, 0, 0, 0, 32, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 4, 0, 0, 7, 0, 0, 10, 0, 0, 13, 0, 0, 0, 0, 112, 63, 0, 0, 136, 63, 0, 0, 0, 95, 0, 1, 0, 0, 4, 0, 0, 7, 0, 0, 10, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 238, 63, 0, 0, 0, 0, 0, 0, 240, 67, 0, 0, 0, 0, 0, 0, 240, 59, 0, 0, 0, 0, 0, 0, 240, 63, 0};

char dword_4B8760[8] = {4, 0, 0, 1, 252, 255, 255, 53};

char unk_4B8768[24] = {0, 0, 0, 129, 255, 255, 255, 24, 0, 0, 0, 8, 0, 0, 0, 32, 0, 0, 0, 127, 0, 0, 0, 0};

char unk_4B8780[32] = {1, 0, 0, 4, 0, 0, 7, 0, 0, 10, 0, 0, 13, 0, 0, 0, 0, 112, 63, 0, 0, 136, 63, 0, 0, 0, 95, 0, 1, 0, 0, 4};

char byte_4B87A0[16] = {0, 112, 63, 0, 0, 136, 63, 0, 0, 0, 95, 0, 1, 0, 0, 4};

char flt_4B87B0[4] = {0, 136, 63, 0};

char flt_4B87B4[4] = {0, 0, 95, 0};

char flt_4B87B8[4] = {1, 0, 0, 4};

char byte_4B87BC[24] = {0, 0, 0, 0, 0, 240, 67, 0, 0, 0, 0, 0, 0, 240, 59, 0, 0, 0, 0, 0, 0, 240, 63, 0};

char dbl_4B87D4[8] = {0, 0, 0, 0, 0, 240, 59, 0};

char dbl_4B87DC[16] = {0, 0, 0, 0, 0, 224, 63, 0, 0, 0, 0, 0, 0, 255, 255, 254};

char dbl_4B87EC[8] = {0, 0, 0, 0, 0, 255, 255, 254};

char tbyte_4B87F4[10] = {128, 74, 0, 90, 128, 74, 0, 95, 128, 74};

char jpt_4A804D[258] = {182, 76, 0, 0, 0, 0, 0, 160, 182, 76, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char off_4B8900[16] = {0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0};

char unk_4B8910[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1};

char unk_4B8920[32] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char unk_4B8940[48] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char unk_4B8970[528] = {2, 4, 8, 0, 0, 0, 0, 164, 3, 0, 0, 96, 130, 121, 130, 33, 0, 0, 0, 0, 0, 0, 0, 166, 223, 0, 0, 0, 0, 0, 0, 161, 165, 0, 0, 0, 0, 0, 0, 129, 159, 224, 252, 0, 0, 0, 0, 64, 126, 128, 252, 0, 0, 0, 0, 168, 3, 0, 0, 193, 163, 218, 163, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 254, 0, 0, 0, 0, 0, 0, 64, 254, 0, 0, 0, 0, 0, 0, 181, 3, 0, 0, 193, 163, 218, 163, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 254, 0, 0, 0, 0, 0, 0, 65, 254, 0, 0, 0, 0, 0, 0, 182, 3, 0, 0, 207, 162, 228, 162, 26, 0, 229, 162, 232, 162, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 254, 0, 0, 0, 0, 0, 0, 64, 126, 161, 254, 0, 0, 0, 0, 81, 5, 0, 0, 81, 218, 94, 218, 32, 0, 95, 218, 106, 218, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 211, 216, 222, 224, 249, 0, 0, 49, 126, 129, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 202, 74, 0, 29, 0, 0, 0, 252, 201, 74, 0, 26, 0, 0, 0, 248, 201, 74, 0, 27, 0, 0, 0, 240, 201, 74, 0, 31, 0, 0, 0, 232, 201, 74, 0, 19, 0, 0, 0, 224, 201, 74, 0, 33, 0, 0, 0, 216, 201, 74, 0, 14, 0, 0, 0, 208, 201, 74, 0, 13, 0, 0, 0, 200, 201, 74, 0, 15, 0, 0, 0, 192, 201, 74, 0, 16, 0, 0, 0, 184, 201, 74, 0, 5, 0, 0, 0, 176, 201, 74, 0, 30, 0, 0, 0, 172, 201, 74, 0, 18, 0, 0, 0, 168, 201, 74, 0, 32, 0, 0, 0, 164, 201, 74, 0, 12, 0, 0, 0, 156, 201, 74, 0, 11, 0, 0, 0, 148, 201, 74, 0, 21, 0, 0, 0, 140, 201, 74, 0, 28, 0, 0, 0, 132, 201, 74, 0, 25, 0, 0, 0, 124, 201, 74, 0, 17, 0, 0, 0, 116, 201, 74, 0, 24, 0, 0, 0, 108, 201, 74, 0, 22, 0, 0, 0, 100, 201, 74, 0, 23, 0, 0, 0, 92, 201, 74, 0, 34, 0, 0, 0, 88, 201, 74, 0, 35, 0, 0, 0, 84, 201, 74, 0, 36, 0, 0, 0, 80, 201, 74, 0, 148, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 16, 68, 0, 0, 1, 0, 0, 0, 0, 0, 0, 128, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 127, 0, 0, 0, 0, 0, 0, 248, 255, 255, 255, 255, 255, 255, 255, 239, 127, 0};

char byte_4B8B80[8] = {3, 0, 0, 96, 130, 121, 130, 33};

char unk_4B8B88[4] = {130, 121, 130, 33};

char unk_4B8B8C[12] = {223, 0, 0, 0, 0, 0, 0, 161, 165, 0, 0, 0};

char unk_4B8B98[224] = {0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 202, 74, 0, 29, 0, 0, 0, 252, 201, 74, 0, 26, 0, 0, 0, 248, 201, 74, 0, 27, 0, 0, 0, 240, 201, 74, 0, 31, 0, 0, 0, 232, 201, 74, 0, 19, 0, 0, 0, 224, 201, 74, 0, 33, 0, 0, 0, 216, 201, 74, 0, 14, 0, 0, 0, 208, 201, 74, 0, 13, 0, 0, 0, 200, 201, 74, 0, 15, 0, 0, 0, 192, 201, 74, 0, 16, 0, 0, 0, 184, 201, 74, 0, 5, 0, 0, 0, 176, 201, 74, 0, 30, 0, 0, 0, 172, 201, 74, 0, 18, 0, 0, 0, 168, 201, 74, 0, 32, 0, 0, 0, 164, 201, 74, 0, 12, 0, 0, 0, 156, 201, 74, 0, 11, 0, 0, 0, 148, 201, 74, 0, 21, 0, 0, 0, 140, 201, 74, 0, 28, 0, 0, 0, 132, 201, 74, 0, 25, 0, 0, 0, 124, 201, 74, 0, 17, 0, 0, 0, 116, 201, 74, 0, 24, 0, 0, 0, 108, 201, 74, 0, 22, 0, 0, 0, 100, 201, 74, 0, 23, 0, 0, 0, 92, 201, 74, 0, 34, 0, 0, 0, 88, 201, 74, 0, 35, 0, 0, 0, 84, 201, 74, 0, 36, 0, 0, 0, 80, 201, 74, 0, 148};

char unk_4B8C78[224] = {38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 16, 68, 0, 0, 1, 0, 0, 0, 0, 0, 0, 128, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 127, 0, 0, 0, 0, 0, 0, 248, 255, 255, 255, 255, 255, 255, 255, 239, 127, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 128, 1, 0, 0, 0, 22, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 0, 4, 0, 0, 0, 24, 0, 0, 0, 5, 0, 0, 0, 13, 0, 0, 0, 6, 0, 0, 0, 9, 0, 0, 0, 7, 0, 0, 0, 12, 0, 0, 0, 8, 0, 0, 0, 12, 0, 0, 0, 9, 0, 0, 0, 12, 0, 0, 0, 10, 0, 0, 0, 7, 0, 0, 0, 11, 0, 0, 0, 8, 0, 0, 0, 12, 0, 0, 0, 22, 0, 0, 0, 13, 0, 0, 0, 22, 0, 0, 0, 15, 0, 0, 0, 2, 0, 0, 0, 16, 0, 0, 0, 13, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 18, 0, 0, 0, 2, 0, 0, 0, 33, 0, 0, 0, 13, 0, 0, 0, 53, 0, 0, 0, 2, 0, 0, 0, 65};

char dword_4B8D58[4] = {0, 0, 0, 0};

char tbyte_4B8D5C[12] = {0, 0, 0, 0, 0, 0, 128, 0, 48, 0, 0, 0};

char tbyte_4B8D68[16] = {0, 0, 0, 0, 0, 240, 127, 0, 0, 0, 0, 0, 0, 248, 255, 255};

char dbl_4B8D78[8] = {0, 0, 0, 0, 0, 248, 255, 255};

char dbl_4B8D80[8] = {255, 255, 255, 255, 255, 239, 127, 0};

char dbl_4B8D88[16] = {0, 0, 0, 0, 0, 0, 128, 1, 0, 0, 0, 22, 0, 0, 0, 2};

char dbl_4B8D98[8] = {0, 0, 0, 22, 0, 0, 0, 2};

char unk_4B8DA0[4] = {0, 0, 0, 2};

char dword_4B8DA4[356] = {0, 0, 0, 0, 0, 0, 0, 0, 160, 2, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 5, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 8, 64, 0, 0, 0, 0, 0, 0, 0, 0, 64, 156, 12, 64, 0, 0, 0, 0, 0, 0, 0, 0, 80, 195, 15, 64, 0, 0, 0, 0, 0, 0, 0, 0, 36, 244, 18, 64, 0, 0, 0, 0, 0, 0, 0, 128, 150, 152, 22, 64, 0, 0, 0, 0, 0, 0, 0, 32, 188, 190, 25, 64, 0, 0, 0, 0, 0, 4, 191, 201, 27, 142, 52, 64, 0, 0, 0, 161, 237, 204, 206, 27, 194, 211, 78, 64, 32, 240, 158, 181, 112, 43, 168, 173, 197, 157, 105, 64, 208, 93, 253, 37, 229, 26, 142, 79, 25, 235, 131, 64, 113, 150, 215, 149, 67, 14, 5, 141, 41, 175, 158, 64, 249, 191, 160, 68, 237, 129, 18, 143, 129, 130, 185, 64, 191, 60, 213, 166, 207, 255, 73, 31, 120, 194, 211, 64, 111, 198, 224, 140, 233, 128, 201, 71, 186, 147, 168, 65, 188, 133, 107, 85, 39, 57, 141, 247, 112, 224, 124, 66, 188, 221, 142, 222, 249, 157, 251, 235, 126, 170, 81, 67, 161, 230, 118, 227, 204, 242, 41, 47, 132, 129, 38, 68, 40, 16, 23, 170, 248, 174, 16, 227, 197, 196, 250, 68, 235, 167, 212, 243, 247, 235, 225, 74, 122, 149, 207, 69, 101, 204, 199, 145, 14, 166, 174, 160, 25, 227, 163, 70, 13, 101, 23, 12, 117, 129, 134, 117, 118, 201, 72, 77, 88, 66, 228, 167, 147, 57, 59, 53, 184, 178, 237, 83, 77, 167, 229, 93, 61, 197, 93, 59, 139, 158, 146, 90, 255, 93, 166, 240, 161, 32, 192, 84, 165, 140, 55, 97, 209, 253, 139, 90, 139, 216, 37, 93, 137, 249, 219, 103, 170, 149, 248, 243, 39, 191, 162, 200, 93, 221, 128, 110, 76, 201, 155, 151, 32, 138, 2, 82, 96, 196, 37, 117, 0, 0, 0, 0, 205, 204, 205, 204, 204};

char unk_4B8F08[352] = {204, 205, 204, 204, 204, 204, 204, 204, 204, 251, 63, 113, 61, 10, 215, 163, 112, 61, 10, 215, 163, 248, 63, 90, 100, 59, 223, 79, 141, 151, 110, 18, 131, 245, 63, 195, 211, 44, 101, 25, 226, 88, 23, 183, 209, 241, 63, 208, 15, 35, 132, 71, 27, 71, 172, 197, 167, 238, 63, 64, 166, 182, 105, 108, 175, 5, 189, 55, 134, 235, 63, 51, 61, 188, 66, 122, 229, 213, 148, 191, 214, 231, 63, 194, 253, 253, 206, 97, 132, 17, 119, 204, 171, 228, 63, 47, 76, 91, 225, 77, 196, 190, 148, 149, 230, 201, 63, 146, 196, 83, 59, 117, 68, 205, 20, 190, 154, 175, 63, 222, 103, 186, 148, 57, 69, 173, 30, 177, 207, 148, 63, 36, 35, 198, 226, 188, 186, 59, 49, 97, 139, 122, 63, 97, 85, 89, 193, 126, 177, 83, 124, 18, 187, 95, 63, 215, 238, 47, 141, 6, 190, 146, 133, 21, 251, 68, 63, 36, 63, 165, 233, 57, 165, 39, 234, 127, 168, 42, 63, 125, 172, 161, 228, 188, 100, 124, 70, 208, 221, 85, 62, 99, 123, 6, 204, 35, 84, 119, 131, 255, 145, 129, 61, 145, 250, 58, 25, 122, 99, 37, 67, 49, 192, 172, 60, 33, 137, 209, 56, 130, 71, 151, 184, 0, 253, 215, 59, 220, 136, 88, 8, 27, 177, 232, 227, 134, 166, 3, 59, 198, 132, 69, 66, 7, 182, 153, 117, 55, 219, 46, 58, 51, 113, 28, 210, 35, 219, 50, 238, 73, 144, 90, 57, 166, 135, 190, 192, 87, 218, 165, 130, 166, 162, 181, 50, 226, 104, 178, 17, 167, 82, 159, 68, 89, 183, 16, 44, 37, 73, 228, 45, 54, 52, 79, 83, 174, 206, 107, 37, 143, 89, 4, 164, 192, 222, 194, 125, 251, 232, 198, 30, 158, 231, 136, 90, 87, 145, 60, 191, 80, 131, 34, 24, 78, 75, 101, 98, 253, 131, 143, 175, 6, 148, 125, 17, 228, 45, 222, 159, 206, 210, 200, 4, 221, 166, 216, 10, 0, 0, 0, 0, 0};

char unk_4B9068[360] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char byte_4B91D0[1] = {0};

char byte_4B91D1[3] = {0, 0, 0};

char dword_4B91D4[4] = {0, 0, 0, 0};

char byte_4B91D8[1] = {0};

char byte_4B91D9[3] = {0, 0, 0};

char dword_4B91DC[4] = {0, 0, 0, 0};

char dword_4B91E0[4] = {0, 0, 0, 0};

char dword_4B91E4[4] = {0, 0, 0, 0};

char dword_4B91E8[4] = {0, 0, 0, 0};

char dword_4B91EC[4] = {0, 0, 0, 0};

char dword_4B91F0[4] = {0, 0, 0, 0};

char dword_4B91F4[4] = {0, 0, 0, 0};

char dword_4B91F8[4] = {0, 0, 0, 0};

char dword_4B91FC[4] = {0, 0, 0, 0};

char dword_4B9200[4] = {0, 0, 0, 0};

char dword_4B9204[4] = {0, 0, 0, 0};

char dword_4B9208[4] = {0, 0, 0, 0};

char dword_4B920C[4] = {0, 0, 0, 0};

char dword_4B9210[4] = {0, 0, 0, 0};

char dword_4B9214[4] = {0, 0, 0, 0};

char dword_4B9218[4] = {0, 0, 0, 0};

char dword_4B921C[4] = {0, 0, 0, 0};

char dword_4B9220[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char dword_4B9234[4] = {0, 0, 0, 0};

char dword_4B9238[8] = {0, 0, 0, 0, 0, 0, 0, 0};

char dword_4B9240[4] = {0, 0, 0, 0};

char dword_4B9244[4] = {0, 0, 0, 0};

char dword_4B9248[8] = {0, 0, 0, 0, 0, 0, 0, 0};

char unk_4B9250[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char unk_4B9290[64] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char dword_4B92D0[4] = {0, 0, 0, 0};

char dword_4B92D4[4] = {0, 0, 0, 0};

char dword_4B92D8[4] = {0, 0, 0, 0};

char dword_4B92DC[4] = {0, 0, 0, 0};

char dword_4B92E0[4] = {0, 0, 0, 0};

char Size[4] = {0, 0, 0, 0};

char dword_4B92E8[4] = {0, 0, 0, 0};

char word_4B92EC[4] = {0, 0, 0, 0};

char dword_4B92F0[4] = {0, 0, 0, 0};

char word_4B92F4[4] = {0, 0, 0, 0};

char word_4B92F8[2] = {0, 0};

char unk_4B92FA[2] = {0, 0};

char dword_4B92FC[4] = {0, 0, 0, 0};

char unk_4B9300[4] = {0, 0, 0, 0};

char unk_4B9304[2] = {0, 0};

char unk_4B9306[2] = {0, 0};

char dword_4B9308[4] = {0, 0, 0, 0};

char unk_4B930C[4] = {0, 0, 0, 0};

char dword_4B9310[8] = {0, 0, 0, 0, 0, 0, 0, 0};

char word_4B9318[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char dword_4B9324[4] = {0, 0, 0, 0};

char dword_4B9328[32] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char dword_4B9348[24] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char dword_4B9360[4] = {0, 0, 0, 0};

char dword_4B9364[4] = {0, 0, 0, 0};

char dword_4B9368[4] = {0, 0, 0, 0};

char dword_4B936C[4] = {0, 0, 0, 0};

char dword_4B9370[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char dword_4B9380[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char dword_4B9394[4] = {0, 0, 0, 0};

char dword_4B9398[4] = {0, 0, 0, 0};

char Src[4] = {0, 0, 0, 0};

char dword_4B93A0[4] = {0, 0, 0, 0};

char dword_4B93A4[4] = {0, 0, 0, 0};

char dword_4B93A8[4] = {0, 0, 0, 0};

char dword_4B93AC[4] = {0, 0, 0, 0};

char dword_4B93B0[4] = {0, 0, 0, 0};

char byte_4B93B4[56] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char byte_4B93EC[1] = {0};

char byte_4B93ED[1] = {0};

char byte_4B93EE[1] = {0};

char byte_4B93EF[33] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char dword_4B9410[864] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char unk_4B9770[260] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char byte_4B9874[256] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char dword_4B9974[4] = {0, 0, 0, 0};

char dword_4B9978[4] = {0, 0, 0, 0};

char byte_4B997C[4] = {0, 0, 0, 0};

char dword_4B9980[4] = {0, 0, 0, 0};

char byte_4B9984[1] = {0};

char byte_4B9985[1] = {0};

char byte_4B9986[1] = {0};

char byte_4B9987[1] = {0};

char byte_4B9988[8] = {0, 0, 0, 0, 0, 0, 0, 0};

char byte_4B9990[8] = {0, 0, 0, 0, 0, 0, 0, 0};

char byte_4B9998[1] = {0};

char byte_4B9999[1] = {0};

char byte_4B999A[1] = {0};

char byte_4B999B[8] = {0, 0, 0, 0, 0, 0, 0, 0};

char byte_4B99A3[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

char word_4B99AC[28] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char byte_4B99C8[1] = {0};

char byte_4B99C9[1] = {0};

char byte_4B99CA[1] = {0};

char byte_4B99CB[1] = {0};

char byte_4B99CC[1] = {0};

char byte_4B99CD[1] = {0};

char word_4B99CE[17] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char byte_4B99DF[1] = {0};

char byte_4B99E0[4] = {0, 0, 0, 0};

char word_4B99E4[2] = {0, 0};

char byte_4B99E6[1] = {0};

char byte_4B99E7[1] = {0};

char byte_4B99E8[1] = {0};

char byte_4B99E9[3] = {0, 0, 0};

char dword_4B99EC[4] = {0, 0, 0, 0};

char dword_4B99F0[4] = {0, 0, 0, 0};

char dword_4B99F4[4] = {0, 0, 0, 0};

char dword_4B99F8[4] = {0, 0, 0, 0};

char dword_4B99FC[4] = {0, 0, 0, 0};

char dword_4B9A00[4] = {0, 0, 0, 0};

char dword_4B9A04[4] = {0, 0, 0, 0};

char dword_4B9A08[4] = {0, 0, 0, 0};

char dword_4B9A0C[4] = {0, 0, 0, 0};

char dword_4B9A10[4] = {0, 0, 0, 0};

char dword_4B9A14[4] = {0, 0, 0, 0};

char dword_4B9A18[4] = {0, 0, 0, 0};

char dword_4B9A1C[4] = {0, 0, 0, 0};

char dword_4B9A20[4] = {0, 0, 0, 0};

char dword_4B9A24[4] = {0, 0, 0, 0};

char dword_4B9A28[4] = {0, 0, 0, 0};

char dword_4B9A2C[4] = {0, 0, 0, 0};

char dword_4B9A30[4] = {0, 0, 0, 0};

char dword_4B9A34[4] = {0, 0, 0, 0};

char dword_4B9A38[4] = {0, 0, 0, 0};

char dword_4B9A3C[4] = {0, 0, 0, 0};

char dword_4B9A40[4] = {0, 0, 0, 0};

char dword_4B9A44[4] = {0, 0, 0, 0};

char dword_4B9A48[4] = {0, 0, 0, 0};

char dword_4B9A4C[4] = {0, 0, 0, 0};

char dword_4B9A50[4] = {0, 0, 0, 0};

char dword_4B9A54[4] = {0, 0, 0, 0};

char dword_4B9A58[4] = {0, 0, 0, 0};

char dword_4B9A5C[4] = {0, 0, 0, 0};

char dword_4B9A60[4] = {0, 0, 0, 0};

char dword_4B9A64[4] = {0, 0, 0, 0};

char dword_4B9A68[4] = {0, 0, 0, 0};

char dword_4B9A6C[4] = {0, 0, 0, 0};

char dword_4B9A70[4] = {0, 0, 0, 0};

char dword_4B9A74[4] = {0, 0, 0, 0};

char dword_4B9A78[4] = {0, 0, 0, 0};

char dword_4B9A7C[4] = {0, 0, 0, 0};

char dword_4B9A80[4] = {0, 0, 0, 0};

char dword_4B9A84[4] = {0, 0, 0, 0};

char dword_4B9A88[4] = {0, 0, 0, 0};

char dword_4B9A8C[4] = {0, 0, 0, 0};

char dword_4B9A90[4] = {0, 0, 0, 0};

char dword_4B9A94[4] = {0, 0, 0, 0};

char dword_4B9A98[4] = {0, 0, 0, 0};

char dword_4B9A9C[4] = {0, 0, 0, 0};

char dword_4B9AA0[4] = {0, 0, 0, 0};

char dword_4B9AA4[4] = {0, 0, 0, 0};

char dword_4B9AA8[4] = {0, 0, 0, 0};

char dword_4B9AAC[4] = {0, 0, 0, 0};

char dword_4B9AB0[4] = {0, 0, 0, 0};

char dword_4B9AB4[4] = {0, 0, 0, 0};

char dword_4B9AB8[4] = {0, 0, 0, 0};

char dword_4B9ABC[4] = {0, 0, 0, 0};

char dword_4B9AC0[4] = {0, 0, 0, 0};

char dword_4B9AC4[4] = {0, 0, 0, 0};

char dword_4B9AC8[4] = {0, 0, 0, 0};

char dword_4B9ACC[4] = {0, 0, 0, 0};

char dword_4B9AD0[4] = {0, 0, 0, 0};

char dword_4B9AD4[4] = {0, 0, 0, 0};

char dword_4B9AD8[4] = {0, 0, 0, 0};

char dword_4B9ADC[4] = {0, 0, 0, 0};

char dword_4B9AE0[4] = {0, 0, 0, 0};

char dword_4B9AE4[4] = {0, 0, 0, 0};

char dword_4B9AE8[4] = {0, 0, 0, 0};

char dword_4B9AEC[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char dword_4B9AF8[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char dword_4B9B08[8] = {0, 0, 0, 0, 0, 0, 0, 0};

char byte_4B9B10[16408] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char unk_4BDB28[312] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char unk_4BDC60[50532] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char ho[4] = {255, 255, 255, 255};

char hWnd[4] = {255, 255, 255, 255};

char dword_4CA1CC[4] = {255, 255, 255, 255};

char dword_4CA1D0[4] = {255, 255, 255, 255};

char dword_4CA1D4[4] = {255, 255, 255, 255};

char dword_4CA1D8[8] = {255, 255, 255, 255, 255, 255, 255, 255};

char dword_4CA1E0[4] = {255, 255, 255, 255};

char dword_4CA1E4[4] = {255, 255, 255, 255};

char dword_4CA1E8[4] = {255, 255, 255, 255};

char dword_4CA1EC[4] = {255, 255, 255, 255};

char word_4CA1F0[2] = {255, 255};

char word_4CA1F2[2] = {255, 255};

char word_4CA1F4[4] = {255, 255, 255, 255};

char rc[16] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char word_4CA208[8] = {255, 255, 255, 255, 255, 255, 255, 255};

char byte_4CA210[1] = {255};

char byte_4CA211[1] = {255};

char byte_4CA212[2] = {255, 255};

char byte_4CA214[4] = {255, 255, 255, 255};

char byte_4CA218[1] = {255};

char byte_4CA219[1] = {255};

char byte_4CA21A[2] = {255, 255};

char byte_4CA21C[4096] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char word_4CB21C[4] = {255, 255, 255, 255};

char dword_4CB220[4] = {255, 255, 255, 255};

char dword_4CB224[4] = {255, 255, 255, 255};

char dword_4CB228[4] = {255, 255, 255, 255};

char Block[8] = {255, 255, 255, 255, 255, 255, 255, 255};

char dword_4CB234[4] = {255, 255, 255, 255};

char lp[4] = {255, 255, 255, 255};

char dword_4CB23C[4] = {255, 255, 255, 255};

char dword_4CB240[4] = {255, 255, 255, 255};

char dword_4CB244[4] = {255, 255, 255, 255};

char dword_4CB248[4] = {255, 255, 255, 255};

char byte_4CB24C[4] = {255, 255, 255, 255};

char dword_4CB250[4] = {255, 255, 255, 255};

char byte_4CB254[12] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char dbl_4CB260[8] = {255, 255, 255, 255, 255, 255, 255, 255};

char byte_4CB268[4] = {255, 255, 255, 255};

char dword_4CB26C[4] = {255, 255, 255, 255};

char dword_4CB270[8] = {255, 255, 255, 255, 255, 255, 255, 255};

char dword_4CB278[4] = {255, 255, 255, 255};

char dword_4CB27C[4] = {255, 255, 255, 255};

char dword_4CB280[4] = {255, 255, 255, 255};

char dword_4CB284[4] = {255, 255, 255, 255};

char dword_4CB288[4] = {255, 255, 255, 255};

char dword_4CB28C[8] = {255, 255, 255, 255, 255, 255, 255, 255};

char dword_4CB294[16] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char dword_4CB2A4[8] = {255, 255, 255, 255, 255, 255, 255, 255};

char byte_4CB2AC[4] = {255, 255, 255, 255};

char dword_4CB2B0[4] = {255, 255, 255, 255};

char dword_4CB2B4[4] = {255, 255, 255, 255};

char dword_4CB2B8[4] = {255, 255, 255, 255};

char Filename[260] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char dword_4CB3C0[4] = {255, 255, 255, 255};

char dword_4CB3C4[4] = {255, 255, 255, 255};

char lpfn[4] = {255, 255, 255, 255};

char dword_4CB3CC[4] = {255, 255, 255, 255};

char dword_4CB3D0[8] = {255, 255, 255, 255, 255, 255, 255, 255};

char word_4CB3D8[2] = {255, 255};

char byte_4CB3DA[2] = {255, 255};

char unk_4CB3DC[28] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char dword_4CB3F8[4] = {255, 255, 255, 255};

char dword_4CB3FC[4] = {255, 255, 255, 255};

char dword_4CB400[4] = {255, 255, 255, 255};

char dword_4CB404[4] = {255, 255, 255, 255};

char dword_4CB408[4] = {255, 255, 255, 255};

char dword_4CB40C[4] = {255, 255, 255, 255};

char dword_4CB410[4] = {255, 255, 255, 255};

char dword_4CB414[4] = {255, 255, 255, 255};

char dword_4CB418[4] = {255, 255, 255, 255};

char dword_4CB41C[4] = {255, 255, 255, 255};

char dword_4CB420[4] = {255, 255, 255, 255};

char dword_4CB424[4] = {255, 255, 255, 255};

char dword_4CB428[4] = {255, 255, 255, 255};

char dword_4CB42C[8] = {255, 255, 255, 255, 255, 255, 255, 255};

char dword_4CB434[12] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char dword_4CB440[16] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char CodePage[8] = {255, 255, 255, 255, 255, 255, 255, 255};

char dword_4CB458[8] = {255, 255, 255, 255, 255, 255, 255, 255};

char unk_4CB460[12] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char dword_4CB46C[20] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char byte_4CB480[256] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char unk_4CB580[1] = {255};

char byte_4CB581[259] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char Locale[4] = {255, 255, 255, 255};

char dword_4CB688[24] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char unk_4CB6A0[4096] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char Count[4] = {255, 255, 255, 255};

char dword_4CC6A4[4] = {255, 255, 255, 255};

char dword_4CC6A8[4] = {255, 255, 255, 255};

char dword_4CC6AC[4] = {255, 255, 255, 255};

char dword_4CC6B0[4] = {255, 255, 255, 255};

char dword_4CC6B4[4] = {255, 255, 255, 255};

char lpMem[4] = {255, 255, 255, 255};

char hHeap[4] = {255, 255, 255, 255};

char dword_4CC6C0[4] = {255, 255, 255, 255};

char unk_4CC6C4[252] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

char uNumber[4] = {255, 255, 255, 255};

char dword_4CC7C4[4] = {255, 255, 255, 255};

char dword_4CC7C8[4] = {255, 255, 255, 255};

char dword_4CC7CC[4] = {255, 255, 255, 255};

char dword_4CC7D0[4] = {255, 255, 255, 255};

char dword_4CC7D4[4] = {255, 255, 255, 255};
