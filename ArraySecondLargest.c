#include <stdio.h>

int main() {

    int numbers[5];
    int i;
    int largest, secondLargest;

    // Take input from the user
    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Assume first two elements
    if (numbers[0] > numbers[1]) {
        largest = numbers[0];
        secondLargest = numbers[1];
    } else {
        largest = numbers[1];
        secondLargest = numbers[0];
    }

    // Find largest and second largest
    for (i = 2; i < 5; i++) {

        if (numbers[i] > largest) {

            secondLargest = largest;
            largest = numbers[i];

        } else if (numbers[i] > secondLargest && numbers[i] != largest) {

            secondLargest = numbers[i];

        }

    }

    // Display result
    printf("\nLargest Number = %d\n", largest);
    printf("Second Largest Number = %d\n", secondLargest);

    return 0;
}
