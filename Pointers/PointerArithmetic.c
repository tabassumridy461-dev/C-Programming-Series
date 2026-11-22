
#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40};
    int *ptr = numbers;

    printf("First element: %d\n", *ptr);

    ptr++;

    printf("Second element: %d\n", *ptr);

    ptr++;

    printf("Third element: %d\n", *ptr);

    ptr--;

    printf("After decrement: %d\n", *ptr);

    return 0;
}

/*
Expected Output:

First element: 10
Second element: 20
Third element: 30
After decrement: 20
*/
