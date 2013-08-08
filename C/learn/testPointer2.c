#include <stdio.h>

void fun1() {
	int f1=1;
	printf("fun1\n");
}

void fun2() {
	int f2=2;
	printf("fun2\n");
}

void fun3() {
}

void main() {
#ifdef _DEBUG
	printf("sizeof(fun1)==%d\n",*(int *)((int)fun2+1)-*(int *)((int)fun1+1));
	printf("sizeof(fun2)==%d\n",*(int *)((int)fun3+1)-*(int *)((int)fun2+1));
	//sizeof(fun1)==59
	//size(fun2)==43
#else
	printf("sizeof(fun1)==%d\n",(int)fun2-(int)fun1);
	printf("sizeof(fun2)==%d\n",(int)fun3-(int)fun2);
	//sizeof(fun1)==32
	//sizeof(fun2)==16
#endif
}
