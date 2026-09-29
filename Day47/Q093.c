#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[1000], second[1000];
    int counts[256] = {0};

    printf("Enter the first string: ");
    if (fgets(first, sizeof(first), stdin) == NULL)
        return 1;

    printf("Enter the second string: ");
    if (fgets(second, sizeof(second), stdin) == NULL)
        return 1;

    for (size_t i = 0; first[i] != '\0'; ++i) {
        if (first[i] != '\n')
            ++counts[(unsigned char)first[i]];
    }

    for (size_t i = 0; second[i] != '\0'; ++i) {
        if (second[i] != '\n')
            --counts[(unsigned char)second[i]];
    }

    for (int i = 0; i < 256; ++i) {
        if (counts[i] != 0) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}