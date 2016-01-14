#include <stdio.h>

void sayHello();

void sayHello() {
	printf("hello world!\n");
}

int main(int arg,char** args) {
	int i = 1;
	int * iptr=&i;
	void (*sayHelloPtr)() = sayHello;

	printf("*iptr=%p\n",iptr);
	printf("sizeof(iptr)=%d\n",sizeof(iptr));
	printf("*sayHelloPtr=%p\n",*sayHelloPtr);
	printf("sizeof(sayHelloPtr)=%d\n",sizeof(sayHelloPtr));
	printf("&sayHelloPtr=%p\n",&sayHelloPtr);
	(*sayHelloPtr)();
	return 0;
}




