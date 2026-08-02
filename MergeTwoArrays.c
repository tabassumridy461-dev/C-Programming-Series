#include <stdio.h>

int main() {

    int array1[5], array2[5], mergedArray[10];
    int i;

    // Take input for the first array
    printf("Enter 5 elements for the first array:\n");

    for (i = 0; i < 5; i++) {
        printf("Array1[%d] = ", i);
        scanf("%d", &array1[i]);
    }

    // Take input for the second array
    printf("\nEnter 5 elements for the second array:\n");

    for (i = 0; i < 5; i++) {
        printf("Array2[%d] = ", i);
        scanf("%d", &array2[i]);
    }

    // Copy first array into merged array
    for (i = 0; i < 5; i++) {
        mergedArray[i] = array1[i];
    }

    // Copy second array into merged array
    for (i = 0; i < 5; i++) {
        mergedArray[i + 5] = array2[i];
    }

    // Display merged array
    printf("\nMerged Array:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", mergedArray[i]);
    }

    printf("\n");

    return 0;
}
