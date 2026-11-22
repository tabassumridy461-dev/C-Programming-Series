
#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("message.txt", "w");

    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    fputs("Hello! Welcome to C Programming.", fp);

    fclose(fp);

    fp = fopen("message.txt", "r");

    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    fgets(text, sizeof(text), fp);

    printf("File content: %s\n", text);

    fclose(fp);

    return 0;
}

/*
Expected Output:

File content: Hello! Welcome to C Programming.
*/
