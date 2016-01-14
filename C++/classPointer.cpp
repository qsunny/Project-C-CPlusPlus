#include <iostream>

using namespace std;

class Time {
	public :
		Time(int,int,int);
		int hour;
		int minute;
		int sec;
		void getTime();
};

Time::Time(int h,int m,int s) {
	hour = h;
	minute = m;
	sec = s;
}

void Time::getTime() {
	cout << hour << ":"<< minute << ":" << sec << endl;
}

int main(int argc,char** argv) {
	Time t1(10,13,54);
	int *p1=&t1.hour;
	cout << *p1 << endl;	
	t1.getTime();
	Time *p2 = &t1;
	p2->getTime();
	void (Time::*p3)();
	p3 = &Time::getTime;
	(t1.*p3)();	
	return 0;
}





