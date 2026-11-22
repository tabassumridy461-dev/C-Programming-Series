
#include <stdio.h>

union Data {
    int number;
    float decimal;
    char letter;
};

int main() {
    union Data data;

    data.number = 100;

    printf("Integer value: %d\n", data.number);

    data.decimal = 25.5;

    printf("Float value: %.2f\n", data.decimal);

    data.letter = 'A';

    printf("Character value: %c\n", data.letter);

    return 0;
}

/*
Expected Output:

Integer value: 100
Float value: 25.50
Character value: A
*/
