/* Reverse a string. */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[1000];

	if (fgets(str, sizeof str, stdin) == NULL) {
		return 0;
	}

	str[strcspn(str, "\n")] = '\0';

	for (size_t left = 0, right = strlen(str) - (strlen(str) > 0); left < right; ++left, --right) {
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
	}

	puts(str);
	return 0;
}
