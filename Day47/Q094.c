 #include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char sentence[1000];
	char longest[1000] = "";
	char word[1000];
	size_t word_length = 0;

	printf("Enter a sentence: ");
	if (fgets(sentence, sizeof sentence, stdin) == NULL) {
		return 1;
	}

	for (size_t i = 0;; ++i) {
		unsigned char character = (unsigned char)sentence[i];

		if (isalpha(character)) {
			if (word_length < sizeof word - 1) {
				word[word_length++] = (char)character;
			}
		} else if (word_length > 0) {
			word[word_length] = '\0';
			if (word_length > strlen(longest)) {
				strcpy(longest, word);
			}
			word_length = 0;
		}

		if (character == '\0') {
			break;
		}
	}

	if (longest[0] == '\0') {
		printf("No words found.\n");
	} else {
		printf("Longest word: %s\n", longest);
	}

	return 0;
}
