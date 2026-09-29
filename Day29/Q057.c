// Find the sum of array elements.
#include <stdio.h>

int main(void)
{
	int n;
	long long sum = 0;

	if (scanf("%d", &n) != 1 || n < 0)
		return 1;

	for (int i = 0; i < n; ++i) {
		int element;
		if (scanf("%d", &element) != 1)
			return 1;
		sum += element;
	}

	printf("%lld\n", sum);
	return 0;
}
