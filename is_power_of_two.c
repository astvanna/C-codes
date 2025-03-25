#include <stdio.h>
int main(){
	int n = 0;
	
	printf("Enter your number: ");
	scanf("%d", &n);

	if(n&(n-1)){
		printf("%d is not a power of two\n", n);
	}else{
	printf("%d is a power of two\n", n);
	}
	return 0;
}
