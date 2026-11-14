

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int search = 30;
    int i, found = 0;

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Element found at position %d\n", i + 1);
    }
    else
    {
        printf("Element not found.\n");
    }

    return 0;
}

/*
Output:

Element found at position 3
*/
