#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Drone {
    int droneId;
    char droneModel[50];
    char customerName[50];
    int rentalDays;
    float rentPerDay;
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
        printf("\nDrone Rental Management System\n");
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
    struct Drone drone;

    FILE *fp = fopen("drone.dat", "ab");

    if (fp == NULL) {
        printf("File Error.\n");
        return;
    }

    printf("Drone ID: ");
    scanf("%d", &drone.droneId);

    printf("Drone Model: ");
    scanf(" %[^\n]", drone.droneModel);

    printf("Customer Name: ");
    scanf(" %[^\n]", drone.customerName);

    printf("Rental Days: ");
    scanf("%d", &drone.rentalDays);

    printf("Rent Per Day: ");
    scanf("%f", &drone.rentPerDay);

    fwrite(&drone, sizeof(drone), 1, fp);

    fclose(fp);

    printf("Rental Added Successfully.\n");
}

void viewRentals() {
    struct Drone drone;

    FILE *fp = fopen("drone.dat", "rb");

    if (fp == NULL) {
        printf("No Rentals Found.\n");
        return;
    }

    printf("\nID\tModel\t\tCustomer\tDays\tRent/Day\n");

    while (fread(&drone, sizeof(drone), 1, fp)) {
        printf("%d\t%s\t\t%s\t%d\t%.2f\n",
               drone.droneId,
               drone.droneModel,
               drone.customerName,
               drone.rentalDays,
               drone.rentPerDay);
    }

    fclose(fp);
}

void searchRental() {
    struct Drone drone;
    int id;
    int found = 0;

    FILE *fp = fopen("drone.dat", "rb");

    if (fp == NULL) {
        printf("No Rentals Found.\n");
        return;
    }

    printf("Enter Drone ID: ");
    scanf("%d", &id);

    while (fread(&drone, sizeof(drone), 1, fp)) {

        if (drone.droneId == id) {

            printf("\nRental Found\n");
            printf("Model: %s\n", drone.droneModel);
            printf("Customer: %s\n", drone.customerName);
            printf("Rental Days: %d\n", drone.rentalDays);
            printf("Rent Per Day: %.2f\n", drone.rentPerDay);
            printf("Total Rent: %.2f\n", drone.rentalDays * drone.rentPerDay);

            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("Rental Not Found.\n");
}

void updateRental() {
    struct Drone drone;
    int id;
    int found = 0;

    FILE *fp = fopen("drone.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL) {
        printf("No Rentals Found.\n");
        fclose(temp);
        return;
    }

    printf("Enter Drone ID: ");
    scanf("%d", &id);

    while (fread(&drone, sizeof(drone), 1, fp)) {

        if (drone.droneId == id) {

            printf("New Customer Name: ");
            scanf(" %[^\n]", drone.customerName);

            printf("New Rental Days: ");
            scanf("%d", &drone.rentalDays);

            printf("New Rent Per Day: ");
            scanf("%f", &drone.rentPerDay);

            found = 1;
        }

        fwrite(&drone, sizeof(drone), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("drone.dat");
    rename("temp.dat", "drone.dat");

    if (found)
        printf("Rental Updated Successfully.\n");
    else
        printf("Rental Not Found.\n");
}

void deleteRental() {
    struct Drone drone;
    int id;
    int found = 0;

    FILE *fp = fopen("drone.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL) {
        printf("No Rentals Found.\n");
        fclose(temp);
        return;
    }

    printf("Enter Drone ID: ");
    scanf("%d", &id);

    while (fread(&drone, sizeof(drone), 1, fp)) {

        if (drone.droneId != id) {
            fwrite(&drone, sizeof(drone), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("drone.dat");
    rename("temp.dat", "drone.dat");

    if (found)
        printf("Rental Deleted Successfully.\n");
    else
        printf("Rental Not Found.\n");
}

void totalRevenue() {
    struct Drone drone;
    float revenue = 0;

    FILE *fp = fopen("drone.dat", "rb");

    if (fp == NULL) {
        printf("No Rentals Found.\n");
        return;
    }

    while (fread(&drone, sizeof(drone), 1, fp)) {
        revenue += drone.rentalDays * drone.rentPerDay;
    }

    fclose(fp);

    printf("Total Revenue: %.2f\n", revenue);
}
