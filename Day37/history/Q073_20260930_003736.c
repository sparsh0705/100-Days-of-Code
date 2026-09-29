// Find the sum of each row of a matrix and store the sums in an array.
#include <stdio.h>

int main(void)
{
	int rows, columns;

	printf("Enter rows and columns: ");
	scanf("%d %d", &rows, &columns);

	int matrix[rows][columns];
	int rowSums[rows];

	printf("Enter matrix elements:\n");
	for (int i = 0; i < rows; i++)
	{
		rowSums[i] = 0;
		for (int j = 0; j < columns; j++)
		{
			scanf("%d", &matrix[i][j]);
			rowSums[i] += matrix[i][j];
		}
	}

	printf("Row sums:\n");
	for (int i = 0; i < rows; i++)
		printf("%d ", rowSums[i]);

	printf("\n");
	return 0;
}
