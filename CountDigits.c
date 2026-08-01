#include <stdio.h>

int main()
{
    // Declare variables
    int number, originalNumber;
    int count = 0;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the original number
    originalNumber = number;

    // Special case: if the number is 0
    if (number == 0)
    {
        count = 1;
    }
    else
    {
        // Count the digits using a while loop
        while (number != 0)
        {
            count++;            // Increase digit count
            number = number / 10; // Remove the last digit
        }
    }

    // Display the result
    printf("Original Number = %d\n", originalNumber);
    printf("Total Digits = %d\n", count);

    // End of program
    return 0;
}
