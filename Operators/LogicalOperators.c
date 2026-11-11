#include <stdio.h>

int main() {

    int a = 10, b = 5;

    printf("AND: %d\n", (a > 5 && b < 10));
    printf("OR: %d\n", (a > 15 || b < 10));
    printf("NOT: %d\n", !(a > 5));

    return 0;
}

// Output:
// AND: 1
// OR: 1
// NOT: 0
