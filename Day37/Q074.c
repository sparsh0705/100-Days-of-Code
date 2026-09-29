// Find the transpose of a matrix.
#include <stdio.h>

int main(void)
{
	int rows, columns;

	printf("Enter rows and columns: ");
	scanf("%d %d", &rows, &columns);

	int matrix[rows][columns];

	printf("Enter the matrix elements:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	printf("Transpose of the matrix:\n");
	for (int j = 0; j < columns; j++) {
		for (int i = 0; i < rows; i++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
