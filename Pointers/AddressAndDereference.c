
#include <stdio.h>

int main() {
    int number = 50;
    int *ptr = &number;

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void*)ptr);
    printf("Value using pointer: %d\n", *ptr);

    return 0;
}

/*
Expected Output:

Value of number: 50
Address of number: 0x...
Value using pointer: 50
*/
