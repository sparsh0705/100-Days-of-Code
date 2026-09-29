#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    int len1, len2;
    char *concat;

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (len1 != len2 || len1 == 0) {
        return 0;
    }

    concat = (char *)malloc((2 * len1 + 1) * sizeof(char));
    if (concat == NULL) {
        return 0;
    }

    strcpy(concat, s1);
    strcat(concat, s1);

    if (strstr(concat, s2) != NULL) {
        free(concat);
        return 1;
    }

    free(concat);
    return 0;
}

int main() {
    char s1[100], s2[100];

    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);

    if (isRotation(s1, s2)) {
        printf("\"%s\" is a rotation of \"%s\".\n", s2, s1);
    } else {
        printf("\"%s\" is not a rotation of \"%s\".\n", s2, s1);
    }

    return 0;
}
