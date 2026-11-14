
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Reversed array: ");

    for (i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Output:

Reversed array: 50 40 30 20 10
*/
