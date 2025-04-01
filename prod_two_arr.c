#include <stdio.h>
int main(){
	const int size = 10;
	int first_arr[size] = {};
	int second_arr[size] = {};

	printf("First array: Enter 10 numbers: ");
	for(int i = 0; i<size; ++i){
		scanf("%d", &first_arr[i]);
        }

	printf("Second array: Enter 10 numbers: ");
	for(int i = 0; i<size; ++i){
		scanf("%d", &second_arr[i]);
        }
	for(int i = 0; i<size; ++i){
		printf("%d ", first_arr[i]*second_arr[i]);
        }
	printf("\n");
	return 0;
}

