// DLRtfToHtml.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "DLRtfToHtml.h"

#include "DLrtfhtml.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ������ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//

// CDLRtfToHtmlApp

BEGIN_MESSAGE_MAP(CDLRtfToHtmlApp, CWinApp)
END_MESSAGE_MAP()


// CDLRtfToHtmlApp ����

CDLRtfToHtmlApp::CDLRtfToHtmlApp()
{
	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CDLRtfToHtmlApp ����

CDLRtfToHtmlApp theApp;


// CDLRtfToHtmlApp ��ʼ��

BOOL CDLRtfToHtmlApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
CString CDLRtfToHtmlApp::rtfToHtml(CString rtfpath)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	DLrtfhtml rtf;
	return rtf.beginChange(rtfpath);
}