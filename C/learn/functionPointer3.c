#include <stdio.h>

int main(int argc,char* argv[]) {
	int (*pf)()=main;
	printf("argc=%d\n",argc);	
	printf("*pf=%p\n",*pf);	
	if(argc>0) pf();
	return 0;
}
