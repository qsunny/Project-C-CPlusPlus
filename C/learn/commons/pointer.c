#include <stdio.h>

int main() {
	int *ptr;
	int val = 1;
	ptr = &val;
	
	//print out dereferenced values
	printf("dereferenced *ptr= %d\n",*ptr);
	printf("dereferenced address of val*(&val)= %d\n",*(&val));

	int *uninit; // leave the int pointer uninitialized
	int *nullptr = 0; // initialized to 0, could also be NULL
	void *vptr; // declare as a void pointer type
	//int val = 1;
	int *iptr;
	int *backptr;

	// void type can hold any pointer type or reference
	iptr = &val;
	vptr = iptr;
	printf("iptr=%p, vptr=%p\n", (void *)iptr, (void *)vptr);

	// assign void pointer back to an int pointer and dereference
	backptr = vptr;
	printf("*backptr=%d\n", *backptr);

	// print null and uninitialized pointers
	printf("uninit=%p, nullptr=%p\n", (void *)uninit, (void *)nullptr);
	// don't know what you will get back, random garbage?
	 printf("*nullptr=%d\n", nullptr);
	// will cause a segmentation fault
	// printf("*nullptr=%d\n", nullptr);


}
