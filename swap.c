#include <stdio.h>
int main(){
	int a = 0;
	int b = 0;

	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);

	a = a^b;
	b = a^b;
	a = a^b;

	printf("Now a is %d and b %d\n", a, b);
	return 0;
}

