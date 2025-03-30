#include <stdio.h>
int main(){
        const int size = 5;
        int arr[size];
        printf("Enter five numbers: ");
        for (int i = 0; i < size; i++) {
                scanf("%d", &arr[i]);
        }
	int max = arr[0];
        int min = arr[0];
        for(int i = 1; i<size; i++){
                if (arr[i]<min){
                        min = arr[i];
                }else if (arr[i]>max){
			max = arr[i];
		}

        }
	
	int sum = min + max;

	printf("The sum of min and max is %d\n", sum);

        return 0;
}


