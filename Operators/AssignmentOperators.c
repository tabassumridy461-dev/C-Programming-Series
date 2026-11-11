#include <stdio.h>

int main() {

    int a = 10;

    a += 5;
    printf("After += : %d\n", a);

    a -= 3;
    printf("After -= : %d\n", a);

    a *= 2;
    printf("After *= : %d\n", a);

    a /= 4;
    printf("After /= : %d\n", a);

    a %= 3;
    printf("After %%= : %d\n", a);

    return 0;
}

// Output:
// After += : 15
// After -= : 12
// After *= : 24
// After /= : 6
// After %= : 0
