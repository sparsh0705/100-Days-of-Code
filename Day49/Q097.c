#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[--len] = '\0';
    }

    int printed = 0;

    for (size_t i = 0; i < len; i++) {
        if ((i == 0 || name[i - 1] == ' ') && name[i] != ' ') {
            printf("%c", toupper((unsigned char)name[i]));
            printed = 1;
        }
    }

    if (!printed) {
        printf("No initials");
    }

    printf("\n");
    return 0;
}
