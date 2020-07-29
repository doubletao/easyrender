// EasyRender_CommonBase.h : EasyRender_CommonBase DLL 的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CEasyRender_CommonBaseApp
// 有关此类实现的信息，请参阅 EasyRender_CommonBase.cpp
//

class CEasyRender_CommonBaseApp : public CWinApp
{
public:
	CEasyRender_CommonBaseApp();

// 重写
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
