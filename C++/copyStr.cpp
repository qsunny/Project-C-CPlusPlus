#include <iostream>

using namespace std;


int main() {
	char chr[] = "I love China!";
	char str[20];
	char *p1,*p2;
	
	p1 = chr;
	p2 = str;
	for(;*p1!='\\0';p1++,p2++) {
		*p2 = *p1;
	}
	*p2='\\0';
	p1=chr;p2=str;
	cout<<"chr is:"<<p1<<endl;
	cout<<"	str is:"<<p2<<endl;

	return 0;
}
