#include <stdio.h>
int main(){

	int n = 0;

	printf("Enter your number: ");
	scanf("%d", &n);

	if(n&1){
		printf("Your number is odd\n");
	}else{
		printf("Your number is even\n");

	}

return 0;
}
