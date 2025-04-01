#include <stdio.h>

int main() {
	const int size = 10;
	char letters[size] = {};

	printf("Enter a %d letter word: ", size);

	for(int i = 0; i < size; ++i) {
		scanf(" %c", &letters[i]);
	}

	for(int i = 0; i < size; ++i) {
		if(letters[i] >= 'a' && letters[i] <= 'z') {
			letters[i] = letters[i] - 32;
		}
	}

	printf("Uppercase letters: ");
	for(int i = 0; i < size; ++i) {
		printf("%c", letters[i]);
	}
	printf("\n");

	return 0;
}
