#include <stdio.h>

int main(void) {
	for (int stars = 5; stars >= 1; --stars) {
		for (int i = 0; i < stars; ++i) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}
