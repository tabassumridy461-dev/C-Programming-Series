#include <stdio.h>

int main()
{
    // Declare three integer variables
    int num1, num2, sum;

    // Take first number as input
    printf("Enter first number: ");
    scanf("%d", &num1);

    // Take second number as input
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    printf("Sum = %d\n", sum);

    // Indicate successful program execution
    return 0;
}
