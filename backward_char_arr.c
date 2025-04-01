#include <stdio.h>
int main(){
        const int size = 10;
        char arr[size] = {};

        printf("Enter %d characters: ", size);
        for(int i = 0; i<size; ++i){
                scanf(" %c", &arr[i]);
        }
        int left = 0;
        int right = size - 1;
	char tmp = 0;

        while (left < right){
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
                ++left;
                --right;
        }

	printf("Your word backwards is ");
	for (int i = 0; i < size; ++i) {
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;
}
