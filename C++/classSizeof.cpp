#include <iostream>
using namespace std;

class A{
	//空类占用一个字节
};

class B {
	char ch;
	//成员函数不占用类对象的存储空间，不箮它是静态还是非静态
	void func(){}
};

class C {
	char ch1;//占用一个字节
	char ch2;
	virtual void func(){}
};

class D{
	int in;
	/*
		分配一个字节空间存储指向虚函数	
		不管是一个还是多个虚函数
	*/
	virtual void func() {}
};

int main() {
	A a;
	B b;
	C c;
	D d;
	cout << sizeof(a) << endl; //result=1
	cout << sizeof(b) << endl; //result=1
	////对象c实际上只有6字节有用数据，但是按照上面第二点编译器优化，编译器将此扩展为两个字，即8字节
	cout << sizeof(c) << endl; //result=8 64位系统16
	cout << sizeof(d) << endl; //result=8 64位系统16
	
	/*综上所述：
	一个类中，虚函数、成员函数（包括静态与非静态）和静态数据成员都是不占用类对象的存储空间的。
	对象大小=   vptr(可能不止一个)   +   所有非静态数据成员大小   +   Aligin字节大小（依赖于不同的编译器）*/
	return 0;
}
