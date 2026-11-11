#include <stdio.h>

int main() {

    int i = 1;

    start:

    printf("%d\n", i);

    i++;

    if (i <= 5) {
        goto start;
    }

    return 0;
}

// Output:
// 1
// 2
// 3
// 4
// 5
