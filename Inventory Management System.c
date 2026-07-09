#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product products[100];
    int n, i;
    float totalValue = 0;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nProduct %d\n", i + 1);

        printf("Enter Product ID: ");
        scanf("%d", &products[i].id);

        printf("Enter Product Name: ");
        scanf("%s", products[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &products[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &products[i].price);
    }

    printf("\nInventory Details\n");

    for(i = 0; i < n; i++) {
        float value = products[i].quantity * products[i].price;

        printf("\nProduct ID: %d\n", products[i].id);
        printf("Product Name: %s\n", products[i].name);
        printf("Quantity: %d\n", products[i].quantity);
        printf("Price: %.2f\n", products[i].price);
        printf("Stock Value: %.2f\n", value);

        totalValue += value;
    }

    printf("\nTotal Inventory Value: %.2f\n", totalValue);

    return 0;
}
