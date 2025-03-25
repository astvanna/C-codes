#include <stdio.h>

int main() {
	int n=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	while (n != 0) {
		int dig = n % 10;
		if (dig != 4 && dig != 7) {
			printf("%d is not a lucky number.\n", n);
			return 0;
		}
		n /= 10;
	}
	printf("It's a lucky number\n");
	return 0;
}
