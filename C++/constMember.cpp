#include <iostream>

using namespace std;

class MyClass {
	public: 
			int x;
			MyClass(int val) : x(val){}
			int get() const {return x;}
};

int main() {

	const MyClass foo(10);
	//foo.x = 40;
	cout << foo.x << '\n';
	cout << foo.get() << '\n';
	return 0;
}



