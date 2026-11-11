#include <stdio.h>

int main() {

    int a = 5;

    printf("Original: %d\n", a);

    printf("Pre-increment: %d\n", ++a);
    printf("Post-increment: %d\n", a++);

    printf("After increment: %d\n", a);

    printf("Pre-decrement: %d\n", --a);
    printf("Post-decrement: %d\n", a--);

    printf("Final value: %d\n", a);

    return 0;
}

// Output:
// Original: 5
// Pre-increment: 6
// Post-increment: 6
// After increment: 7
// Pre-decrement: 6
// Post-decrement: 6
// Final value: 5
