
// ffplayvs14dlg.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cffplayvs14dlgApp: 
// �йش����ʵ�֣������ ffplayvs14dlg.cpp
//

class Cffplayvs14dlgApp : public CWinApp
{
public:
	Cffplayvs14dlgApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cffplayvs14dlgApp theApp;