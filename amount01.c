#include <stdio.h>
int main(){
	int n = 0;
	int countodd = 0;

	printf("Enter your number: ");
	scanf("%d", &n);

	for(int i = 1; i<=32; i++){
		if(n%2 == 1){
		countodd++;	
		}
		n = n/2;
	}
	printf("There are %d 1s in your number", n);
	return 0;
}
