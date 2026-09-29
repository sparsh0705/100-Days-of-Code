
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rows, cols;
	if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0)
		return 0;

	int *matrix = malloc((size_t)rows * (size_t)cols * sizeof(*matrix));
	if (matrix == NULL)
		return 1;

	for (int i = 0; i < rows * cols; ++i) {
		if (scanf("%d", &matrix[i]) != 1) {
			free(matrix);
			return 0;
		}
	}

	/* Print each anti-diagonal, alternating its direction. */
	for (int sum = 0; sum < rows + cols - 1; ++sum) {
		int first_row = sum < cols ? 0 : sum - cols + 1;
		int last_row = sum < rows ? sum : rows - 1;

		if (sum % 2 == 0) {
			for (int row = last_row; row >= first_row; --row) {
				int col = sum - row;
				printf("%d ", matrix[row * cols + col]);
			}
		} else {
			for (int row = first_row; row <= last_row; ++row) {
				int col = sum - row;
				printf("%d ", matrix[row * cols + col]);
			}
		}
	}

	putchar('\n');
	free(matrix);
	return 0;
}
