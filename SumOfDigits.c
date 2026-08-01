#include <stdio.h>

int main()
{
    // Declare variables
    int number, originalNumber;
    int remainder;
    int sum = 0;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the original number
    originalNumber = number;

    // Calculate the sum of digits
    while (number != 0)
    {
        // Get the last digit
        remainder = number % 10;

        // Add the digit to sum
        sum = sum + remainder;

        // Remove the last digit
        number = number / 10;
    }

    // Display the result
    printf("Original Number = %d\n", originalNumber);
    printf("Sum of Digits = %d\n", sum);

    // End of program
    return 0;
}
