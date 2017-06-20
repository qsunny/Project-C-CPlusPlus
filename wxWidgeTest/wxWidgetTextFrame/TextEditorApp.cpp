//reference doc : https://wiki.wxwidgets.org/Using_WxFrame


// For compilers that don't support precompilation, include "wx/wx.h"
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

#include "TextEditorApp.h"
#include "TextFrame.h"

IMPLEMENT_APP(TextEditorApp)

bool TextEditorApp::OnInit()
{
	TextFrame *frame = new TextFrame(
		wxT("Simple Text Editor"), 100, 100, 400, 300);
	frame->Show(TRUE);
	SetTopWindow(frame);
	return true;
}