// Rotate an array to the right by k positions.
#include <stdio.h>
#include <stdlib.h>

static void reverse(int array[], int left, int right)
{
	while (left < right) {
		int temp = array[left];
		array[left++] = array[right];
		array[right--] = temp;
	}
}

int main(void)
{
	int n, k;

	if (scanf("%d", &n) != 1 || n < 0)
		return 1;

	int *array = n > 0 ? malloc((size_t)n * sizeof(*array)) : NULL;
	if (n > 0 && array == NULL)
		return 1;

	for (int i = 0; i < n; ++i)
		scanf("%d", &array[i]);

	if (scanf("%d", &k) != 1)
		k = 0;

	if (n > 0) {
		k %= n;
		if (k < 0)
			k += n;

		reverse(array, 0, n - 1);
		reverse(array, 0, k - 1);
		reverse(array, k, n - 1);
	}

	for (int i = 0; i < n; ++i)
		printf("%d%c", array[i], i == n - 1 ? '\n' : ' ');

	free(array);
	return 0;
}
