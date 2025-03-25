#include <stdio.h>
int main(){
	int n = 0;
	int count = 0;

	printf("Enter your number: ");
	scanf("%d", &n);

	while(n != 0){
		if(n&1){
		count++;
		}
		n = n>>1;
	}
	printf("There are %d 1s in your number\n", count);

	if(count&1){
		printf("Count is odd\n");
	}else{
		printf("Count is even\n");
	}

	return 0;
}	
