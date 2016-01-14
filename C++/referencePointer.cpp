#include <iostream>
using namespace std;


void test(int *&p){
	int a=1;
	p=&a;
	cout <<p<<"  "<<*p<<endl;
	cout << "&p=" << &p << endl;
}

int main(void) {
	int *p=NULL;
	cout << "&p=" << &p << endl;
	test(p);
	if(NULL!=p) cout <<"指针p不为NULL"<<endl;
//	system("pause");
	return 0;
}
