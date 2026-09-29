#include <stdio.h>

int main(void)
{
	int array[100];
	int size;
	int position;

	scanf("%d", &size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &array[i]);
	}

	scanf("%d", &position);

	if (position < 1 || position > size) {
		printf("Invalid position\n");
		return 1;
	}

	for (int i = position - 1; i < size - 1; i++) {
		array[i] = array[i + 1];
	}
	size--;

	for (int i = 0; i < size; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", array[i]);
	}
	printf("\n");

	return 0;
}
