#include <stdio.h>

int main() {

    int category = 1;
    int choice = 2;

    switch (category) {

        case 1:

            printf("Food Category\n");

            switch (choice) {

                case 1:
                    printf("Burger");
                    break;

                case 2:
                    printf("Pizza");
                    break;

                default:
                    printf("Invalid Choice");
            }

            break;

        case 2:
            printf("Clothing Category");
            break;

        default:
            printf("Invalid Category");
    }

    return 0;
}

// Output:
// Food Category
// Pizza
