#include <stdio.h>

int main(void)
{
	int rows1, cols1, rows2, cols2;
	int first[10][10], second[10][10], product[10][10] = {0};

	scanf("%d %d", &rows1, &cols1);
	for (int i = 0; i < rows1; i++)
		for (int j = 0; j < cols1; j++)
			scanf("%d", &first[i][j]);

	scanf("%d %d", &rows2, &cols2);
	if (cols1 != rows2 || rows1 > 10 || cols1 > 10 || rows2 > 10 || cols2 > 10)
		return 1;

	for (int i = 0; i < rows2; i++)
		for (int j = 0; j < cols2; j++)
			scanf("%d", &second[i][j]);

	for (int i = 0; i < rows1; i++)
		for (int j = 0; j < cols2; j++)
			for (int k = 0; k < cols1; k++)
				product[i][j] += first[i][k] * second[k][j];

	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols2; j++)
			printf("%d%c", product[i][j], j == cols2 - 1 ? '\n' : ' ');
	}

	return 0;
}
