#include <stdbool.h>
#include <stddef.h>

bool second_largest(const int arr[], size_t n, int *result) {
    if (n < 2 || result == NULL) {
        return false;
    }

    int largest = arr[0];
    int second = 0;
    bool has_second = false;

    for (size_t i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
            has_second = true;
        } else if (arr[i] < largest && (!has_second || arr[i] > second)) {
            second = arr[i];
            has_second = true;
        }
    }

    if (has_second) {
        *result = second;
    }
    return has_second;
}