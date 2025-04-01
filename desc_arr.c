#include <stdio.h>

int main() {
	const int size = 10;
	int arr[size] = {};
	int desc = 1;

	printf("Enter %d numbers: ", size);
	for(int i = 0; i < size; ++i) {
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < size - 1; ++i) {
		if(arr[i] < arr[i + 1]) {
			desc = 0;
			break;
		}
	}

	if(desc) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return 0;
}
