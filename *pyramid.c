#include <stdio.h>

int main() {
	int n;
	printf("Entera number: ");
	scanf("%d", &n);

	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= n - i; j++){
			printf(" ");
		}

		printf("*");
		
		for (int j = 1; j < 2 * (i - 1); j++){
			printf(" ");
		}
		if (i > 1){
			printf("*");
		}
		
		printf("\n");
	}
	for (int i = 1; i <= n; i++){
		printf("* ");
	}

	printf("\n");

	return 0;
}
