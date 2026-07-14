#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int first, second;

    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);

    printf("\nBefore Swap\n");
    printf("First = %d\n", first);
    printf("Second = %d\n", second);

    swap(&first, &second);

    printf("\nAfter Swap\n");
    printf("First = %d\n", first);
    printf("Second = %d\n", second);

    return 0;
}
