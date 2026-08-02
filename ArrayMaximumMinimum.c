#include <stdio.h>

int main() {

    int numbers[5];   // Array to store 5 numbers
    int i;
    int maximum, minimum;

    // Take input from the user
    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Assume the first element is both maximum and minimum
    maximum = numbers[0];
    minimum = numbers[0];

    // Compare the remaining elements
    for (i = 1; i < 5; i++) {

        // Check for maximum
        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }

        // Check for minimum
        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }
    }

    // Display results
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);

    return 0;
}
