/*
 * Program to read and print a one-dimensional integer array.
 */
#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	int array[n];

	printf("Enter %d elements:\n", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	printf("Array elements: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}
