#include <stdio.h>
int main(){
        const int size = 5;
        int arr[size];
        printf("Enter five numbers: ");
        for (int i = 0; i < size; i++) {
                scanf("%d", &arr[i]);
        }

        int max = arr[0];
	int imax = 0;
        for(int i = 1; i<size; i++){
                if (arr[i]>max){
                        max = arr[i];
			imax = i;
                }
        }
        printf("The index of the maximum alement is %d\n", imax);

        return 0;
}

