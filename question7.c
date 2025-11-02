#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print left half of the pattern
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }

        // Print space between the two halves
        printf(" ");

        // Print right half of the pattern (same as left)
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}
