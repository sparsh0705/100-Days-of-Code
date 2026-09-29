#include <stdio.h>

int main(void)
{
	long long number, original, remaining, sum = 0;
	int digits = 0;

	printf("Enter a non-negative integer: ");
	if (scanf("%lld", &number) != 1 || number < 0) {
		printf("Invalid input.\n");
		return 1;
	}

	original = number;
	remaining = number;

	do {
		digits++;
		remaining /= 10;
	} while (remaining != 0);

	remaining = number;
	do {
		int digit = (int)(remaining % 10);
		long long power = 1;

		for (int i = 0; i < digits; i++) {
			power *= digit;
		}
		sum += power;
		remaining /= 10;
	} while (remaining != 0);

	if (sum == original) {
		printf("%lld is an Armstrong number.\n", original);
	} else {
		printf("%lld is not an Armstrong number.\n", original);
	}

	return 0;
}
