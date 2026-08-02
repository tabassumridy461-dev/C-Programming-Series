#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    printf("Array elements using pointer:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    return 0;
}
