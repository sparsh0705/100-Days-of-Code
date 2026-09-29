#include <stdio.h>

int main(void)
{
	double num1, num2, num3;

	printf("Enter three numbers: ");
	if (scanf("%lf %lf %lf", &num1, &num2, &num3) != 3) {
		printf("Invalid input.\n");
		return 1;
	}

	if (num1 >= num2 && num1 >= num3) {
		printf("Largest number: %g\n", num1);
	} else if (num2 >= num1 && num2 >= num3) {
		printf("Largest number: %g\n", num2);
	} else {
		printf("Largest number: %g\n", num3);
	}

	return 0;
}
