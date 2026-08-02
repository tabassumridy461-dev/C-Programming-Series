#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    printf("First Value  = %d\n", *ptr);

    ptr++;
    printf("Second Value = %d\n", *ptr);

    ptr++;
    printf("Third Value  = %d\n", *ptr);

    ptr--;
    printf("Back to Second Value = %d\n", *ptr);

    return 0;
}
