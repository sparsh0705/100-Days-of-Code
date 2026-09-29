#include <stdio.h>

int main(void)
{
    unsigned int number;
    int bits[sizeof(number) * 8];
    int count = 0;

    printf("Enter a non-negative number: ");
    if (scanf("%u", &number) != 1) {
        return 1;
    }

    if (number == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    while (number > 0) {
        bits[count++] = number % 2;
        number /= 2;
    }

    printf("Binary representation: ");
    while (count > 0) {
        printf("%d", bits[--count]);
    }
    printf("\n");

    return 0;
}