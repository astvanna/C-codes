#include <stdio.h>
int main(){
	int a = 7;
	int b = 13;
	int *tmp = &a;

	printf("a = %d, b = %d\n", a, b);

	int cup = *tmp;
	*tmp = b;
	b = cup;

	printf("Now a = %d, b = %d\n", a, b);

	return 0;
}
