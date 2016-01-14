#include <iostream>
#include <string.h>
using namespace std;

int main(int argc,char **argv) {
	const char str[] = "test string";
	char cstr[40];
	cout << strcpy(cstr,str) << endl;	
	cout << strncpy(cstr,str,sizeof(str)) << endl;	
	cout << strcat(cstr,str) << endl;	
	cout << strlen(cstr) << endl;	
	cout << strcmp(cstr,str) << endl;	
	return 0;
}


