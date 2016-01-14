#include <iostream>
#include <string>
using namespace std;

int main(int argc,char** argv) {
	
	char str[] = "C++ string test";
	cout << str << endl;
	const char *pstr = "C++ char pointer string test";
	cout << pstr << endl;
	string str2 = "C++ string defined!";
	cout << str2 << endl;
	return 0;

}
