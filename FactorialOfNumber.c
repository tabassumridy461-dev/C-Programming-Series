#include <stdio.h>

int main()
{
    // Declare variables
    int number, i;
    long long factorial = 1;

    // Take input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0)
    {
        printf("Factorial of a negative number is not defined.\n");
    }
    else
    {
        // Calculate factorial using a for loop
        for (i = 1; i <= number; i++)
        {
            factorial = factorial * i;
        }

        // Display the result
        printf("Factorial of %d = %lld\n", number, factorial);
    }

    // End of program
    return 0;
}
