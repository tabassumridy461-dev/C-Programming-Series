
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    *ptr = 500;

    printf("Value: %d\n", *ptr);

    // Release memory
    free(ptr);

    ptr = NULL;

    printf("Memory released successfully.\n");

    return 0;
}

/*
Expected Output:

Value: 500
Memory released successfully.
*/
