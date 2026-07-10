#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Equipment {
    int equipmentId;
    char equipmentName[50];
    char customerName[50];
    int rentalDays;
    float chargePerDay;
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

        printf("\nCamping Equipment Rental System\n");
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

    struct Equipment item;

    FILE *fp = fopen("camping.dat", "ab");

    if (fp == NULL) {
        printf("File Error.\n");
        return;
    }

    printf("Equipment ID: ");
    scanf("%d", &item.equipmentId);

    printf("Equipment Name: ");
    scanf(" %[^\n]", item.equipmentName);

    printf("Customer Name: ");
    scanf(" %[^\n]", item.customerName);

    printf("Rental Days: ");
    scanf("%d", &item.rentalDays);

    printf("Charge Per Day: ");
    scanf("%f", &item.chargePerDay);

    fwrite(&item, sizeof(item), 1, fp);

    fclose(fp);

    printf("Rental Added Successfully.\n");
}

void viewRentals() {

    struct Equipment item;

    FILE *fp = fopen("camping.dat", "rb");

    if (fp == NULL) {
        printf("No Records Found.\n");
        return;
    }

    printf("\nID\tEquipment\tCustomer\tDays\tCharge\n");

    while (fread(&item, sizeof(item), 1, fp)) {

        printf("%d\t%s\t\t%s\t%d\t%.2f\n",
               item.equipmentId,
               item.equipmentName,
               item.customerName,
               item.rentalDays,
               item.chargePerDay);
    }

    fclose(fp);
}

void searchRental() {

    struct Equipment item;
    int id;
    int found = 0;

    FILE *fp = fopen("camping.dat", "rb");

    if (fp == NULL) {
        printf("No Records Found.\n");
        return;
    }

    printf("Enter Equipment ID: ");
    scanf("%d", &id);

    while (fread(&item, sizeof(item), 1, fp)) {

        if (item.equipmentId == id) {

            printf("\nEquipment Found\n");
            printf("Equipment : %s\n", item.equipmentName);
            printf("Customer : %s\n", item.customerName);
            printf("Rental Days : %d\n", item.rentalDays);
            printf("Charge Per Day : %.2f\n", item.chargePerDay);
            printf("Total Charge : %.2f\n",
                   item.rentalDays * item.chargePerDay);

            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("Record Not Found.\n");
}

void updateRental() {

    struct Equipment item;
    int id;
    int found = 0;

    FILE *fp = fopen("camping.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL) {
        printf("No Records Found.\n");
        fclose(temp);
        return;
    }

    printf("Enter Equipment ID: ");
    scanf("%d", &id);

    while (fread(&item, sizeof(item), 1, fp)) {

        if (item.equipmentId == id) {

            printf("New Customer Name: ");
            scanf(" %[^\n]", item.customerName);

            printf("New Rental Days: ");
            scanf("%d", &item.rentalDays);

            printf("New Charge Per Day: ");
            scanf("%f", &item.chargePerDay);

            found = 1;
        }

        fwrite(&item, sizeof(item), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("camping.dat");
    rename("temp.dat", "camping.dat");

    if (found)
        printf("Rental Updated Successfully.\n");
    else
        printf("Record Not Found.\n");
}

void deleteRental() {

    struct Equipment item;
    int id;
    int found = 0;

    FILE *fp = fopen("camping.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL) {
        printf("No Records Found.\n");
        fclose(temp);
        return;
    }

    printf("Enter Equipment ID: ");
    scanf("%d", &id);

    while (fread(&item, sizeof(item), 1, fp)) {

        if (item.equipmentId != id)
            fwrite(&item, sizeof(item), 1, temp);
        else
            found = 1;
    }

    fclose(fp);
    fclose(temp);

    remove("camping.dat");
    rename("temp.dat", "camping.dat");

    if (found)
        printf("Rental Deleted Successfully.\n");
    else
        printf("Record Not Found.\n");
}

void totalRevenue() {

    struct Equipment item;
    float total = 0;

    FILE *fp = fopen("camping.dat", "rb");

    if (fp == NULL) {
        printf("No Records Found.\n");
        return;
    }

    while (fread(&item, sizeof(item), 1, fp))
        total += item.rentalDays * item.chargePerDay;

    fclose(fp);

    printf("Total Revenue: %.2f\n", total);
}
