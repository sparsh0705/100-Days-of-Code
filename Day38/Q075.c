// Add two matrices of the same dimensions.
#include <stdio.h>

int main(void)
{
	int rows, columns;

	scanf("%d %d", &rows, &columns);

	int first[rows][columns];
	int second[rows][columns];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &first[i][j]);
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			scanf("%d", &second[i][j]);
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%d", first[i][j] + second[i][j]);
			if (j < columns - 1) {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
