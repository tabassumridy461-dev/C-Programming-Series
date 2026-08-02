#include <stdio.h>

int main() {

    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    // Take input from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Traverse the string
    while (str[i] != '\0') {

        // Check for vowels
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {

            vowels++;
        }

        // Check for consonants
        else if ((str[i] >= 'A' && str[i] <= 'Z') ||
                 (str[i] >= 'a' && str[i] <= 'z')) {

            consonants++;
        }

        // Check for digits
        else if (str[i] >= '0' && str[i] <= '9') {

            digits++;
        }

        // Count special characters (including spaces)
        else {

            special++;
        }

        i++;
    }

    // Display the result
    printf("\nVowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d\n", special);

    return 0;
}
