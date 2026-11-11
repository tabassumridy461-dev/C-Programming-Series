#include <stdio.h>

int main() {

    int age = 22;
    int hasID = 1;

    if (age >= 18) {

        if (hasID == 1) {
            printf("You can enter.");
        }
        else {
            printf("ID required.");
        }

    }
    else {
        printf("You are underage.");
    }

    return 0;
}

// Output:
// You can enter.
