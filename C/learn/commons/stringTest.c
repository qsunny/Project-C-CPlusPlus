#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	char[30] str;
	sscanf(&str,"%31",str);
	printf("%s",str );
}
