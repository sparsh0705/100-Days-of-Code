#include <stdio.h>

int main(void)
{
	int n;
	long long sum = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int value;
			scanf("%d", &value);
			if (i == j) {
				sum += value;
			}
		}
	}

	printf("%lld\n", sum);
	return 0;
}
