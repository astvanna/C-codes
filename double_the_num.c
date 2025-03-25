#include <stdio.h>
int main(){
	int n = 0;

	printf("Enter the number: ");
	scanf("%d", &n);

	n=n<<1;
	printf("%d I doubled your number\n", n);
	return 0;

}
