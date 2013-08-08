#include <iostream>
#include <vector>
using namespace std;

struct Test{
	Test(){}
	Test(Test& other){
		cout<< "Copy constructor "<<endl;
	}
};

//函数以类为参数，会调用Test的拷贝构造函数
void TestFunc(Test test){}

//函数返回类的对象，会调用拷贝构造函数
Test TestFunc1(){
	Test t;
	return t;
}

int main(){
	Test t;
	TestFunc(t);
	//TestFunc1();
	//以一个对象初始化另外一个对象，会调用拷贝构造函数
	Test t1(t);
	
	//vector<Test> v(3);
	return 0;
}
