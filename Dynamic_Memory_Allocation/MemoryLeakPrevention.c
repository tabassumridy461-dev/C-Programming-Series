
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 10;
    }

    printf("Array elements:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    // Release allocated memory
    free(ptr);
    ptr = NULL;

    printf("\nMemory released successfully.\n");

    return 0;
}

/*
Expected Output:

Array elements:
10 20 30 40 50
Memory released successfully.
*/
