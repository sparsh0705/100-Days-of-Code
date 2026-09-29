#include <stdio.h>

int main(void)
{
    const int groups[] = {1, 3, 5, 3, 1};
    const int group_count = sizeof(groups) / sizeof(groups[0]);

    for (int group = 0; group < group_count; group++) {
        for (int star = 0; star < groups[group]; star++) {
            puts("*");
        }
        if (group < group_count - 1) {
            putchar('\n');
        }
    }

    return 0;
}