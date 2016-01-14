#include <stdio.h>

int main(int argc,char** argv) {
	int a = 1;
	printf("%p",&a);
	*(int*)0x22cb0c = 100;
	printf("%d",a);
	
	int arr[5] = {1,2,3,4,5};
	printf("%d\n",*(*(&arr+1)-1)); // 5
}


