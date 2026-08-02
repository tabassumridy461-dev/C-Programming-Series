#include <stdio.h>

int main() {

    int numbers[5];      // Array to store 5 numbers
    int i;
    int evenCount = 0;
    int oddCount = 0;

    // Take input from the user
    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Count even and odd numbers
    for (i = 0; i < 5; i++) {

        if (numbers[i] % 2 == 0) {
            evenCount++;      // Increase even count
        } else {
            oddCount++;       // Increase odd count
        }

    }

    // Display the result
    printf("\nEven Numbers = %d\n", evenCount);
    printf("Odd Numbers = %d\n", oddCount);

    return 0;
}
