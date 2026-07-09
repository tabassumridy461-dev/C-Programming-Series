#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    char className[20];
    float monthlyFee;
    int monthsPaid;
};

int main() {
    struct Student students[100];
    int n, i;
    float totalCollection = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll);

        printf("Enter Student Name: ");
        scanf("%s", students[i].name);

        printf("Enter Class: ");
        scanf("%s", students[i].className);

        printf("Enter Monthly Fee: ");
        scanf("%f", &students[i].monthlyFee);

        printf("Enter Number of Months Paid: ");
        scanf("%d", &students[i].monthsPaid);
    }

    printf("\nSchool Fee Details\n");

    for(i = 0; i < n; i++) {
        float totalFee = students[i].monthlyFee * students[i].monthsPaid;

        printf("\nRoll Number: %d\n", students[i].roll);
        printf("Student Name: %s\n", students[i].name);
        printf("Class: %s\n", students[i].className);
        printf("Monthly Fee: %.2f\n", students[i].monthlyFee);
        printf("Months Paid: %d\n", students[i].monthsPaid);
        printf("Total Fee Paid: %.2f\n", totalFee);

        totalCollection += totalFee;
    }

    printf("\nTotal School Fee Collection: %.2f\n", totalCollection);

    return 0;
}
