#include <stdio.h>

int main() {

    int numbers[5]; // Declare an array of 5 integers
    int i;

    // Take input from the user
    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);   // Store input in array
    }

    // Display the array elements
    printf("\nYou entered:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);  // Print each element
    }

    printf("\n");

    return 0;
}
