#include <stdio.h>
int main(){
	const int rows = 4;
	const int columns = 4;
	int matrix[rows][columns];
	int row_sum[rows];

	printf("Enter %d elements for each row:\n", columns);
	for(int i = 0; i < rows; i++) {
		printf("Row %d: ", i+1);
		for(int j = 0; j < columns; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	for(int i = 0; i < rows; i++) {
		row_sum[i] = 0;
		for(int j = 0; j < columns; j++) {
			row_sum[i] += matrix[i][j];
		}
	}
	
	printf("\nSum of rows:\n");
	for(int i = 0; i < rows; i++) {
		printf("Sum of row %d is: %d\n", i+1, row_sum[i]);
	}

	return 0;
}
