#include <ctype.h>
#include <stdio.h>

int main(void) {
    char string[1000];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    if (fgets(string, sizeof(string), stdin) == NULL) {
        return 1;
    }

    for (int i = 0; string[i] != '\0'; i++) {
        unsigned char character = (unsigned char)string[i];

        if (isalpha(character)) {
            character = (unsigned char)tolower(character);
            if (character == 'a' || character == 'e' || character == 'i' ||
                character == 'o' || character == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}