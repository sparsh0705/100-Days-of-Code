 #include <stdio.h>
 #include <string.h>

int main(void)
{
	char string[1000];
	int left, right, palindrome = 1;

	printf("Enter a string: ");
	if (fgets(string, sizeof(string), stdin) == NULL)
		return 1;

	string[strcspn(string, "\n")] = '\0';
	left = 0;
	right = (int)strlen(string) - 1;

	while (left < right) {
		if (string[left] != string[right]) {
			palindrome = 0;
			break;
		}
		left++;
		right--;
	}

	printf("%s\n", palindrome ? "Palindrome" : "Not a palindrome");
	return 0;
}
