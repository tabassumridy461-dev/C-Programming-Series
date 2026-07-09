#include <stdio.h>
#include <string.h>

#define MAX_DONORS 100

struct Donor {
    int id;
    char name[50];
    char bloodGroup[5];
    int age;
};

int main() {
    struct Donor donors[MAX_DONORS];
    int totalDonors = 0;
    int choice;
    int i;
    char searchGroup[5];

    do {
        printf("\nBlood Bank Management System\n");
        printf("1. Add Donor\n");
        printf("2. View All Donors\n");
        printf("3. Search by Blood Group\n");
        printf("4. Total Donors\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            if (totalDonors == MAX_DONORS) {
                printf("Donor list is full.\n");
                break;
            }

            printf("Enter Donor ID: ");
            scanf("%d", &donors[totalDonors].id);

            printf("Enter Donor Name: ");
            scanf(" %[^\n]", donors[totalDonors].name);

            printf("Enter Blood Group: ");
            scanf("%s", donors[totalDonors].bloodGroup);

            printf("Enter Age: ");
            scanf("%d", &donors[totalDonors].age);

            totalDonors++;

            printf("Donor added successfully.\n");
            break;

        case 2:
            if (totalDonors == 0) {
                printf("No donor information available.\n");
            } else {
                printf("\nDonor List\n");

                for (i = 0; i < totalDonors; i++) {
                    printf("\nDonor %d\n", i + 1);
                    printf("ID: %d\n", donors[i].id);
                    printf("Name: %s\n", donors[i].name);
                    printf("Blood Group: %s\n", donors[i].bloodGroup);
                    printf("Age: %d\n", donors[i].age);
                }
            }
            break;

        case 3:
            if (totalDonors == 0) {
                printf("No donor information available.\n");
                break;
            }

            printf("Enter Blood Group to Search: ");
            scanf("%s", searchGroup);

            printf("\nMatching Donors\n");

            int found = 0;

            for (i = 0; i < totalDonors; i++) {
                if (strcmp(donors[i].bloodGroup, searchGroup) == 0) {
                    printf("ID: %d\n", donors[i].id);
                    printf("Name: %s\n", donors[i].name);
                    printf("Age: %d\n\n", donors[i].age);
                    found = 1;
                }
            }

            if (!found)
                printf("No donor found.\n");

            break;

        case 4:
            printf("Total Donors: %d\n", totalDonors);
            break;

        case 5:
            printf("Program Closed.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}
