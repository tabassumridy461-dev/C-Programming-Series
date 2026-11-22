
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size!\n");
        return 1;
    }

    int *arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}

/*
Sample Input:

5
10 20 30 40 50

Expected Output:

Enter array size: 5
Enter 5 elements:
Array elements: 10 20 30 40 50
*/
