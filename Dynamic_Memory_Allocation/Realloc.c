
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(3 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    // Resize memory
    int *temp = (int*)realloc(ptr, 5 * sizeof(int));

    if (temp == NULL) {
        free(ptr);
        printf("Memory reallocation failed!\n");
        return 1;
    }

    ptr = temp;

    ptr[3] = 40;
    ptr[4] = 50;

    printf("Updated array:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}

/*
Expected Output:

Updated array:
10 20 30 40 50
*/
