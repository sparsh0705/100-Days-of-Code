#include <stdio.h>

int main(void)
{
    int n;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d integer elements:\n", n);
    for (int i = 0; i < n; i++) {
        int value;
        if (scanf("%d", &value) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (value > 0)
            positive++;
        else if (value < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive elements: %d\n", positive);
    printf("Negative elements: %d\n", negative);
    printf("Zero elements: %d\n", zero);
    return 0;
}