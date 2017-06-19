WxWidget3.1.0+vs2015编译+HelloWorld
1. 官网下载[wxWidget源码包](https://www.wxwidgets.org/downloads/ "下载wxWidget")
2. 解压,vs2015打开F:\aaron\C++\Wxwidget\wxWidgets-3.1.0\build\msw\wx_vc14.sln
3. 按下列顺序构建:参考https://wiki.wxwidgets.org/Microsoft_Visual_C%2B%2B_Guide 

	`wxjpeg,
	wxpng, 
	wxtiff, 
	wxzlib, 
	wxregex, 
	wxexpat,
	base, 
	net, 
	odbc, 
	core, 
	gl, 
	html, 
	xml, 
	media, 
	qa, 
	adv, 
	dbgrid, 
	xrc, 
	aui,
	richtext`

4. 新建wxWidget测试空项目,参考: https://wiki.wxwidgets.org/Hello_World
5. HelloWorldApp.h
     
    	#ifndef INCLUDED_HELLOWORLDAPP_H
    	#define INCLUDED_HELLOWORLDAPP_H
    	 
    	// The HelloWorldApp class. This class shows a window
    	// containing a statusbar with the text "Hello World"
    	class HelloWorldApp : public wxApp
    	{
    	public:
    		virtual bool OnInit();
    	};
    	 
    	DECLARE_APP(HelloWorldApp)
    	 
    	#endif // INCLUDED_HELLOWORLDAPP_H


	HelloWorldApp.cpp

    	// For compilers that don't support precompilation, include "wx/wx.h"
    	#include "wx/wxprec.h"
    	 
    	#ifndef WX_PRECOMP
    	#	include "wx/wx.h"
    	#endif
    	 
    	#include "HelloWorldApp.h"
    	 
    	IMPLEMENT_APP(HelloWorldApp)
    	 
    	// This is executed upon startup, like 'main()' in non-wxWidgets programs.
    	bool HelloWorldApp::OnInit()
    	{
    		wxFrame *frame = new wxFrame((wxFrame*) NULL, -1, _T("Hello wxWidgets World"));
    		frame->CreateStatusBar();
    		frame->SetStatusText(_T("Hello World"));
    		frame->Show(true);
    		SetTopWindow(frame);
    		return true;
    	}


6 项目属性->C/C++->常规->附加包含目录->F:\aaron\C++\Wxwidget\wxWidgets-3.1.0\include\msvc <br>
	F:\aaron\C++\Wxwidget\wxWidgets-3.1.0\include

7 项目属性->C/C++->预处理器->

    WIN32
    WINVER=0x0500 注意与2015以前版本的区别0x0400
    __WXMSW__
    _WINDOWS
    _UNICODE

8 项目属性->链接器->常规->附加库目录->F:\aaron\C++\Wxwidget\wxWidgets-3.1.0\lib\vc_lib

9 项目属性->链接器->输入->附加依赖项 : 

    wxbase31u.lib
    wxbase31u_net.lib
    wxbase31u_xml.lib
    wxexpat.lib
    wxjpeg.lib
    wxmsw31u_adv.lib
    wxmsw31u_aui.lib
    wxmsw31u_core.lib
    wxmsw31u_gl.lib
    wxmsw31u_html.lib
    wxmsw31u_media.lib
    wxmsw31u_propgrid.lib
    wxmsw31u_qa.lib
    wxmsw31u_richtext.lib
    wxmsw31u_ribbon.lib
    wxmsw31u_stc.lib
    wxmsw31u_webview.lib
    wxmsw31u_xrc.lib
    wxpng.lib
    wxregexu.lib
    wxscintilla.lib
    wxtiff.lib
    wxzlib.lib

