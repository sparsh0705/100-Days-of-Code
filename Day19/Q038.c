/* Find the sum of the digits of a number. */
#include <stdio.h>

int main(void)
{
	long long number;
	long long sum = 0;

	printf("Enter a number: ");
	if (scanf("%lld", &number) != 1)
		return 1;

	if (number < 0)
		number = -number;

	do
	{
		sum += number % 10;
		number /= 10;
	} while (number != 0);

	printf("Sum of digits = %lld\n", sum);
	return 0;
}
