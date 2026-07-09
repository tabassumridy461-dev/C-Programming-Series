#include <stdio.h>

struct Recharge {
    int rechargeId;
    char customerName[50];
    char mobileNumber[20];
    float amount;
    char operatorName[30];
};

int main() {
    struct Recharge recharges[100];
    int n, i;
    float totalAmount = 0;

    printf("Enter number of recharge records: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nRecharge %d\n", i + 1);

        printf("Enter Recharge ID: ");
        scanf("%d", &recharges[i].rechargeId);

        printf("Enter Customer Name: ");
        scanf("%s", recharges[i].customerName);

        printf("Enter Mobile Number: ");
        scanf("%s", recharges[i].mobileNumber);

        printf("Enter Operator Name: ");
        scanf("%s", recharges[i].operatorName);

        printf("Enter Recharge Amount: ");
        scanf("%f", &recharges[i].amount);
    }

    printf("\nRecharge Details\n");

    for(i = 0; i < n; i++) {
        printf("\nRecharge ID: %d\n", recharges[i].rechargeId);
        printf("Customer Name: %s\n", recharges[i].customerName);
        printf("Mobile Number: %s\n", recharges[i].mobileNumber);
        printf("Operator: %s\n", recharges[i].operatorName);
        printf("Recharge Amount: %.2f\n", recharges[i].amount);

        totalAmount += recharges[i].amount;
    }

    printf("\nTotal Recharge Collection: %.2f\n", totalAmount);

    return 0;
}
