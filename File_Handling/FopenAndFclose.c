
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("example.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file!\n");
        return 1;
    }

    printf("File opened successfully.\n");

    fclose(fp);

    printf("File closed successfully.\n");

    return 0;
}

/*
Expected Output:

File opened successfully.
File closed successfully.

Created File: example.txt
*/
