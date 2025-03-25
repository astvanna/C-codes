#include <stdio.h>
int main(){

	int n = 0;
	int i = 0;
	printf("Enter your number: ");
	scanf("%d", &n);
	printf("Which number do you want to check? ");
	scanf("%d", &i);

	n = n >> (i-1);
	if(n&1){
		printf("is 1\n");
	}else{
		printf("is 0\n");
	}
	return 0;
}
