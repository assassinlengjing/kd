#pragma once
#include <cstdint>
#include "kd.h"
#include "stdbool.h"

#ifdef LOWORD
#undef LOWORD   //取消宏定义
#endif
#include "defs.h"

/*
	//测试 LOBYTE、HIBYTE
	typedef unsigned char	TBYTE;
	typedef unsigned char   uint8;
	typedef unsigned short   uint16;
	typedef unsigned long DWORD_PTR;
	#define BYTE  uint8
	#define WORD  uint16
	#define DWORD unsigned long
	#define LOBYTE(w)          (*((BYTE*)&(w)))
	#define HIBYTE(w)          (*((BYTE*)&(w) + sizeof(BYTE)))
	#define BYTEn(x, n)   (*((BYTE*)&(x)+n))
	#define WORDn(x, n)   (*((WORD*)&(x)+n))
	#define BYTE0(x)   BYTEn(x,  0)         // byte 0 (counting from 0)  添加此宏定义
	#define BYTE1(x)   BYTEn(x,  1)         // byte 1 (counting from 0)
	#define BYTE2(x)   BYTEn(x,  2)
	#define BYTE3(x)   BYTEn(x,  3)
	#define BYTE4(x)   BYTEn(x,  4)
	typedef unsigned long       _DWORD;
	typedef unsigned long       DWORD;
	typedef unsigned long       dword;
	typedef unsigned char       BYTE;
	typedef unsigned char       _BYTE;
	//#define _BYTE	unsigned char
	typedef unsigned short      _WORD;
	typedef unsigned short      WORD;

	typedef unsigned int		dd;
	typedef unsigned char		db;
	typedef unsigned short		dw;

	typedef double				dq;

	typedef TBYTE			_TBYTE;
	typedef unsigned long long			__int128;
	typedef void			_PVFV;
	typedef char			CHAR;
	//#define _BYTE	unsigned char

	typedef struct CPPEH_RECORD //目前不能确定该结构体的成员
	{
		int a;
	};

	*/


	//测试 LOBYTE、HIBYTE
#define TBYTE char
#define uint8 char
#define uint16 short
#define DWORD_PTR long
//#define BYTE  char
#define WORD  short
#define DWORD short
#define LOBYTE(w)          (*((BYTE*)&(w)))
#define LOWORD(w)          (*((BYTE*)&(w))) //？？？和上面重复了
#define HIBYTE(w)          (*((BYTE*)&(w) + sizeof(BYTE)))
#define BYTEn(x, n)   (*((BYTE*)&(x)+n))
#define WORDn(x, n)   (*((WORD*)&(x)+n))
#define BYTE0(x)   BYTEn(x,  0)         // byte 0 (counting from 0)  添加此宏定义
#define BYTE1(x)   BYTEn(x,  1)         // byte 1 (counting from 0)
#define BYTE2(x)   BYTEn(x,  2)
#define BYTE3(x)   BYTEn(x,  3)
#define BYTE4(x)   BYTEn(x,  4)

#define DWORDEn(x, n)   (*((DWORD*)&(x)+n))
#define DWORD0(x)   DWORDEn(x,  0)         // byte 0 (counting from 0)  添加此宏定义
#define DWORD1(x)   DWORDEn(x,  1)         // byte 1 (counting from 0)
#define DWORD2(x)   DWORDEn(x,  2)
#define DWORD3(x)   DWORDEn(x,  3)
#define DWORD4(x)   DWORDEn(x,  4)

#define _DWORD int
#define DWORD  long
#define dword int
//#define BYTE char
#define _BYTE char
#define _WORD short
#define WORD short
#define _QWORD long
#define _OWORD long long //其实这里错误的，应该要128位才对，但c没有。？？？

#define dd  int
//#define db short
#define db char
#define dw short
#define dt double		//实际为10字节类型 ？？？可能需要修改

#define dq double

#define _TBYTE TBYTE
#define __int128 long
//#define _PVFV void
#define _PVFV void*
#define CHAR char


/*
typedef struct CPPEH_RECORD //目前不能确定该结构体的成员
{
	int a;
};
*/


struct PMD
{
	int pdisp;
	int mdisp;
	int vdisp;
};