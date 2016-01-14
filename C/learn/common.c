#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
	for(int i=0;i<20;i++) {
		unsigned short seed = 5;
		srand(time(NULL));
		int rnum = rand();
		printf("random num:%d\n",rnum);
	}
	return 0;
}
