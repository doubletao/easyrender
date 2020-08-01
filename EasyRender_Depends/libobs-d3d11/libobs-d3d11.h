// libobs-d3d11.h : libobs-d3d11 DLL 的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// Clibobsd3d11App
// 有关此类实现的信息，请参阅 libobs-d3d11.cpp
//

class Clibobsd3d11App : public CWinApp
{
public:
	Clibobsd3d11App();

// 重写
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
