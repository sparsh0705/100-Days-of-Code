#include <stdio.h>

int main(void)
{
	char text[1000];

	if (fgets(text, sizeof(text), stdin) == NULL)
		return 0;

	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] >= 'a' && text[i] <= 'z')
			text[i] -= 'a' - 'A';
	}

	printf("%s", text);
	return 0;
}
