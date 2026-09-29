#include <stdio.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int values[n];
    long long total = 0;

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            return 0;
        }
        total += values[i];
    }

    long long leftSum = 0;
    for (int i = 0; i < n; i++) {
        if (leftSum == total - leftSum - values[i]) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += values[i];
    }

    printf("-1\n");
    return 0;
}