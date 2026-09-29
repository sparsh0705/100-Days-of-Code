#include <stdio.h>

int main(void)
{
	long long totalSeconds;
	long long hours;
	long long minutes;
	long long seconds;

	printf("Enter time in seconds: ");
	if (scanf("%lld", &totalSeconds) != 1 || totalSeconds < 0) {
		printf("Please enter a non-negative whole number of seconds.\n");
		return 1;
	}

	hours = totalSeconds / 3600;
	minutes = (totalSeconds % 3600) / 60;
	seconds = totalSeconds % 60;

	printf("%02lld:%02lld:%02lld\n", hours, minutes, seconds);
	return 0;
}
