#include <stdio.h>

int main() {
        const int size = 5;
        int arr1[size] = {};
        int arr2[size] = {};
        int same = 1;

        printf("Enter %d numbers for first array: ", size);
        for(int i = 0; i < size; ++i) {
                scanf("%d", &arr1[i]);
        }

        printf("Enter %d numbers for second array: ", size);
        for(int i = 0; i < size; ++i) {
                scanf("%d", &arr2[i]);
        }

        for(int i = 0; i < size; ++i) {
                if(arr1[i] != arr2[i]) {
                        same = 0;
                        break;
                }
        }

        if(same) {
                printf("YES\n");
        }
        else {
                printf("NO\n");
        }

        return 0;
}
