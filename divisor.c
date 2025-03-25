#include <stdio.h>
int main(){
	int i = 0;
	int n = 0;

	printf("Enter your number: ");
	scanf("%d", &n);

	for(int i = 1; i<=n; i++){
		if(n%i==0){
			printf("%d ", i);
		}
	}

	return 0;
}
