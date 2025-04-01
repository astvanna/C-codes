#include <stdio.h>

int main() {
	const int size = 10;
	int arr[size] = {};
	int odd_count = 0;

	printf("Enter %d numbers: ", size);
	for(int i = 0; i < size; ++i) {
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < size; ++i) {
		if(arr[i] % 2 != 0) {
			++odd_count;
		}
	}

	printf("Number of odd elements: %d\n", odd_count);

	return 0;
}
