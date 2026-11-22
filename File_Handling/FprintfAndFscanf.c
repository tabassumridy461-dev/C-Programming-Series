
#include <stdio.h>

int main() {
    FILE *fp;

    int age;
    char name[30];

    fp = fopen("student.txt", "w");

    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    fprintf(fp, "Rahim 22");

    fclose(fp);

    fp = fopen("student.txt", "r");

    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    fscanf(fp, "%29s %d", name, &age);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    fclose(fp);

    return 0;
}

/*
Expected Output:

Name: Rahim
Age: 22
*/
