// json11.h : json11 DLL 的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// Cjson11App
// 有关此类实现的信息，请参阅 json11.cpp
//

class Cjson11App : public CWinApp
{
public:
	Cjson11App();

// 重写
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
