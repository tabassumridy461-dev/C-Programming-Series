#include <stdio.h>

int main() {

    int numbers[5];   // Array to store 5 numbers
    int i;
    int sum = 0;
    float average;

    // Take input from the user
    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        sum = sum + numbers[i];   // Add each number to sum
    }

    // Calculate average
    average = (float)sum / 5;

    // Display results
    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
