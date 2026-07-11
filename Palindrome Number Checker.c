#include <stdio.h>

int main() {

    int number, originalNumber, remainder, reversedNumber = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    }

    if (originalNumber == reversedNumber) {
        printf("%d is a Palindrome Number.\n", originalNumber);
    } else {
        printf("%d is Not a Palindrome Number.\n", originalNumber);
    }

    return 0;
}
