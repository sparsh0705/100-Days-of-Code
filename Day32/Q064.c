 #include <stdio.h>

int main(void)
{
	long long number;
	int count[10] = {0};

	scanf("%lld", &number);

	if (number == 0)
		count[0] = 1;
	else {
		if (number < 0)
			number = -number;

		while (number > 0) {
			count[number % 10]++;
			number /= 10;
		}
	}

	int mostFrequent = 0;
	for (int digit = 1; digit < 10; digit++) {
		if (count[digit] > count[mostFrequent])
			mostFrequent = digit;
	}

	printf("%d\n", mostFrequent);
	return 0;
}
