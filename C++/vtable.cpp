#include <iostream>
#include <string.h>
using namespace std;

class A {
	private:
		 double d;
};

class B {
	
	private:
		 double d;

	public:
		void show(){};
};

class C {
	public:
		double d;
	public:
	virtual void f()=0;
	virtual void show()=0;
};

class D : public C {
	public : 
		virtual void f() {
			cout << "D 类 f" <<endl;
		}
		void show() {
			cout << "D类 show方法" << &(this->d) << "  " << this<< endl;
		}
};

class E : public C {
		public : 
		void f() {
			cout << "E 类 f" << endl;
		}
		void show() {
			cout << "E类 show方法"  << &(this->d) << "  " << this << endl;
		}
};

int main(int argc,char** argv){
	A a;
	B b;
	D* d = new D;	
	E* e = new E;	
	//memcpy(e,d,sizeof(e));
	d->show();
	e->show();
	cout << "A sizeof " << sizeof(a) << endl;
	cout << "B sizeof " << sizeof(b) << endl;
	cout << "D sizeof " << sizeof(d) << endl;
	cout << "E sizeof " << sizeof(e) << endl;
	delete d;
	delete e;
	return 0;
}

