// Find the product of all odd digits in a number.
#include <stdio.h>

int main(void)
{
	long long number;
	long long product = 1;
	int found = 0;

	printf("Enter a number: ");
	scanf("%lld", &number);

	if (number < 0)
		number = -number;

	if (number == 0)
		product = 0;

	while (number > 0)
	{
		int digit = number % 10;

		if (digit % 2 != 0)
		{
			product *= digit;
			found = 1;
		}

		number /= 10;
	}

	if (!found && product != 0)
		product = 0;

	printf("Product of odd digits: %lld\n", product);
	return 0;
}
