#include <stdio.h>

int main(void)
{
	int number;

	printf("Enter an integer: ");
	if (scanf("%d", &number) != 1) {
		return 1;
	}

	if (number >= 0) {
		if (number == 0) {
			printf("The number is zero.\n");
		} else {
			printf("The number is positive.\n");
		}
	} else {
		printf("The number is negative.\n");
	}

	return 0;
}
