#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

int decimalToBinary(int decimal) {
    int binary = 0, base = 1;
    while (decimal > 0) {
        binary += (decimal % 2) * base;
        decimal /= 2;
        base *= 10;
    }
    return binary;
}

int main() {
    int num;
    printf("Enter a binary number: ");
    scanf("%d", &num);
    printf("Decimal equivalent: %d\n", binaryToDecimal(num));

    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary equivalent: %d\n", decimalToBinary(num));

    return 0;
}
