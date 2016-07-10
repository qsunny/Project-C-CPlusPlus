#include <stdio.h>

void add(char* name,int x,int y);

void add(char* name,int x,int y) {
	printf("%s gives: %d\n", name, x + y);
}

int main() {
	void (*add1Ptr)(char*,int,int) = add;
	void (*add2Ptr)(char*,int,int) = &add;
	void (*add3Ptr)(char*,int,int) = *add;
	void (*add4Ptr)(char*,int,int) = **add;
	void (*add5Ptr)(char*,int,int) = ***add;
	void (*add6Ptr)(char*,int,int) = ****add;
	void (*add7Ptr)(char*,int,int) = ******add;


	(*add1Ptr)("add1Ptr",10,2);
  (*add2Ptr)("add2Ptr",10,2);
	(*add3Ptr)("add3Ptr",10,2);
  (*add4Ptr)("add4Ptr",10,2);
  (*add5Ptr)("add5Ptr",10,2);
  (*add6Ptr)("add6Ptr",10,2);
  (*add7Ptr)("add7Ptr",10,2);


}









