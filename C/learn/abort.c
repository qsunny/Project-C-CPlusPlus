#include <stdio.h>
#include <stdlib.h>

int main() {
	char* renv = getenv("PATH");	
	printf("======env===%s\n",renv );
	return 0;
}
