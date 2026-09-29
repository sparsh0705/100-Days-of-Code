#include <stdio.h>
#include <stdlib.h>

int compareInts(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int *nums = malloc((size_t)n * sizeof(*nums));
    if (nums == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            free(nums);
            return 1;
        }
    }

    qsort(nums, (size_t)n, sizeof(*nums), compareInts);
    int candidate = nums[n / 2];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    printf("%d\n", count > n / 2 ? candidate : -1);
    free(nums);
    return 0;
}