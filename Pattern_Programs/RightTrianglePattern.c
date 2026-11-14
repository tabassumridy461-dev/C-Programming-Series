// 02_RightTrianglePattern.c
// Program to print a right triangle star pattern

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

/*
Output:

*
* *
* * *
* * * *
* * * * *
*/
