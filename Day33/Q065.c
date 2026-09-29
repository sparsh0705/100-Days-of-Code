#include <stdio.h>

int binarySearch(const int array[], int size, int target) {
	int left = 0;
	int right = size - 1;

	while (left <= right) {
		int middle = left + (right - left) / 2;
		if (array[middle] == target) {
			return middle;
		}
		if (array[middle] < target) {
			left = middle + 1;
		} else {
			right = middle - 1;
		}
	}
	return -1;
}

int main(void) {
	int size;
	if (scanf("%d", &size) != 1 || size < 0) {
		return 1;
	}

	int values[size > 0 ? size : 1];
	for (int i = 0; i < size; ++i) {
		if (scanf("%d", &values[i]) != 1) {
			return 1;
		}
	}

	int target;
	if (scanf("%d", &target) != 1) {
		return 1;
	}

	int index = binarySearch(values, size, target);
	if (index == -1) {
		printf("Not found\n");
	} else {
		printf("Found at index %d\n", index);
	}
	return 0;
}
