#include <stdio.h>

int main()
{
    // Declare variables
    int num1, num2;
    int originalNum1, originalNum2;
    int i, gcd, lcm;

    // Take input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Store the original values
    originalNum1 = num1;
    originalNum2 = num2;

    // Assume the first number is the GCD
    gcd = 1;

    // Find the GCD
    for (i = 1; i <= num1 && i <= num2; i++)
    {
        // Check if i divides both numbers
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    // Calculate the LCM
    lcm = (originalNum1 * originalNum2) / gcd;

    // Display the result
    printf("\nGCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    // End of program
    return 0;
}
