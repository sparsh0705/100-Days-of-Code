#include <stdio.h>

int main() {
    int arr[10], n, i, even = 0, odd = 0;

    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    if (n < 0 || n > 10) {
        printf("Invalid size! Please enter a value between 0 and 10.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
