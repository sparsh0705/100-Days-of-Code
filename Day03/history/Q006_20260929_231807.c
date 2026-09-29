#include <stdio.h>

int main(void)
{
    int first, second, temporary;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &first, &second) != 2) {
        return 1;
    }

    temporary = first;
    first = second;
    second = temporary;

    printf("After swapping: first = %d, second = %d\n", first, second);
    return 0;
}