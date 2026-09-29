// Insert an element into an array at a given position.
#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
	int array[MAX_SIZE];
	int size, position, value;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	if (size < 0 || size >= MAX_SIZE) {
		printf("Invalid array size.\n");
		return 1;
	}

	printf("Enter %d elements: ", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &array[i]);
	}

	printf("Enter position (1-%d) and value: ", size + 1);
	scanf("%d %d", &position, &value);

	if (position < 1 || position > size + 1) {
		printf("Invalid position.\n");
		return 1;
	}

	for (int i = size; i >= position; i--) {
		array[i] = array[i - 1];
	}
	array[position - 1] = value;
	size++;

	printf("Array after insertion: ");
	for (int i = 0; i < size; i++) {
		printf("%d%s", array[i], i == size - 1 ? "\n" : " ");
	}

	return 0;
}
