#include <stdio.h>

int main(void)
{
	long long n;

	if (scanf("%lld", &n) != 1 || n <= 0)
		return 0;

	long long low = 1;
	long long high = n;
	long long total = n * (n + 1) / 2;

	while (low <= high) {
		long long x = low + (high - low) / 2;
		long long left_sum = x * (x + 1) / 2;
		long long right_sum = total - x * (x - 1) / 2;

		if (left_sum == right_sum) {
			printf("%lld\n", x);
			return 0;
		}

		if (left_sum < right_sum)
			low = x + 1;
		else
			high = x - 1;
	}

	printf("-1\n");
	return 0;
}
