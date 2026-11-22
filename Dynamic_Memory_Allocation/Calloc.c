
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)calloc(5, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Array elements:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}

/*
Expected Output:

Array elements:
0 0 0 0 0
*/
