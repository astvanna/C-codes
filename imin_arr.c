#include <stdio.h>
int main(){
        const int size = 5;
        int arr[size];
        printf("Enter five numbers: ");
        for (int i = 0; i < size; i++) {
                scanf("%d", &arr[i]);
        }

        int min = arr[0];
	int imin = 0;
        for(int i = 1; i<size; i++){
                if (arr[i]<min){
                        min = arr[i];
			imin = i;
                }
        }
        printf("The index of the minimum alement is %d\n", imin);

        return 0;
}


