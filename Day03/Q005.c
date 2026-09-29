#include <stdio.h>

int main(void)
{
	double celsius;
	double fahrenheit;

	printf("Enter temperature in Celsius: ");
	if (scanf("%lf", &celsius) != 1) {
		return 1;
	}

	fahrenheit = celsius * 9.0 / 5.0 + 32.0;
	printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

	return 0;
}
