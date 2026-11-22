
#include <stdio.h>

int main() {
    FILE *fp;

    int numbers[] = {10, 20, 30, 40, 50};
    int data[5];

    fp = fopen("data.bin", "wb");

    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    fwrite(numbers, sizeof(int), 5, fp);

    fclose(fp);

    fp = fopen("data.bin", "rb");

    if (fp == NULL) {
        printf("File opening failed!\n");
        return 1;
    }

    fread(data, sizeof(int), 5, fp);

    printf("File data: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", data[i]);
    }

    fclose(fp);

    return 0;
}

/*
Expected Output:

File data: 10 20 30 40 50
*/
