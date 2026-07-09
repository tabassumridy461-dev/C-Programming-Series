#include <stdio.h>

int main() {
    int choice, quantity;
    float totalBill = 0;

    do {
        printf("\nRestaurant Order & Billing System\n");
        printf("1. Burger      - 250 Taka\n");
        printf("2. Pizza       - 500 Taka\n");
        printf("3. Fried Rice  - 220 Taka\n");
        printf("4. Chicken Fry - 180 Taka\n");
        printf("5. Soft Drink  - 50 Taka\n");
        printf("6. Finish Order\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 250;
                printf("Burger added to your order.\n");
                break;

            case 2:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 500;
                printf("Pizza added to your order.\n");
                break;

            case 3:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 220;
                printf("Fried Rice added to your order.\n");
                break;

            case 4:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 180;
                printf("Chicken Fry added to your order.\n");
                break;

            case 5:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                totalBill += quantity * 50;
                printf("Soft Drink added to your order.\n");
                break;

            case 6:
                printf("\nOrder completed.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 6);

    if (totalBill >= 2000) {
        printf("Discount: 10%% Applied\n");
        totalBill = totalBill - (totalBill * 0.10);
    }

    printf("Total Bill: %.2f Taka\n", totalBill);

    return 0;
}
