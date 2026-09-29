// Program to reverse a given number.
#include <stdio.h>

int main(void)
{
	long long number, reversed = 0;

	printf("Enter a number: ");
	scanf("%lld", &number);

	while (number != 0) {
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}

	printf("Reversed number: %lld\n", reversed);
	return 0;
}
