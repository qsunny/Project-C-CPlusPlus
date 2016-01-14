#include <stdio.h>

static int pow2gt (int x) { --x;  x|=x>>1;  x|=x>>2;  x|=x>>4;  x|=x>>8;  x|=x>>16; return x+1; }

int main(int argc,char** argv) {
	int r = pow2gt(1);
	/*
		00000000  00000000 00000000 00000010

	*/
	for(int i=1;i<100;i++) {
	printf("index=%d,r=%d\n",i,pow2gt(i));
	}

}


