#include <stdio.h>

int main() {

    int a = 5, b = 3;

    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Left Shift: %d\n", a << 1);
    printf("Right Shift: %d\n", a >> 1);
    printf("Bitwise NOT: %d\n", ~a);

    return 0;
}

// Output:
// Bitwise AND: 1
// Bitwise OR: 7
// Bitwise XOR: 6
// Left Shift: 10
// Right Shift: 2
// Bitwise NOT: -6
