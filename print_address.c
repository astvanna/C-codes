#include <stdio.h>
int main(){
	int q = 7;
	int *ptr = &q;

	printf("%p\n", &q);
	printf("%p\n", ptr);
	printf("%d\n", *ptr);
	return 0;
}
