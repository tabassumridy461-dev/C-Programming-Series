#include <stdio.h>

int main() {

    char str[100];
    int i, length = 0;
    int isPalindrome = 1;

    // Take input from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++) {

        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }

    }

    // Display the result
    if (isPalindrome == 1) {
        printf("\nThe string is a Palindrome.\n");
    } else {
        printf("\nThe string is NOT a Palindrome.\n");
    }

    return 0;
}
