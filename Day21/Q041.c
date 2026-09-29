#include <stdio.h>
#include <string.h>

int main(void)
{
	char number[128];

	if (scanf("%127s", number) != 1)
		return 1;

	size_t first = (number[0] == '-' || number[0] == '+') ? 1 : 0;
	size_t length = strlen(number);

	if (length - first > 1) {
		char temp = number[first];
		number[first] = number[length - 1];
		number[length - 1] = temp;
	}

	printf("%s\n", number);
	return 0;
}
