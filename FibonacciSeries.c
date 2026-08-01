#include <stdio.h>

int main()
{
    // Declare variables
    int number;
    int first = 0;
    int second = 1;
    int next;
    int i;

    // Take input from the user
    printf("How many terms do you want to print? ");
    scanf("%d", &number);

    // Check for invalid input
    if (number <= 0)
    {
        printf("Please enter a positive number.\n");
    }
    else
    {
        printf("\nFibonacci Series:\n");

        // Print Fibonacci series
        for (i = 1; i <= number; i++)
        {
            printf("%d ", first);

            // Calculate the next Fibonacci number
            next = first + second;

            // Update the values
            first = second;
            second = next;
        }

        printf("\n");
    }

    // End of program
    return 0;
}
