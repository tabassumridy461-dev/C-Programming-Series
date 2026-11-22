
#include <stdio.h>

int main() {
    int number = 100;

    int *ptr = &number;
    int **ptr2 = &ptr;

    printf("Value of number: %d\n", number);
    printf("Using pointer: %d\n", *ptr);
    printf("Using pointer to pointer: %d\n", **ptr2);

    return 0;
}

/*
Expected Output:

Value of number: 100
Using pointer: 100
Using pointer to pointer: 100
*/
