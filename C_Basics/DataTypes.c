#include <stdio.h>

int main() {

    int age = 22;
    float price = 99.50;
    double salary = 45000.75;
    char grade = 'A';

    printf("Integer: %d\n", age);
    printf("Float: %.2f\n", price);
    printf("Double: %.2lf\n", salary);
    printf("Character: %c\n", grade);

    return 0;
}

// Output:
// Integer: 22
// Float: 99.50
// Double: 45000.75
// Character: A
