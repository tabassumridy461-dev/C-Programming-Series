#include <stdio.h>

int main()
{
    // Declare three integer variables
    int num1, num2, temp;

    // Take input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Display values before swapping
    printf("\nBefore Swapping:\n");
    printf("First Number = %d\n", num1);
    printf("Second Number = %d\n", num2);

    // Swap using a temporary variable
    temp = num1;   // Store num1 in temp
    num1 = num2;   // Copy num2 into num1
    num2 = temp;   // Copy temp (old num1) into num2

    // Display values after swapping
    printf("\nAfter Swapping:\n");
    printf("First Number = %d\n", num1);
    printf("Second Number = %d\n", num2);

    // End of program
    return 0;
}
