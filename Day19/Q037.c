#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long a, b;

    printf("Enter two integers: ");
    if (scanf("%lld %lld", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    long long x = llabs(a);
    long long y = llabs(b);
    long long m = x;
    long long n = y;

    while (n != 0) {
        long long remainder = m % n;
        m = n;
        n = remainder;
    }

    if (x == 0 || y == 0) {
        printf("LCM: 0\n");
    } else {
        printf("LCM: %lld\n", (x / m) * y);
    }

    return 0;
}