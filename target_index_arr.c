#include <stdio.h>

int main() {
	const int size = 10;
	int arr[size] = {};
	int target = 0;
	int index = -1;

	printf("Enter %d numbers for array: ", size);
	for(int i = 0; i < size; ++i) {
		scanf("%d", &arr[i]);
	}

	printf("Enter the target number: ");
	scanf("%d", &target);

	for(int i = 0; i < size; ++i) {
		if(arr[i] == target) {
			index = i;
			break;
		}
	}

	printf("%d\n", index);

	return 0;
}
