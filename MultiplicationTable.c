#include <stdio.h>

int main()
{
    // Declare variables
    int number, i;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the multiplication table
    printf("\nMultiplication Table of %d\n\n", number);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    // End of program
    return 0;
}
