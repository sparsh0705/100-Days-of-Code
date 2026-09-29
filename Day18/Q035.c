#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        return 1;
    }

    if (number == 0) {
        printf("Every nonzero integer is a factor of 0.\n");
        return 0;
    }

    printf("Factors of %d: ", number);
    for (int factor = 1; factor <= (number < 0 ? -number : number); ++factor) {
        if (number % factor == 0) {
            printf("%d ", factor);
        }
    }
    printf("\n");

    return 0;
}