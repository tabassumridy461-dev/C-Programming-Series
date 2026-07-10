#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Bicycle {
    int bicycleId;
    char bicycleName[50];
    char customerName[50];
    int rentalHours;
    float chargePerHour;
};

void addRental();
void viewRentals();
void searchRental();
void updateRental();
void deleteRental();
void totalRevenue();

int main() {
    int choice;

    while (1) {
        printf("\nBicycle Rental Management System\n");
        printf("1. Add Rental\n");
        printf("2. View Rentals\n");
        printf("3. Search Rental\n");
        printf("4. Update Rental\n");
        printf("5. Delete Rental\n");
        printf("6. Total Revenue\n");
        printf("7. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRental();
                break;
            case 2:
                viewRentals();
                break;
            case 3:
                searchRental();
                break;
            case 4:
                updateRental();
                break;
            case 5:
                deleteRental();
                break;
            case 6:
                totalRevenue();
                break;
            case 7:
                return 0;
            default:
                printf("Invalid Choice.\n");
        }
    }
}

void addRental() {
    struct Bicycle bike;

    FILE *fp = fopen("bicycle.dat", "ab");

    if (fp == NULL) {
        printf("File Error.\n");
        return;
    }

    printf("Bicycle ID: ");
    scanf("%d", &bike.bicycleId);

    printf("Bicycle Name: ");
    scanf(" %[^\n]", bike.bicycleName);

    printf("Customer Name: ");
    scanf(" %[^\n]", bike.customerName);

    printf("Rental Hours: ");
    scanf("%d", &bike.rentalHours);

    printf("Charge Per Hour: ");
    scanf("%f", &bike.chargePerHour);

    fwrite(&bike, sizeof(bike), 1, fp);

    fclose(fp);

    printf("Rental Added Successfully.\n");
}

void viewRentals() {
    struct Bicycle bike;

    FILE *fp = fopen("bicycle.dat", "rb");

    if (fp == NULL) {
        printf("No Records Found.\n");
        return;
    }

    printf("\nID\tBicycle\t\tCustomer\tHours\tCharge\n");

    while (fread(&bike, sizeof(bike), 1, fp)) {
        printf("%d\t%s\t\t%s\t%d\t%.2f\n",
               bike.bicycleId,
               bike.bicycleName,
               bike.customerName,
               bike.rentalHours,
               bike.chargePerHour);
    }

    fclose(fp);
}

void searchRental() {
    struct Bicycle bike;
    int id;
    int found = 0;

    FILE *fp = fopen("bicycle.dat", "rb");

    if (fp == NULL) {
        printf("No Records Found.\n");
        return;
    }

    printf("Enter Bicycle ID: ");
    scanf("%d", &id);

    while (fread(&bike, sizeof(bike), 1, fp)) {

        if (bike.bicycleId == id) {

            printf("\nRental Found\n");
            printf("Bicycle : %s\n", bike.bicycleName);
            printf("Customer : %s\n", bike.customerName);
            printf("Hours : %d\n", bike.rentalHours);
            printf("Charge Per Hour : %.2f\n", bike.chargePerHour);
            printf("Total Charge : %.2f\n",
                   bike.rentalHours * bike.chargePerHour);

            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("Rental Not Found.\n");
}

void updateRental() {
    struct Bicycle bike;
    int id;
    int found = 0;

    FILE *fp = fopen("bicycle.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL) {
        printf("No Records Found.\n");
        fclose(temp);
        return;
    }

    printf("Enter Bicycle ID: ");
    scanf("%d", &id);

    while (fread(&bike, sizeof(bike), 1, fp)) {

        if (bike.bicycleId == id) {

            printf("New Customer Name: ");
            scanf(" %[^\n]", bike.customerName);

            printf("New Rental Hours: ");
            scanf("%d", &bike.rentalHours);

            printf("New Charge Per Hour: ");
            scanf("%f", &bike.chargePerHour);

            found = 1;
        }

        fwrite(&bike, sizeof(bike), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("bicycle.dat");
    rename("temp.dat", "bicycle.dat");

    if (found)
        printf("Rental Updated Successfully.\n");
    else
        printf("Rental Not Found.\n");
}

void deleteRental() {
    struct Bicycle bike;
    int id;
    int found = 0;

    FILE *fp = fopen("bicycle.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL) {
        printf("No Records Found.\n");
        fclose(temp);
        return;
    }

    printf("Enter Bicycle ID: ");
    scanf("%d", &id);

    while (fread(&bike, sizeof(bike), 1, fp)) {

        if (bike.bicycleId != id)
            fwrite(&bike, sizeof(bike), 1, temp);
        else
            found = 1;
    }

    fclose(fp);
    fclose(temp);

    remove("bicycle.dat");
    rename("temp.dat", "bicycle.dat");

    if (found)
        printf("Rental Deleted Successfully.\n");
    else
        printf("Rental Not Found.\n");
}

void totalRevenue() {
    struct Bicycle bike;
    float total = 0;

    FILE *fp = fopen("bicycle.dat", "rb");

    if (fp == NULL) {
        printf("No Records Found.\n");
        return;
    }

    while (fread(&bike, sizeof(bike), 1, fp))
        total += bike.rentalHours * bike.chargePerHour;

    fclose(fp);

    printf("Total Revenue: %.2f\n", total);
}
