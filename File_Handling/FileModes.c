
#include <stdio.h>

int main() {
    FILE *fp;

    // Write mode
    fp = fopen("sample.txt", "w");

    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    fprintf(fp, "Hello C Programming");

    fclose(fp);

    // Read mode
    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    char text[100];

    fgets(text, sizeof(text), fp);

    printf("Read mode: %s\n", text);

    fclose(fp);

    // Append mode
    fp = fopen("sample.txt", "a");

    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    fprintf(fp, "\nLearning File Handling");

    fclose(fp);

    printf("Append mode completed.\n");

    return 0;
}

/*
Expected Output:

Read mode: Hello C Programming
Append mode completed.

Final File Content:

Hello C Programming
Learning File Handling
*/
