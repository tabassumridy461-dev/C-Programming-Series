// 04_FunctionArguments.c
// Program to demonstrate function arguments

#include <stdio.h>

void multiply(int a, int b)
{
    printf("Multiplication = %d\n", a * b);
}

int main()
{
    multiply(5, 4);

    return 0;
}

/*
Output:

Multiplication = 20
*/
