#include <stdio.h>

int main(void)
{
    int n;
    unsigned long long product = 1;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 2; i <= n; i += 2) {
        product *= (unsigned long long)i;
    }

    printf("Product of even numbers from 1 to %d: %llu\n", n, product);
    return 0;
}