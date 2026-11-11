#include <stdio.h>

int main() {

    int a = 10, b = 5;

    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    return 0;
}

// Output:
// a == b: 0
// a != b: 1
// a > b: 1
// a < b: 0
// a >= b: 1
// a <= b: 0
