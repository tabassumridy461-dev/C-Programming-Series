#include <stdio.h>

void printSum(int a, int b);

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printSum(num1, num2);

    return 0;
}

void printSum(int a, int b)
{
    printf("Sum = %d\n", a + b);
}
