#include <stdio.h>

int main()
{
    // Declare three integer variables
    int num1, num2, num3;

    // Take input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    // Check which number is the largest
    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            printf("%d is the largest number.\n", num1);
        }
        else
        {
            printf("%d is the largest number.\n", num3);
        }
    }
    else
    {
        if (num2 >= num3)
        {
            printf("%d is the largest number.\n", num2);
        }
        else
        {
            printf("%d is the largest number.\n", num3);
        }
    }

    // End of program
    return 0;
}
