#include <stdio.h>

int main(void)
{
	int number;
	printf("Enter a number: ");
	if (scanf("%d", &number) != 1 || number < 0) {
		printf("Please enter a non-negative integer.\n");
		return 1;
	}

	int original = number;
	int sum = 0;

	do {
		int digit = number % 10;
		int factorial = 1;
		for (int i = 2; i <= digit; i++) {
			factorial *= i;
		}
		sum += factorial;
		number /= 10;
	} while (number > 0);

	if (sum == original) {
		printf("%d is a strong number.\n", original);
	} else {
		printf("%d is not a strong number.\n", original);
	}

	return 0;
}
