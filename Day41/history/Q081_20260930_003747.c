// Count characters in a string without using a built-in length function.
#include <stdio.h>

int main(void)
{
	char text[1000];
	int count = 0;

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL)
		return 1;

	while (text[count] != '\0' && text[count] != '\n')
		count++;

	printf("Number of characters: %d\n", count);
	return 0;
}
