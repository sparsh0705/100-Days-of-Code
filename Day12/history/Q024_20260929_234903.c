#include <stdio.h>

int main(void)
{
	int units;
	double bill;

	printf("Enter electricity units consumed: ");
	if (scanf("%d", &units) != 1 || units < 0) {
		printf("Invalid input. Enter a non-negative number of units.\n");
		return 1;
	}

	if (units <= 100) {
		bill = units * 5.0;
	} else if (units <= 200) {
		bill = 100 * 5.0 + (units - 100) * 7.0;
	} else if (units <= 300) {
		bill = 100 * 5.0 + 100 * 7.0 + (units - 200) * 10.0;
	} else {
		bill = 100 * 5.0 + 100 * 7.0 + 100 * 10.0 + (units - 300) * 12.0;
	}

	printf("Electricity bill: Rs. %.2f\n", bill);
	return 0;
}
