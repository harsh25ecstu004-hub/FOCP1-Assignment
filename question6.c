#include <stdio.h>
#include <string.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int length = strlen(binary);

    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - i - 1);
        }
    }
    return decimal;
}

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32], i = 0;

    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int choice;
    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        char binary[33];
        printf("Enter a binary number: ");
        scanf("%s", binary);
        int decimal = binaryToDecimal(binary);
        printf("Decimal: %d\n", decimal);
    } else if (choice == 2) {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        decimalToBinary(decimal);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}