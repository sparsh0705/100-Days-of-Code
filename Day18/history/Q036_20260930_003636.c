#include <stdio.h>

int main(void)
{
	int a, b;

	printf("Enter two integers: ");
	if (scanf("%d %d", &a, &b) != 2) {
		printf("Invalid input.\n");
		return 1;
	}

	// Euclid's algorithm
	int x = a, y = b;
	while (y != 0) {
		int remainder = x % y;
		x = y;
		y = remainder;
	}

	// The HCF is conventionally nonnegative.
	if (x < 0) {
		x = -x;
	}
	printf("HCF (GCD) = %d\n", x);

	return 0;
}
