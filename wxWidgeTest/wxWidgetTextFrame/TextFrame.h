#pragma once
#ifndef _TEXTFRAME_H
#define _TEXTFRAME_H

class TextFrame : public wxFrame
{
public:
	/**
	* Constructor. Creates a new TextFrame
	*/
	TextFrame(const wxChar *title, int xpos, int ypos, int width, int height);

	/**processes menu File Open*/
	void OnMenuFileOpen(wxCommandEvent &event);
	/**processes menu File Save**/
	void OnMenuFileSave(wxCommandEvent &event);
	/** Processes menu File|Quit */
	void OnMenuFileQuit(wxCommandEvent &event);
	/** Processes menu About|Info */
	void OnMenuHelpAbout(wxCommandEvent &event);

protected:
	DECLARE_EVENT_TABLE();

private:
	wxTextCtrl *m_pTextCtrl;
	wxMenuBar *m_pMenuBar;
	wxMenu *m_pFileMenu;
	wxMenu *m_pHelpMenu;

	/**
	* Destructor
	*/
	~TextFrame();
};

#endif //_TEXTFRAME_H
