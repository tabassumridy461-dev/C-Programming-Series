#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct EWaste {
    int requestId;
    char customerName[50];
    char deviceName[50];
    float weight;
    char status[20];
};

void addRequest();
void viewRequests();
void searchRequest();
void updateStatus();
void deleteRequest();
void totalWeight();

int main() {
    int choice;

    while (1) {
        printf("\nE-Waste Collection Management System\n");
        printf("1. Add Collection Request\n");
        printf("2. View Requests\n");
        printf("3. Search Request\n");
        printf("4. Update Status\n");
        printf("5. Delete Request\n");
        printf("6. Total Collected Weight\n");
        printf("7. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRequest();
                break;
            case 2:
                viewRequests();
                break;
            case 3:
                searchRequest();
                break;
            case 4:
                updateStatus();
                break;
            case 5:
                deleteRequest();
                break;
            case 6:
                totalWeight();
                break;
            case 7:
                return 0;
            default:
                printf("Invalid Choice.\n");
        }
    }
}

void addRequest() {
    struct EWaste item;

    FILE *fp = fopen("ewaste.dat", "ab");

    if (fp == NULL) {
        printf("File Error.\n");
        return;
    }

    printf("Request ID: ");
    scanf("%d", &item.requestId);

    printf("Customer Name: ");
    scanf(" %[^\n]", item.customerName);

    printf("Device Name: ");
    scanf(" %[^\n]", item.deviceName);

    printf("Weight (kg): ");
    scanf("%f", &item.weight);

    strcpy(item.status, "Pending");

    fwrite(&item, sizeof(item), 1, fp);

    fclose(fp);

    printf("Request Added Successfully.\n");
}

void viewRequests() {
    struct EWaste item;

    FILE *fp = fopen("ewaste.dat", "rb");

    if (fp == NULL) {
        printf("No Requests Found.\n");
        return;
    }

    printf("\nID\tCustomer\tDevice\t\tWeight\tStatus\n");

    while (fread(&item, sizeof(item), 1, fp)) {
        printf("%d\t%s\t\t%s\t%.2f\t%s\n",
               item.requestId,
               item.customerName,
               item.deviceName,
               item.weight,
               item.status);
    }

    fclose(fp);
}

void searchRequest() {
    struct EWaste item;
    int id;
    int found = 0;

    FILE *fp = fopen("ewaste.dat", "rb");

    if (fp == NULL) {
        printf("No Requests Found.\n");
        return;
    }

    printf("Enter Request ID: ");
    scanf("%d", &id);

    while (fread(&item, sizeof(item), 1, fp)) {

        if (item.requestId == id) {

            printf("\nRequest Found\n");
            printf("Customer : %s\n", item.customerName);
            printf("Device : %s\n", item.deviceName);
            printf("Weight : %.2f kg\n", item.weight);
            printf("Status : %s\n", item.status);

            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("Request Not Found.\n");
}

void updateStatus() {
    struct EWaste item;
    int id;
    int found = 0;

    FILE *fp = fopen("ewaste.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL) {
        printf("No Requests Found.\n");
        fclose(temp);
        return;
    }

    printf("Enter Request ID: ");
    scanf("%d", &id);

    while (fread(&item, sizeof(item), 1, fp)) {

        if (item.requestId == id) {

            printf("New Status: ");
            scanf(" %[^\n]", item.status);

            found = 1;
        }

        fwrite(&item, sizeof(item), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("ewaste.dat");
    rename("temp.dat", "ewaste.dat");

    if (found)
        printf("Status Updated Successfully.\n");
    else
        printf("Request Not Found.\n");
}

void deleteRequest() {
    struct EWaste item;
    int id;
    int found = 0;

    FILE *fp = fopen("ewaste.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL) {
        printf("No Requests Found.\n");
        fclose(temp);
        return;
    }

    printf("Enter Request ID: ");
    scanf("%d", &id);

    while (fread(&item, sizeof(item), 1, fp)) {

        if (item.requestId != id) {
            fwrite(&item, sizeof(item), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("ewaste.dat");
    rename("temp.dat", "ewaste.dat");

    if (found)
        printf("Request Deleted Successfully.\n");
    else
        printf("Request Not Found.\n");
}

void totalWeight() {
    struct EWaste item;
    float total = 0;

    FILE *fp = fopen("ewaste.dat", "rb");

    if (fp == NULL) {
        printf("No Requests Found.\n");
        return;
    }

    while (fread(&item, sizeof(item), 1, fp)) {
        total += item.weight;
    }

    fclose(fp);

    printf("Total Collected Weight: %.2f kg\n", total);
}
