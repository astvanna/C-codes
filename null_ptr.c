#include <stdio.h>

int main() {
	int *ptr = NULL;
	
	if (ptr == NULL) {
		printf("NULL\n");
	}

	int a = 7;
	ptr = &a;
	
	if (ptr != NULL) {
		printf("Now its %d\n", *ptr);
	}

	return 0;
}
