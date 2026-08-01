#include <stdio.h>

int main()
{
    // Declare an integer variable
    int number;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check whether the number is even or odd
    if (number % 2 == 0)
    {
        printf("%d is an Even number.\n", number);
    }
    else
    {
        printf("%d is an Odd number.\n", number);
    }

    // End of program
    return 0;
}
