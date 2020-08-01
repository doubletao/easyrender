// w32-pthreads.h : w32-pthreads DLL 的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// Cw32pthreadsApp
// 有关此类实现的信息，请参阅 w32-pthreads.cpp
//

class Cw32pthreadsApp : public CWinApp
{
public:
	Cw32pthreadsApp();

// 重写
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
