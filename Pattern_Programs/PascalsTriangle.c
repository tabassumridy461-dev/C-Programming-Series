// 07_PascalsTriangle.c
// Program to print Pascal's Triangle

#include <stdio.h>

int main()
{
    int i, j, space;
    int num;

    for (i = 0; i < 5; i++)
    {
        for (space = 1; space <= 5 - i; space++)
        {
            printf(" ");
        }

        num = 1;

        for (j = 0; j <= i; j++)
        {
            printf("%d ", num);

            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}

/*
Output:

     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
*/
