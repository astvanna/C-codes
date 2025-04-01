#include <stdio.h>

int main() {
        const int size = 10;
        int arr[size] = {};
        int left = 0;
        int right = size - 1;

        printf("Enter %d numbers: ", size);
        for(int i = 0; i < size; ++i) {
                scanf("%d", &arr[i]);
        }

        while(left < right) {
                while(arr[left] % 2 == 0 && left < right) {
                        ++left;
                }
                while(arr[right] % 2 != 0 && left < right) {
                        --right;
                }
                if(left < right) {
                        int temp = arr[left];
                        arr[left] = arr[right];
                        arr[right] = temp;
                        ++left;
                        --right;
                }
        }

        printf("New array: ");
        for(int i = 0; i < size; ++i) {
                printf("%d ", arr[i]);
        }
        printf("\n");

        return 0;
}
