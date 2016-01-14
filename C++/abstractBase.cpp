#include <iostream>
using namespace std;

class Polygon {
	protected:
		int width,height;
	public:
		void setValues(int a,int b) {
			width=a;
			height =b;
		}
		virtual int area(void)=0;//纯虚函数
};

class Rectangle : public Polygon {
	public:
		int area(void) {
			return width*height;
		}
};

class Triangle:public Polygon {
	public:
		int area(void) {
			return (width*height/2);
		}
	
};

int main() {
	Rectangle rect;
	Triangle trgl;
	Polygon * ppoly1 = &rect;
	Polygon* ppoly2 = &trgl;
	ppoly1->setValues(4,5);
	ppoly2->setValues(4,5);
	cout << ppoly1->area() << '\n';
	cout << ppoly2->area() << '\n';
	return 0;
}



