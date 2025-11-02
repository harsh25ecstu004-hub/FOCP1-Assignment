#include <stdio.h>

int main() {
    int x = 10, y = 20;

    printf("Original values: x = %d, y = %d\n", x, y);

    swap_temp(x, y);
    swap_arithmetic(x, y);
    swap_xor(x, y);

    swap_pointer(&x, &y);
    printf("Using pointers: x = %d, y = %d\n", x, y);

    return 0;
}
