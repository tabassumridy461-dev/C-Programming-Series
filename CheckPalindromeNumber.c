#include <stdio.h>

int main()
{
    // Declare variables
    int number, originalNumber;
    int remainder, reverse = 0;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the original number
    originalNumber = number;

    // Reverse the number
    while (number != 0)
    {
        // Get the last digit
        remainder = number % 10;

        // Build the reversed number
        reverse = reverse * 10 + remainder;

        // Remove the last digit
        number = number / 10;
    }

    // Check whether the number is a palindrome
    if (originalNumber == reverse)
    {
        printf("%d is a Palindrome Number.\n", originalNumber);
    }
    else
    {
        printf("%d is NOT a Palindrome Number.\n", originalNumber);
    }

    // End of program
    return 0;
}
