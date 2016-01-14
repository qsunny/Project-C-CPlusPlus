#include <iostream>
using namespace std;

int main(int argc,char** argv) {
	const char *a = "C++";
	for(int i=2;i>=0;i--) {
		cout.put(*(a+i));
	}
	cout.put('\n');
	return 0;
}

