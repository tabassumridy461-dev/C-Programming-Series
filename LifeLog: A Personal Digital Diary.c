#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Diary {
    char date[20];
    char title[100];
    char mood[30];
    char note[500];
};

void addEntry();
void viewEntries();
void searchEntry();
void deleteEntry();

int main() {
    int choice;

    while (1) {
        printf("\nLifeLog - A Personal Digital Diary\n");
        printf("1. Add New Entry\n");
        printf("2. View All Entries\n");
        printf("3. Search Entry by Date\n");
        printf("4. Delete Entry\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                addEntry();
                break;
            case 2:
                viewEntries();
                break;
            case 3:
                searchEntry();
                break;
            case 4:
                deleteEntry();
                break;
            case 5:
                printf("Thank you for using LifeLog!\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

void addEntry() {
    FILE *fp = fopen("lifelog.txt", "a");

    if (fp == NULL) {
        printf("File could not be opened.\n");
        return;
    }

    struct Diary d;

    printf("Enter Date (DD-MM-YYYY): ");
    fgets(d.date, sizeof(d.date), stdin);
    d.date[strcspn(d.date, "\n")] = '\0';

    printf("Enter Title: ");
    fgets(d.title, sizeof(d.title), stdin);
    d.title[strcspn(d.title, "\n")] = '\0';

    printf("Enter Mood: ");
    fgets(d.mood, sizeof(d.mood), stdin);
    d.mood[strcspn(d.mood, "\n")] = '\0';

    printf("Write Your Note:\n");
    fgets(d.note, sizeof(d.note), stdin);
    d.note[strcspn(d.note, "\n")] = '\0';

    fprintf(fp, "%s|%s|%s|%s\n",
            d.date,
            d.title,
            d.mood,
            d.note);

    fclose(fp);

    printf("Diary entry saved successfully.\n");
}

void viewEntries() {
    FILE *fp = fopen("lifelog.txt", "r");

    if (fp == NULL) {
        printf("No diary entries found.\n");
        return;
    }

    struct Diary d;
    char line[800];
    int count = 0;

    printf("\n------ Diary Entries ------\n");

    while (fgets(line, sizeof(line), fp)) {

        sscanf(line, "%19[^|]|%99[^|]|%29[^|]|%499[^\n]",
               d.date,
               d.title,
               d.mood,
               d.note);

        printf("\nEntry %d\n", ++count);
        printf("Date : %s\n", d.date);
        printf("Title: %s\n", d.title);
        printf("Mood : %s\n", d.mood);
        printf("Note : %s\n", d.note);
    }

    if (count == 0)
        printf("No entries available.\n");

    fclose(fp);
}

void searchEntry() {
    FILE *fp = fopen("lifelog.txt", "r");

    if (fp == NULL) {
        printf("No diary entries found.\n");
        return;
    }

    char searchDate[20];
    char line[800];
    int found = 0;

    struct Diary d;

    printf("Enter Date to Search (DD-MM-YYYY): ");
    fgets(searchDate, sizeof(searchDate), stdin);
    searchDate[strcspn(searchDate, "\n")] = '\0';

    while (fgets(line, sizeof(line), fp)) {

        sscanf(line, "%19[^|]|%99[^|]|%29[^|]|%499[^\n]",
               d.date,
               d.title,
               d.mood,
               d.note);

        if (strcmp(d.date, searchDate) == 0) {
            printf("\nEntry Found\n");
            printf("Date : %s\n", d.date);
            printf("Title: %s\n", d.title);
            printf("Mood : %s\n", d.mood);
            printf("Note : %s\n", d.note);
            found = 1;
        }
    }

    if (!found)
        printf("No entry found for this date.\n");

    fclose(fp);
}

void deleteEntry() {
    FILE *fp = fopen("lifelog.txt", "r");

    if (fp == NULL) {
        printf("No diary entries found.\n");
        return;
    }

    FILE *temp = fopen("temp.txt", "w");

    char deleteDate[20];
    char line[800];
    int found = 0;

    struct Diary d;

    printf("Enter Date to Delete (DD-MM-YYYY): ");
    fgets(deleteDate, sizeof(deleteDate), stdin);
    deleteDate[strcspn(deleteDate, "\n")] = '\0';

    while (fgets(line, sizeof(line), fp)) {

        sscanf(line, "%19[^|]|%99[^|]|%29[^|]|%499[^\n]",
               d.date,
               d.title,
               d.mood,
               d.note);

        if (strcmp(d.date, deleteDate) != 0) {
            fprintf(temp, "%s|%s|%s|%s\n",
                    d.date,
                    d.title,
                    d.mood,
                    d.note);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("lifelog.txt");
    rename("temp.txt", "lifelog.txt");

    if (found)
        printf("Diary entry deleted successfully.\n");
    else
        printf("No entry found with that date.\n");
}
