#include <stdio.h>

int main() {

    char str[100];
    int i = 0, length = 0;

    // Take input from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Print the string in reverse order
    printf("\nReversed String: ");

    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
