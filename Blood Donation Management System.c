#include <stdio.h>

struct Donor {
    int donorId;
    char name[50];
    char bloodGroup[5];
    int age;
    int unitsDonated;
};

int main() {
    struct Donor donors[100];
    int n, i;
    int totalUnits = 0;

    printf("Enter number of donors: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nDonor %d\n", i + 1);

        printf("Enter Donor ID: ");
        scanf("%d", &donors[i].donorId);

        printf("Enter Donor Name: ");
        scanf("%s", donors[i].name);

        printf("Enter Blood Group: ");
        scanf("%s", donors[i].bloodGroup);

        printf("Enter Age: ");
        scanf("%d", &donors[i].age);

        printf("Enter Units Donated: ");
        scanf("%d", &donors[i].unitsDonated);
    }

    printf("\nBlood Donation Records\n");

    for(i = 0; i < n; i++) {
        printf("\nDonor ID: %d\n", donors[i].donorId);
        printf("Name: %s\n", donors[i].name);
        printf("Blood Group: %s\n", donors[i].bloodGroup);
        printf("Age: %d\n", donors[i].age);
        printf("Units Donated: %d\n", donors[i].unitsDonated);

        totalUnits += donors[i].unitsDonated;
    }

    printf("\nTotal Blood Units Collected: %d\n", totalUnits);

    return 0;
}
