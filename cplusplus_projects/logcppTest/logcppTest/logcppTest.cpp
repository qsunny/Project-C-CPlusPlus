// logcppTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <log4cplus/loggingmacros.h>
#include <log4cplus/logger.h>
#include <log4cplus/configurator.h>  
#include <log4cplus/consoleappender.h>
#include <log4cplus/layout.h>
#include <log4cplus/configurator.h>
#include <log4cplus/helpers/stringhelper.h>
#include <log4cplus/loggingmacros.h>
#include <iostream>
#include <string>

#include <iomanip>  

using namespace std;
using namespace log4cplus;  
using namespace log4cplus::helpers; 
using namespace log4cplus::thread;

static Logger logger = Logger::getInstance(LOG4CPLUS_TEXT("log"));
void printDebug()
{
	LOG4CPLUS_TRACE_METHOD(logger, LOG4CPLUS_TEXT("::printDebug()"));
	LOG4CPLUS_DEBUG(logger, "This is a DEBUG message");
	LOG4CPLUS_INFO(logger, "This is a INFO message");
	LOG4CPLUS_WARN(logger, "This is a WARN message");
	LOG4CPLUS_ERROR(logger, "This is a ERROR message");
	LOG4CPLUS_FATAL(logger, "This is a FATAL message");
}

int _tmain(int argc, _TCHAR* argv[])
{
	//BasicConfigurator config;  
	//config.configure();  
	//Logger logger = Logger::getRoot();   
	PropertyConfigurator::doConfigure(_T("log4cpp.properties"));   

	 printDebug();

	LOG4CPLUS_DEBUG(logger, "This is a DEBUG message");           
	LOG4CPLUS_INFO(logger, "This is a INFO message");           
	LOG4CPLUS_WARN(logger, "This is a WARN message");           
	LOG4CPLUS_ERROR(logger, "This is a ERROR message");           
	LOG4CPLUS_FATAL(logger, "This is a FATAL message"); 

	//Logger logger = Logger::getInstance("main");  
	LOG4CPLUS_WARN(logger, "Hello, World!"); 
	LOG4CPLUS_DEBUG(logger,"Hello log4cplus");
	LOG4CPLUS_INFO(logger,"Hello log4cplus");
	LOG4CPLUS_ERROR(logger,"Hello,log4cplus");

	return 0;  
}

