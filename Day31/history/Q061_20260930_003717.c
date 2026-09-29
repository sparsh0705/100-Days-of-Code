#include <stdio.h>

int main(void)
{
	int count;

	printf("Enter the number of elements: ");
	if (scanf("%d", &count) != 1 || count <= 0) {
		printf("Invalid number of elements.\n");
		return 1;
	}

	int values[count];
	printf("Enter %d integers: ", count);
	for (int i = 0; i < count; ++i) {
		if (scanf("%d", &values[i]) != 1) {
			printf("Invalid input.\n");
			return 1;
		}
	}

	int target;
	printf("Enter the element to search for: ");
	if (scanf("%d", &target) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	for (int i = 0; i < count; ++i) {
		if (values[i] == target) {
			printf("Element found at index %d.\n", i);
			return 0;
		}
	}

	printf("Element not found.\n");
	return 0;
}
