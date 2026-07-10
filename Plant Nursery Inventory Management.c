#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Plant {
    int id;
    char name[50];
    char category[30];
    float price;
    int quantity;
};

void addPlant();
void viewPlants();
void searchPlant();
void updatePlant();
void deletePlant();
void totalInventoryValue();

int main() {
    int choice;

    while (1) {
        printf("\nPlant Nursery Inventory Management\n");
        printf("1. Add Plant\n");
        printf("2. View Plants\n");
        printf("3. Search Plant\n");
        printf("4. Update Plant\n");
        printf("5. Delete Plant\n");
        printf("6. Total Inventory Value\n");
        printf("7. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPlant();
                break;
            case 2:
                viewPlants();
                break;
            case 3:
                searchPlant();
                break;
            case 4:
                updatePlant();
                break;
            case 5:
                deletePlant();
                break;
            case 6:
                totalInventoryValue();
                break;
            case 7:
                return 0;
            default:
                printf("Invalid Choice.\n");
        }
    }
}

void addPlant() {
    struct Plant plant;

    FILE *fp = fopen("plants.dat", "ab");

    if (fp == NULL) {
        printf("File Error.\n");
        return;
    }

    printf("Plant ID: ");
    scanf("%d", &plant.id);

    printf("Plant Name: ");
    scanf(" %[^\n]", plant.name);

    printf("Category: ");
    scanf(" %[^\n]", plant.category);

    printf("Price: ");
    scanf("%f", &plant.price);

    printf("Quantity: ");
    scanf("%d", &plant.quantity);

    fwrite(&plant, sizeof(plant), 1, fp);

    fclose(fp);

    printf("Plant Added Successfully.\n");
}

void viewPlants() {
    struct Plant plant;

    FILE *fp = fopen("plants.dat", "rb");

    if (fp == NULL) {
        printf("No Plants Found.\n");
        return;
    }

    printf("\nID\tName\t\tCategory\tPrice\tQuantity\n");

    while (fread(&plant, sizeof(plant), 1, fp)) {
        printf("%d\t%s\t\t%s\t\t%.2f\t%d\n",
               plant.id,
               plant.name,
               plant.category,
               plant.price,
               plant.quantity);
    }

    fclose(fp);
}

void searchPlant() {
    struct Plant plant;
    int id;
    int found = 0;

    FILE *fp = fopen("plants.dat", "rb");

    if (fp == NULL) {
        printf("No Plants Found.\n");
        return;
    }

    printf("Enter Plant ID: ");
    scanf("%d", &id);

    while (fread(&plant, sizeof(plant), 1, fp)) {

        if (plant.id == id) {

            printf("\nPlant Found\n");
            printf("ID: %d\n", plant.id);
            printf("Name: %s\n", plant.name);
            printf("Category: %s\n", plant.category);
            printf("Price: %.2f\n", plant.price);
            printf("Quantity: %d\n", plant.quantity);

            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("Plant Not Found.\n");
}

void updatePlant() {
    struct Plant plant;
    int id;
    int found = 0;

    FILE *fp = fopen("plants.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL) {
        printf("No Plants Found.\n");
        fclose(temp);
        return;
    }

    printf("Enter Plant ID: ");
    scanf("%d", &id);

    while (fread(&plant, sizeof(plant), 1, fp)) {

        if (plant.id == id) {

            printf("New Plant Name: ");
            scanf(" %[^\n]", plant.name);

            printf("New Category: ");
            scanf(" %[^\n]", plant.category);

            printf("New Price: ");
            scanf("%f", &plant.price);

            printf("New Quantity: ");
            scanf("%d", &plant.quantity);

            found = 1;
        }

        fwrite(&plant, sizeof(plant), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("plants.dat");
    rename("temp.dat", "plants.dat");

    if (found)
        printf("Plant Updated Successfully.\n");
    else
        printf("Plant Not Found.\n");
}

void deletePlant() {
    struct Plant plant;
    int id;
    int found = 0;

    FILE *fp = fopen("plants.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL) {
        printf("No Plants Found.\n");
        fclose(temp);
        return;
    }

    printf("Enter Plant ID: ");
    scanf("%d", &id);

    while (fread(&plant, sizeof(plant), 1, fp)) {

        if (plant.id != id) {
            fwrite(&plant, sizeof(plant), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("plants.dat");
    rename("temp.dat", "plants.dat");

    if (found)
        printf("Plant Deleted Successfully.\n");
    else
        printf("Plant Not Found.\n");
}

void totalInventoryValue() {
    struct Plant plant;
    float total = 0;

    FILE *fp = fopen("plants.dat", "rb");

    if (fp == NULL) {
        printf("No Plants Found.\n");
        return;
    }

    while (fread(&plant, sizeof(plant), 1, fp)) {
        total += plant.price * plant.quantity;
    }

    fclose(fp);

    printf("Total Inventory Value: %.2f\n", total);
}
