// Find the sum: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
#include <stdio.h>

int main(void)
{
	int n;
	double sum = 0.0;

	printf("Enter the number of terms: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
			sum += 1.0;
		else
			sum += (double)(2 * i - 1) / (2 * i);
	}

	printf("Sum = %.2f\n", sum);
	return 0;
}
