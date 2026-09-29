/* Find the first repeating lowercase alphabet in a string. */
#include <stdio.h>

int main(void)
{
	char string[1000];
	int seen[26] = {0};

	if (fgets(string, sizeof string, stdin) == NULL)
		return 0;

	for (int i = 0; string[i] != '\0'; ++i) {
		if (string[i] >= 'a' && string[i] <= 'z') {
			int index = string[i] - 'a';

			if (seen[index]) {
				printf("%c\n", string[i]);
				return 0;
			}
			seen[index] = 1;
		}
	}

	printf("No repeating lowercase alphabet\n");
	return 0;
}
