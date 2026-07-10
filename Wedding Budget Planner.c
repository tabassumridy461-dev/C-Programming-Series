#include <stdio.h>
#include <string.h>

struct Expense {
    char category[50];
    float amount;
};

int main() {

    struct Expense expense[100];

    int choice;
    int totalExpense = 0;
    int count = 0;

    float budget;
    float spent = 0;

    printf("Enter Total Wedding Budget: ");
    scanf("%f", &budget);

    while (1) {

        printf("\nWedding Budget Planner\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Remaining Budget\n");
        printf("4. Highest Expense\n");
        printf("5. Expense Summary\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {

            printf("Expense Category: ");
            scanf(" %[^\n]", expense[count].category);

            printf("Amount: ");
            scanf("%f", &expense[count].amount);

            spent += expense[count].amount;
            count++;

            printf("Expense Added Successfully.\n");
        }

        else if (choice == 2) {

            if (count == 0) {
                printf("No Expenses Found.\n");
            }
            else {

                for (int i = 0; i < count; i++) {

                    printf("\nExpense %d\n", i + 1);
                    printf("Category: %s\n", expense[i].category);
                    printf("Amount: %.2f\n", expense[i].amount);
                }
            }
        }

        else if (choice == 3) {

            printf("Total Budget : %.2f\n", budget);
            printf("Total Spent : %.2f\n", spent);
            printf("Remaining : %.2f\n", budget - spent);

            if (spent > budget) {
                printf("Budget Exceeded By %.2f\n", spent - budget);
            }
        }

        else if (choice == 4) {

            if (count == 0) {
                printf("No Expense Available.\n");
            }
            else {

                int max = 0;

                for (int i = 1; i < count; i++) {

                    if (expense[i].amount > expense[max].amount) {
                        max = i;
                    }
                }

                printf("Highest Expense Category: %s\n", expense[max].category);
                printf("Amount: %.2f\n", expense[max].amount);
            }
        }

        else if (choice == 5) {

            printf("\nWedding Budget Summary\n");
            printf("Budget: %.2f\n", budget);
            printf("Spent: %.2f\n", spent);
            printf("Remaining: %.2f\n", budget - spent);
            printf("Total Expense Entries: %d\n", count);
        }

        else if (choice == 6) {

            printf("Thank You.\n");
            break;
        }

        else {

            printf("Invalid Choice.\n");
        }

    }

    return 0;
}
