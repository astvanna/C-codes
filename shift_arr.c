#include <stdio.h>

int main() {
	const int size = 6;
	int arr[size] = {};
	
	printf("Enter %d numbers: ", size);
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}

	int larr[size] = {};
	int rarr[size] = {};

	for(int i = 0; i < size; ++i){
		larr[i] = arr[i];
		rarr[i] = arr[i];
	}

	int ltemp = larr[0];
	for(int i = 0; i < size - 1; ++i){
		larr[i] = larr[i + 1];
	}
	larr[size - 1] = ltemp;

	int rtemp = rarr[size - 1];
	for(int i = size - 1; i > 0; --i) {
		rarr[i] = rarr[i - 1];
	}
	rarr[0] = rtemp;

	printf("Left rotation: ");
	for(int i = 0; i < size; ++i) {
		printf("%d ", larr[i]);
	}
	printf("\n");

	printf("Right rotation: ");
	for(int i = 0; i < size; ++i) {
		printf("%d ", rarr[i]);
	}
	printf("\n");

	return 0;
}
