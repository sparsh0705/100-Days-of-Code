#include <stdio.h>

int main(void)
{
	int number;
	unsigned long long factorial = 1;

	printf("Enter a non-negative integer (0-20): ");
	if (scanf("%d", &number) != 1 || number < 0 || number > 20) {
		printf("Invalid input. Please enter an integer from 0 to 20.\n");
		return 1;
	}

	for (int i = 2; i <= number; ++i) {
		factorial *= (unsigned long long)i;
	}

	printf("%d! = %llu\n", number, factorial);
	return 0;
}
