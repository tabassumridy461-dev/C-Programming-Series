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

    // Reverse the number using a while loop
    while (number != 0)
    {
        // Get the last digit
        remainder = number % 10;

        // Add the digit to the reversed number
        reverse = reverse * 10 + remainder;

        // Remove the last digit
        number = number / 10;
    }

    // Display the result
    printf("Original Number = %d\n", originalNumber);
    printf("Reversed Number = %d\n", reverse);

    // End of program
    return 0;
}
