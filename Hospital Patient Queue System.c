#include <stdio.h>

#define MAX_PATIENTS 50

struct Patient {
    int id;
    char name[50];
    int age;
};

int main() {
    struct Patient queue[MAX_PATIENTS];
    int front = 0;
    int rear = 0;
    int choice;

    do {
        printf("\nHospital Patient Queue System\n");
        printf("1. Register Patient\n");
        printf("2. Call Next Patient\n");
        printf("3. View Waiting List\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            if (rear == MAX_PATIENTS) {
                printf("Queue is full.\n");
            } else {
                printf("Enter Patient ID: ");
                scanf("%d", &queue[rear].id);

                printf("Enter Patient Name: ");
                scanf(" %[^\n]", queue[rear].name);

                printf("Enter Age: ");
                scanf("%d", &queue[rear].age);

                rear++;
                printf("Patient registered successfully.\n");
            }
            break;

        case 2:
            if (front == rear) {
                printf("No patients in the queue.\n");
            } else {
                printf("\nNow Serving\n");
                printf("Patient ID: %d\n", queue[front].id);
                printf("Name: %s\n", queue[front].name);
                printf("Age: %d\n", queue[front].age);

                front++;
            }
            break;

        case 3:
            if (front == rear) {
                printf("Waiting list is empty.\n");
            } else {
                int i;

                printf("\nWaiting Patients\n");

                for (i = front; i < rear; i++) {
                    printf("ID: %d\n", queue[i].id);
                    printf("Name: %s\n", queue[i].name);
                    printf("Age: %d\n\n", queue[i].age);
                }
            }
            break;

        case 4:
            printf("Program Closed.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
