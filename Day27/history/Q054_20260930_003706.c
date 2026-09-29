#include <stdio.h>

int main(void)
{
	for (int stars = 1; stars <= 7; stars += 2) {
		for (int i = 0; i < stars; i++) {
			printf("*");
		}
		printf("\n");
	}

	for (int stars = 5; stars >= 1; stars -= 2) {
		for (int i = 0; i < stars; i++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
