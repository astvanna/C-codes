#include <stdio.h>
int main(){
	const int size = 5;
	int arr[size];
	printf("Enter five numbers: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	for(int i = 1; i<size; i++){
		if (arr[i]>max){
			max = arr[i];
		}
	}
	printf("The maximum alement is %d\n", max);
	
	return 0;
}
