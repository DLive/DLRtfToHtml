// DLRtfToHtml.h : DLRtfToHtml DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDLRtfToHtmlApp
// �йش���ʵ�ֵ���Ϣ������� DLRtfToHtml.cpp
//

class CDLRtfToHtmlApp : public CWinApp
{
public:
	CDLRtfToHtmlApp();

// ��д
public:
	virtual BOOL InitInstance();

	CString rtfToHtml(CString rtfpath);

	DECLARE_MESSAGE_MAP()
};
