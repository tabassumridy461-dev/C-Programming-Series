
#include <stdio.h>

int main() {
    char name[] = "Tabassum";
    char *ptr = name;

    printf("String: %s\n", name);

    printf("Characters: ");

    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }

    return 0;
}

/*
Expected Output:

String: Tabassum
Characters: T a b a s s u m
*/
