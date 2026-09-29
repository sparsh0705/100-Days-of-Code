/* Count spaces, digits, and special characters in a string. */
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char string[1000];
	int spaces = 0;
	int digits = 0;
	int specialCharacters = 0;

	printf("Enter a string: ");
	if (fgets(string, sizeof string, stdin) == NULL)
		return 1;

	for (int i = 0; string[i] != '\0'; ++i) {
		unsigned char character = (unsigned char)string[i];

		if (character == ' ') {
			++spaces;
		} else if (isdigit(character)) {
			++digits;
		} else if (!isalnum(character) && character != '\n') {
			++specialCharacters;
		}
	}

	printf("Spaces: %d\n", spaces);
	printf("Digits: %d\n", digits);
	printf("Special characters: %d\n", specialCharacters);

	return 0;
}
