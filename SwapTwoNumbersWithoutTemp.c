#include <stdio.h>

int main()
{
    // Declare two integer variables
    int num1, num2;

    // Take input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Display values before swapping
    printf("\nBefore Swapping:\n");
    printf("First Number = %d\n", num1);
    printf("Second Number = %d\n", num2);

    // Swap without using a temporary variable
    num1 = num1 + num2; // Add both numbers and store in num1
    num2 = num1 - num2; // Get original num1
    num1 = num1 - num2; // Get original num2

    // Display values after swapping
    printf("\nAfter Swapping:\n");
    printf("First Number = %d\n", num1);
    printf("Second Number = %d\n", num2);

    // End of program
    return 0;
}
