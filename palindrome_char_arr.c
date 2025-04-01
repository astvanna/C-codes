#include <stdio.h>
#include <string.h>
int main(){
        const int size = 4;
        char palindrome[size] = {};

        printf("Enter %d characters: ", size);
        for(int i = 0; i<size; ++i){
                scanf(" %c", &palindrome[i]);
        }
	int left = 0;
	int right = size - 1;
	int is_not_palindrome = 0;

	while (left < right){
		if (palindrome[left] != palindrome[right]){
			is_not_palindrome = 1;
			break;
		}
		++left;
		--right;
	}
	if (is_not_palindrome == 1){
		printf("Is not a palindrome\n");
	}else{
		printf("Is a palindrome\n");
	}

        return 0;
}

