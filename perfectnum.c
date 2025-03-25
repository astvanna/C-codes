#include <stdio.h>

int main(){
	int n = 0; 
	int s = 0;

	printf("Enter a number:");
	scanf("%d", &n);

	for(int i=1; i<n; i++){
		if(n%i==0){
			s+=i;
		}
	}

	if (s== n){
		printf("%d is a perfect number.\n", n);
	}else{
		printf("%d is not a perfect number.\n", n);
	}
	return 0;
}
