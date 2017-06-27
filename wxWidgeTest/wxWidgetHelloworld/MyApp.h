#pragma once
// wxWidgets "Hello world" Program
// For compilers that support precompilation, includes "wx/wx.h".

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif // !WX_PRECOMP

class MyApp:public wxApp
{
public:
	virtual bool OnInit();

private:

};

enum
{
	ID_Hello = 1
};
wxIMPLEMENT_APP(MyApp);

