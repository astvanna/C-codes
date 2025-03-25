#include <stdio.h>
	int main() {
	int num = 0;
	int mask = 0; 
	int i = 0; 
	int res = 0;
	
	printf("Enter your number: ");
	scanf("%d", &num);
	printf("Enter mask: ");
	scanf("%d", &mask);
	printf("Enter the number of shifts: ");
	scanf("%d", &i);
	
	mask = mask << i;
	res = num & mask;
	
	printf("Result: %d\n", res);
	return 0;
}
