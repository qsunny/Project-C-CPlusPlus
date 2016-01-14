#include <stdio.h>

int main(int argc,char** argv) {

	long i =-1;
	printf("sizeof(i)=%d\n",sizeof(i));

	if(i < sizeof(i)) {
		printf("OK\n");
	} else {
		printf("error\n");
	}

	printf("sizeof(i)=%d\n",sizeof(i));
	printf("i=%d\n",i);

	return 0;
}
