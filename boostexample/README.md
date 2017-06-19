1. 官网下载boost源码
2. 解压添加脚本build_boost_1_64_vs2015.bat
	     call "%VS140COMNTOOLS%..\..\VC\vcvarsall.bat" x86
    	 
    	cd boost_1_64_0
    	call bootstrap.bat
    	 
    	rem Most libraries can be static libs
    	b2 -j8 toolset=msvc-14.0 address-model=64 architecture=x86 link=static threading=multi runtime-link=shared --build-type=minimal stage --stagedir=stage/x64
    	b2 -j8 toolset=msvc-14.0 address-model=32 architecture=x86 link=static threading=multi runtime-link=shared --build-type=minimal stage --stagedir=stage/win32
    	 
    	pause

3 以管理员身份运行
4 新增一个window32 console项目
5 设置项目属性->C/C++->附加包含目录->F:\aaron\C++\boost_1_64_0
6 项目属性->链接器->附加库目录->F:\aaron\C++\boost_1_64_0\stage\lib
7 build -> run