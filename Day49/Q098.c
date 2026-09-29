// Print initials of the given names and the surname in full.
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[200];
	char *word;
	char *surname = NULL;

	if (fgets(name, sizeof name, stdin) == NULL)
		return 0;

	name[strcspn(name, "\n")] = '\0';
	word = strtok(name, " \t");

	while (word != NULL) {
		surname = word;
		word = strtok(NULL, " \t");

		if (word != NULL)
			printf("%c. ", toupper((unsigned char)surname[0]));
	}

	if (surname != NULL)
		printf("%s", surname);

	putchar('\n');
	return 0;
}
