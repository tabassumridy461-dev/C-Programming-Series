

#include <stdio.h>

int main()
{
    int arr[5] = {25, 10, 45, 5, 30};
    int i, max, min;

    max = arr[0];
    min = arr[0];

    for (i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}

/*
Output:

Maximum = 45
Minimum = 5
*/
