
// Image_Process.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CImage_ProcessApp: 
// �йش����ʵ�֣������ Image_Process.cpp
//

class CImage_ProcessApp : public CWinApp
{
public:
	CImage_ProcessApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CImage_ProcessApp theApp;