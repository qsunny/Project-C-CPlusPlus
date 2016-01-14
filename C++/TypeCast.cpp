#include <iostream>
#include <stdio.h>
using namespace std;

class A {
	public : 
		int m_a;
};

class B {
	public : 
		int m_b;
};

class C : public A,public B{};

int main(int argc,char* argv[]) {
	C c;
	printf("%p,%p,%p\n",&c,reinterpret_cast<B*>(&c),static_cast<B*>(&c));
}
