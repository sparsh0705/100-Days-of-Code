 #include <stdio.h>

int main(void)
{
	int rows, columns;

	scanf("%d %d", &rows, &columns);

	int matrix[rows][columns];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%d%c", matrix[i][j], j == columns - 1 ? '\n' : ' ');
		}
	}

	return 0;
}
