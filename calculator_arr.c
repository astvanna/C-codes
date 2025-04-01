#include <stdio.h>
int main(){
	const int size = 10;
	int arr[size] = {};
	printf("Enter 10 numbers: ");
	for(int i = 0; i<size; ++i){
		scanf("%d", &arr[i]);
	}
	
	int sum = 0;
	int prod = 1;
	for(int i = 0; i<size; ++i){
		sum = sum + arr[i];
		prod = prod * arr[i];
	}
	
	printf("Sum is %d and product is %d\n", sum, prod);
	return 0;
}
