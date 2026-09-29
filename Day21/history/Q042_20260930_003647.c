#include <stdio.h>

int main(void) {
	int number;
	long long divisor_sum = 0;

	printf("Enter a positive integer: ");
	if (scanf("%d", &number) != 1 || number <= 0) {
		printf("Please enter a positive integer.\n");
		return 1;
	}

	for (int divisor = 1; divisor <= number / 2; ++divisor) {
		if (number % divisor == 0) {
			divisor_sum += divisor;
		}
	}

	if (divisor_sum == number) {
		printf("%d is a perfect number.\n", number);
	} else {
		printf("%d is not a perfect number.\n", number);
	}

	return 0;
}
