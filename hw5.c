#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void decimalToBinary(int n) {
    if (n == 0) {
        return;
    }
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    printf("The binary representation of %d is: ", number);
    if (number == 0) {
        printf("0");
    }
    else {
        decimalToBinary(number);
    }
    printf("\n");
    return 0;
}
