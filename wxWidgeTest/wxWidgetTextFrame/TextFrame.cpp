// For compilers that don't support precompilation, include "wx/wx.h";
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif
#include "TextFrame.h"

TextFrame::TextFrame(const wxChar *title, int xpos, int ypos, int width, int height)
	: wxFrame((wxFrame *)NULL, -1, title, wxPoint(xpos, ypos), wxSize(width, height))
{
	m_pTextCtrl = new wxTextCtrl(this, -1, wxT("input some text..."), wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE);

	//Layout();
	m_pMenuBar = new wxMenuBar();
	//File Menu
	m_pFileMenu = new wxMenu();
	m_pFileMenu->Append(wxID_OPEN,_T("&Open"), _T("Opens an existing file"));
	m_pFileMenu->Append(wxID_SAVE, _T("&Save"), _T("Save the content"));
	m_pFileMenu->AppendSeparator();
	m_pFileMenu->Append(wxID_EXIT, _T("&Quit"), _T("Quit the application"));
	m_pMenuBar->Append(m_pFileMenu, _T("&File"));
	//About Menu
	m_pHelpMenu = new wxMenu();
	m_pHelpMenu->Append(wxID_ABOUT, _T("&About"), _T("Shows information about the application"));
	m_pMenuBar->Append(m_pHelpMenu, _T("&Info"));
	SetMenuBar(m_pMenuBar);

	//创建带三个列状态栏
	CreateStatusBar(3);
	//第一列设置Ready
	SetStatusText(wxT("Ready"), 0);

}

// If you're doing an application by inheriting from wxApp
// be sure to change wxFrame to wxApp (or whatever component
// you've inherited your class from).
BEGIN_EVENT_TABLE(TextFrame, wxFrame)
	EVT_MENU(wxID_OPEN, TextFrame::OnMenuFileOpen)
	EVT_MENU(wxID_SAVE,TextFrame::OnMenuFileSave)
	EVT_MENU(wxID_EXIT, TextFrame::OnMenuFileQuit)
	EVT_MENU(wxID_ABOUT, TextFrame::OnMenuHelpAbout)
END_EVENT_TABLE()

void TextFrame::OnMenuFileOpen(wxCommandEvent &event) {
	wxFileDialog *openDialog = new wxFileDialog(this, _T("Choose a file"), _(""), _(""), _("*.*"), wxFD_OPEN);
	if (openDialog->ShowModal() == wxID_OK) {
		m_pTextCtrl->LoadFile(openDialog->GetPath()) ? SetStatusText(wxT("Loaded")) : SetStatusText(_T("Loaded Failed"));
	}
	
	openDialog->Close(); // Or OpenDialog->Destroy() ?

}

void TextFrame::OnMenuFileSave(wxCommandEvent &event) {
	wxFileDialog *saveDialog = new wxFileDialog(this, _T("Choose a file"), _(""), _(""), _("*.*"), wxFD_SAVE);
	if (saveDialog->ShowModal() == wxID_OK) {
		//TODO 需要把内容写入打开的文件进行保存
		//m_pTextCtrl->GetLineText();
		
		m_pTextCtrl->SaveFile(saveDialog->GetPath()) ? SetStatusText(_("Saved")) : SetStatusText(_T("Save Failed"));
	}

	saveDialog->Close();
}


void TextFrame::OnMenuFileQuit(wxCommandEvent &event)
{
	Close(false);
}

void TextFrame::OnMenuHelpAbout(wxCommandEvent &event)
{
	wxLogMessage(_T("The Simple Text Editor"));
}

TextFrame::~TextFrame()
{
}
