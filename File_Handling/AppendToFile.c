
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("notes.txt", "w");

    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    fprintf(fp, "First line.\n");

    fclose(fp);

    // Append new content
    fp = fopen("notes.txt", "a");

    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    fprintf(fp, "Second line.\n");

    fclose(fp);

    printf("Data appended successfully.\n");

    return 0;
}

/*
Expected Output:

Data appended successfully.

File Content:

First line.
Second line.
*/
