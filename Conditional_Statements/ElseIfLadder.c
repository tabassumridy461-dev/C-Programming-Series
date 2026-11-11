#include <stdio.h>

int main() {

    int marks = 85;

    if (marks >= 80) {
        printf("Grade: A+");
    }
    else if (marks >= 70) {
        printf("Grade: A");
    }
    else if (marks >= 60) {
        printf("Grade: A-");
    }
    else {
        printf("Grade: F");
    }

    return 0;
}

// Output:
// Grade: A+
