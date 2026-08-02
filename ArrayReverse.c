#include <stdio.h>

int main() {

    int numbers[5];   // Array to store 5 numbers
    int i;

    // Take input from the user
    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the array in reverse order
    printf("\nArray in Reverse Order:\n");

    for (i = 4; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
