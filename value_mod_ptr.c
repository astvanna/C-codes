#include <stdio.h>
int main(){
	int a = 0;
	int b = 666;
	printf("a = %d, b = %d\n", a, b);

	int * pa = &a;
	int * pb = &b;

	*pa = *pa + 7;
	*pb = *pb - 69;
	
	printf("Now a = %d, b = %d\n", a, b);
	return 0;
}
