#include <stdio.h>
#include <string.h>

void replaceSpacesWithHyphen(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    replaceSpacesWithHyphen(str);

    printf("Modified string: %s\n", str);
    return 0;
}
