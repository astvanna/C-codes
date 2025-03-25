#include <stdio.h>
int main(){
	int n = 0;
	int i = 0;

	printf("Enter your number: ");
	scanf("%d", &n);
	printf("Enter your index: ");
	scanf("%d", &i);

	n = n|1<<(i-1);
	printf("%d\n", n);

	return 0;
}
