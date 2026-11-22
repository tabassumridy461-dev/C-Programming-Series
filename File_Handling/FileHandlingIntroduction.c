
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("student.txt", "w");

    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    fprintf(fp, "Welcome to C File Handling!");

    fclose(fp);

    printf("Data written successfully.\n");

    return 0;
}

/*
Expected Output:

Data written successfully.

Created File: student.txt

File Content:
Welcome to C File Handling!
*/
