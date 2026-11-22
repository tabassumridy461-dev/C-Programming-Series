
#include <stdio.h>

int main() {
    int number = 10;

    // Declare a pointer
    int *ptr = &number;

    // Display values
    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void*)&number);
    printf("Value of pointer: %p\n", (void*)ptr);

    return 0;
}

/*
Expected Output:

Value of number: 10
Address of number: 0x...
Value of pointer: 0x...

Note: The actual memory address will vary.
*/
