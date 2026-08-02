#include <stdio.h>

int main() {

    char str[100];
    int i = 0, length = 0;

    // Take input from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Calculate string length
    while (str[i] != '\0') {
        length++;
        i++;
    }

    // Display the result
    printf("\nLength of the string = %d\n", length);

    return 0;
}
