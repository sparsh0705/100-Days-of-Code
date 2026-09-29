#include <stdio.h>

int main(void)
{
	long long number, original, reversed = 0;

	printf("Enter an integer: ");
	if (scanf("%lld", &number) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	original = number;
	if (number < 0) {
		printf("%lld is not a palindrome.\n", original);
		return 0;
	}

	while (number > 0) {
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}

	if (original == reversed)
		printf("%lld is a palindrome.\n", original);
	else
		printf("%lld is not a palindrome.\n", original);

	return 0;
}
