
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory dynamically
    int *ptr = (int*)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    *ptr = 100;

    printf("Value: %d\n", *ptr);

    // Release allocated memory
    free(ptr);

    ptr = NULL;

    return 0;
}

/*
Expected Output:

Value: 100
*/
