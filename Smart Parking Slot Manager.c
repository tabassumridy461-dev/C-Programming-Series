#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SLOTS 20

struct Vehicle {
    int slot;
    char owner[50];
    char vehicleNumber[20];
    char vehicleType[20];
};

void addVehicle();
void viewVehicles();
void searchVehicle();
void removeVehicle();
void availableSlots();

int main() {
    int choice;

    while (1) {
        printf("\nSmart Parking Slot Manager\n");
        printf("1. Park Vehicle\n");
        printf("2. View Parked Vehicles\n");
        printf("3. Search Vehicle\n");
        printf("4. Remove Vehicle\n");
        printf("5. Available Slots\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addVehicle();
                break;
            case 2:
                viewVehicles();
                break;
            case 3:
                searchVehicle();
                break;
            case 4:
                removeVehicle();
                break;
            case 5:
                availableSlots();
                break;
            case 6:
                printf("Program Closed.\n");
                return 0;
            default:
                printf("Invalid Choice.\n");
        }
    }
}

void addVehicle() {
    struct Vehicle v, temp;
    FILE *fp;

    int used[MAX_SLOTS + 1] = {0};

    fp = fopen("parking.dat", "rb");

    if (fp != NULL) {
        while (fread(&temp, sizeof(temp), 1, fp)) {
            used[temp.slot] = 1;
        }
        fclose(fp);
    }

    int slot = -1;

    for (int i = 1; i <= MAX_SLOTS; i++) {
        if (!used[i]) {
            slot = i;
            break;
        }
    }

    if (slot == -1) {
        printf("Parking Full.\n");
        return;
    }

    v.slot = slot;

    printf("Owner Name: ");
    scanf(" %[^\n]", v.owner);

    printf("Vehicle Number: ");
    scanf("%s", v.vehicleNumber);

    printf("Vehicle Type: ");
    scanf("%s", v.vehicleType);

    fp = fopen("parking.dat", "ab");

    fwrite(&v, sizeof(v), 1, fp);

    fclose(fp);

    printf("Vehicle Parked Successfully.\n");
    printf("Allocated Slot: %d\n", slot);
}

void viewVehicles() {
    struct Vehicle v;
    FILE *fp;

    fp = fopen("parking.dat", "rb");

    if (fp == NULL) {
        printf("No Vehicles Found.\n");
        return;
    }

    printf("\nSlot\tOwner\t\tVehicle No\tType\n");

    while (fread(&v, sizeof(v), 1, fp)) {
        printf("%d\t%s\t\t%s\t%s\n",
               v.slot,
               v.owner,
               v.vehicleNumber,
               v.vehicleType);
    }

    fclose(fp);
}

void searchVehicle() {
    struct Vehicle v;
    FILE *fp;
    char number[20];
    int found = 0;

    printf("Enter Vehicle Number: ");
    scanf("%s", number);

    fp = fopen("parking.dat", "rb");

    if (fp == NULL) {
        printf("No Data Found.\n");
        return;
    }

    while (fread(&v, sizeof(v), 1, fp)) {
        if (strcmp(v.vehicleNumber, number) == 0) {
            printf("\nVehicle Found\n");
            printf("Slot : %d\n", v.slot);
            printf("Owner : %s\n", v.owner);
            printf("Vehicle No : %s\n", v.vehicleNumber);
            printf("Type : %s\n", v.vehicleType);
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("Vehicle Not Found.\n");
}

void removeVehicle() {
    struct Vehicle v;
    FILE *fp, *temp;
    char number[20];
    int found = 0;

    printf("Enter Vehicle Number: ");
    scanf("%s", number);

    fp = fopen("parking.dat", "rb");

    if (fp == NULL) {
        printf("No Data Found.\n");
        return;
    }

    temp = fopen("temp.dat", "wb");

    while (fread(&v, sizeof(v), 1, fp)) {
        if (strcmp(v.vehicleNumber, number) != 0) {
            fwrite(&v, sizeof(v), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("parking.dat");
    rename("temp.dat", "parking.dat");

    if (found)
        printf("Vehicle Removed Successfully.\n");
    else
        printf("Vehicle Not Found.\n");
}

void availableSlots() {
    struct Vehicle v;
    FILE *fp;
    int count = 0;

    fp = fopen("parking.dat", "rb");

    if (fp != NULL) {
        while (fread(&v, sizeof(v), 1, fp)) {
            count++;
        }
        fclose(fp);
    }

    printf("Total Slots : %d\n", MAX_SLOTS);
    printf("Occupied Slots : %d\n", count);
    printf("Available Slots : %d\n", MAX_SLOTS - count);
}
