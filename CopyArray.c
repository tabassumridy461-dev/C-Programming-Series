#include <stdio.h>

int main() {

    int sourceArray[5], destinationArray[5];
    int i;

    // Take input for the source array
    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &sourceArray[i]);
    }

    // Copy elements from sourceArray to destinationArray
    for (i = 0; i < 5; i++) {
        destinationArray[i] = sourceArray[i];
    }

    // Display the original array
    printf("\nOriginal Array:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", sourceArray[i]);
    }

    // Display the copied array
    printf("\nCopied Array:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", destinationArray[i]);
    }

    printf("\n");

    return 0;
}
