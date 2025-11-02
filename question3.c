#include <stdio.h>

// Bitwise addition of two integers
int add(int x, int y) {
    while (y != 0) {
        int carry = x & y;     // Common set bits
        x = x ^ y;             // Sum of bits where at least one is not set
        y = carry << 1;        // Carry is shifted by one so that it can be added
    }
    return x;
}

// Subtraction using bitwise logic
int subtract(int a, int b) {
    // Two's complement of b is (~b + 1)
    return add(a, add(~b, 1));
}

int main() {
    int num1, num2;

    printf("Enter two integers (a and b): ");
    scanf("%d %d", &num1, &num2);

    int result = subtract(num1, num2);
    printf("Result of %d - %d is: %d\n", num1, num2, result);

    return 0;
}