
#include <stdio.h>

void greet() {
    printf("Hello! Welcome to C Programming.\n");
}

int main() {
    // Function pointer
    void (*ptr)() = greet;

    // Call function using pointer
    ptr();

    return 0;
}

/*
Expected Output:

Hello! Welcome to C Programming.
*/
