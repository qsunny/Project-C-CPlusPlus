#include <stdio.h>

void main(){
	int a = 8;
	int *pr;
	pr = &a;
	*pr = 9;
	printf("pr=%p\n",pr);
	printf("a=%d\n",a);
	printf("*&pr=%p\n",*&pr);
	printf("&pr=%p\n",&pr);
	//printf("**pr=%p\n",**pr);
}
