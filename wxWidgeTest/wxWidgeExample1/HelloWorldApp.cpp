// For compilers that don't support precompilation, include "wx/wx.h"
//�ο�: https://wiki.wxwidgets.org/Hello_World
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#	include "wx/wx.h"
#endif

#include "HelloWorldApp.h"

IMPLEMENT_APP(HelloWorldApp)

// This is executed upon startup, like 'main()' in non-wxWidgets programs.
bool HelloWorldApp::OnInit()
{
	wxFrame *frame = new wxFrame((wxFrame*)NULL, -1, _T("Hello wxWidgets World"));
	frame->CreateStatusBar();
	frame->SetStatusText(_T("Hello World"));
	frame->Show(true);
	SetTopWindow(frame);

	//wxGetApp��ȡӦ�����ö����ȫ�ֺ���
	HelloWorldApp& app = ::wxGetApp();
	app.SetVendorName(_T("Aaron.Qiu"));
	//return false����ʹӦ���˳�
	return true;
}