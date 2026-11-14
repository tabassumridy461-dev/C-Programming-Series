// 02_FunctionDeclaration.c
// Program to demonstrate function declaration

#include <stdio.h>

int add(int, int);

int main()
{
    int result;

    result = add(10, 20);

    printf("Sum = %d\n", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

/*
Output:

Sum = 30
*/
