#include <stdio.h>

int main() {

    int age = 22;

    char *result = (age >= 18) ? "Adult" : "Minor";

    printf("Result: %s", result);

    return 0;
}

// Output:
// Result: Adult
