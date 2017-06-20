#pragma once
#ifndef TEXTEDITORAPP_H
#define TEXTEDITORAPP_H

class TextEditorApp : public wxApp
{
public:
	/** Initialize the application */
	virtual bool OnInit();
};

DECLARE_APP(TextEditorApp)

#endif // TEXTEDITORAPP_H