#include <stdio.h>

int main() {
	int arr[] = {2, 2, 2, 1, 2};
	int size = sizeof(arr)/sizeof(arr[0]);
	int red_herring = arr[0];

	
	printf("The array: ");
	for (int i = 0; i < size; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	if (red_herring == arr[1]) {
		for (int i = 2; i < size; ++i) {
			if (arr[i] != red_herring) {
				red_herring = arr[i];
				break;
			}
		}
	}
	else {
		if (arr[0] == arr[2]) {
			red_herring = arr[1];
		}
		else {
			red_herring = arr[0];
		}
	}

	printf("The odd one out %d\n", red_herring);
	return 0;
}
