
// Program to demonstrate return values

#include <stdio.h>

int square(int num)
{
    return num * num;
}

int main()
{
    int result;

    result = square(5);

    printf("Square = %d\n", result);

    return 0;
}

/*
Output:

Square = 25
*/
