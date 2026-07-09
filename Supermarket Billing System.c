#include <stdio.h>

int main() {
    int choice, quantity;
    float totalBill = 0, discount = 0, finalBill;

    do {
        printf("\nSupermarket Billing System\n");
        printf("1. Rice (80 Taka/kg)\n");
        printf("2. Sugar (120 Taka/kg)\n");
        printf("3. Cooking Oil (180 Taka/L)\n");
        printf("4. Eggs (12 Taka/piece)\n");
        printf("5. Milk (90 Taka/L)\n");
        printf("6. Finish Billing\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter quantity (kg): ");
                scanf("%d", &quantity);
                totalBill += quantity * 80;
                printf("Rice added successfully.\n");
                break;

            case 2:
                printf("Enter quantity (kg): ");
                scanf("%d", &quantity);
                totalBill += quantity * 120;
                printf("Sugar added successfully.\n");
                break;

            case 3:
                printf("Enter quantity (Liter): ");
                scanf("%d", &quantity);
                totalBill += quantity * 180;
                printf("Cooking Oil added successfully.\n");
                break;

            case 4:
                printf("Enter quantity (Pieces): ");
                scanf("%d", &quantity);
                totalBill += quantity * 12;
                printf("Eggs added successfully.\n");
                break;

            case 5:
                printf("Enter quantity (Liter): ");
                scanf("%d", &quantity);
                totalBill += quantity * 90;
                printf("Milk added successfully.\n");
                break;

            case 6:
                printf("\nGenerating Bill...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 6);

    if (totalBill >= 5000)
        discount = totalBill * 0.15;
    else if (totalBill >= 3000)
        discount = totalBill * 0.10;
    else if (totalBill >= 1000)
        discount = totalBill * 0.05;

    finalBill = totalBill - discount;

    printf("\nTotal Bill      : %.2f Taka\n", totalBill);
    printf("Discount        : %.2f Taka\n", discount);
    printf("Amount to Pay   : %.2f Taka\n", finalBill);

    return 0;
}
