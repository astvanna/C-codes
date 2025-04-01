#include <stdio.h>
int main(){
	const int size = 10;
	int arr[size];
	printf("Enter ten numbers: ");
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}
	
	printf("Now your array is: ");
        for(int i = 0; i < size; ++i){
		printf("%d ", arr[i]/size);
	}
	printf("\n");
	return 0;
}
