
#include <stdio.h>

int main()
{
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}

/*
Output:

10 20 30
40 50 60
*/
