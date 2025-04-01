#include <stdio.h>

int main() {
	int arr[] = {1, 5, 6, 4, 3, 8, 9, 7, 10};
	int size = sizeof(arr)/sizeof(arr[0]);
	int xor_sum = 0;

	for (int i = 0; i < size; ++i) {
		xor_sum = xor_sum ^ arr[i];
	}
	for (int i = 1; i <= size + 1; ++i) {
		xor_sum = xor_sum ^ i;
	}

	printf("Missing element  %d\n", xor_sum);
	return 0;
}
