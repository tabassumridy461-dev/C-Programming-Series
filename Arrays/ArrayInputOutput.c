
#include <stdio.h>

int main()
{
    int arr[5], i;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Input:

10 20 30 40 50

Output:

Enter 5 numbers:
Array elements: 10 20 30 40 50
*/
