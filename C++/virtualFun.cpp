#include <iostream>

using namespace std;

class base {
	public : 
	virtual void fun1(){cout<<"base fun1"<<endl;}
	virtual void fun2(){cout<<"base fun2"<<endl;}
	virtual void fun3(){cout<<"base fun3"<<endl;}

};

typedef void(*Fun)(void);

int main() {
	base b;
	Fun pFun = NULL;
	cout<<"虚函数表地址:"<<(int *)(&b)<<endl;
	cout<<"虚函数表--第一个函数地址:"<<(int*)*(int *)(&b)<<endl;
	pFun = (Fun)*((int*)*(int*)(&b)+1);
	pFun();
	return 0;
}
