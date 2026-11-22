
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("missing.txt", "r");

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("File opened successfully.\n");

    fclose(fp);

    return 0;
}

/*
Expected Output:

Error opening file: No such file or directory

Note: Exact error message may vary
depending on the operating system.
*/
