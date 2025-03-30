#include <stdio.h>
int main(){
        const int rows = 4;
        const int columns = 4;
        int matrix[rows][columns];
        int sum = 0;

        printf("Enter %d elements for each row:\n", columns);
        for(int i = 0; i < rows; i++) {
                printf("Row %d: ", i+1);
                for(int j = 0; j < columns; j++) {
                        scanf("%d", &matrix[i][j]);
                }
        }

        for(int i = 0; i < rows; i++) {
		sum += matrix[i][i];
	}
        printf("Sum of the main diagonal is: %d\n", sum);

        return 0;
}
