#include <stdio.h>
int main(){

	char q = 0;
	char *ptr = &q;

	printf("%p\n", ptr);
	ptr++;
	printf("%p\n", ptr);
	return 0;

}
