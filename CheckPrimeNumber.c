#include <stdio.h>

int main()
{
    // Declare variables
    int number, i, isPrime = 1;

    // Take input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // 0 and 1 are not prime numbers
    if (number <= 1)
    {
        isPrime = 0;
    }
    else
    {
        // Check divisibility from 2 to number-1
        for (i = 2; i < number; i++)
        {
            // If divisible, then it is not prime
            if (number % i == 0)
            {
                isPrime = 0;
                break; // Exit the loop immediately
            }
        }
    }

    // Display the result
    if (isPrime == 1)
    {
        printf("%d is a Prime Number.\n", number);
    }
    else
    {
        printf("%d is NOT a Prime Number.\n", number);
    }

    // End of program
    return 0;
}
