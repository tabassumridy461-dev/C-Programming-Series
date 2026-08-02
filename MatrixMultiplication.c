#include <stdio.h>

int main() {

    int matrix1[2][2], matrix2[2][2], result[2][2];
    int i, j, k;

    // Input for the first matrix
    printf("Enter elements of the first 2x2 matrix:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Matrix1[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for the second matrix
    printf("\nEnter elements of the second 2x2 matrix:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Matrix2[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize the result matrix with 0
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply the matrices
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                result[i][j] = result[i][j] + (matrix1[i][k] * matrix2[k][j]);
            }
        }
    }

    // Display the result matrix
    printf("\nResult Matrix:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
