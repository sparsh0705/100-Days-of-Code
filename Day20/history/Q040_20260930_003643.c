#include <stdio.h>

int main(void)
{
    char binary[1024];

    printf("Enter a binary number: ");
    if (scanf("%1023s", binary) != 1) {
        return 1;
    }

    for (int i = 0; binary[i] != '\0'; ++i) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            fprintf(stderr, "Invalid binary number.\n");
            return 1;
        }
    }

    printf("1's complement: %s\n", binary);
    return 0;
}