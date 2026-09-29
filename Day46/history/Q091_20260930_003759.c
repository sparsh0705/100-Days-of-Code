#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    ch = (char)tolower((unsigned char)ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';
    printf("String without vowels: %s\n", result);

    return 0;
}
