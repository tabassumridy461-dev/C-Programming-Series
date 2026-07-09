#include <stdio.h>

struct Car {
    int id;
    char model[50];
    float rentPerDay;
    int days;
};

int main() {
    struct Car cars[100];
    int n, i;
    float grandTotal = 0;

    printf("Enter number of rental records: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nRental Record %d\n", i + 1);

        printf("Enter Car ID: ");
        scanf("%d", &cars[i].id);

        printf("Enter Car Model: ");
        scanf("%s", cars[i].model);

        printf("Enter Rent Per Day: ");
        scanf("%f", &cars[i].rentPerDay);

        printf("Enter Number of Rental Days: ");
        scanf("%d", &cars[i].days);
    }

    printf("\nCar Rental Details\n");

    for(i = 0; i < n; i++) {
        float totalRent = cars[i].rentPerDay * cars[i].days;

        printf("\nCar ID: %d\n", cars[i].id);
        printf("Car Model: %s\n", cars[i].model);
        printf("Rent Per Day: %.2f\n", cars[i].rentPerDay);
        printf("Rental Days: %d\n", cars[i].days);
        printf("Total Rent: %.2f\n", totalRent);

        grandTotal += totalRent;
    }

    printf("\nGrand Total Rental Income: %.2f\n", grandTotal);

    return 0;
}
