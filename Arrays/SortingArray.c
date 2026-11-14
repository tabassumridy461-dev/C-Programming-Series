
#include <stdio.h>

int main()
{
    int arr[5] = {50, 20, 40, 10, 30};
    int i, j, temp;

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Output:

Sorted array: 10 20 30 40 50
*/
