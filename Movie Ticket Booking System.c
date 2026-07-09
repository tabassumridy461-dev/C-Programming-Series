#include <stdio.h>

#define SEATS 10

int main() {
    int seats[SEATS] = {0};
    int choice, seatNumber;
    int bookedTickets = 0;
    float ticketPrice = 300.0;

    do {
        printf("\nMovie Ticket Booking System\n");
        printf("1. View Available Seats\n");
        printf("2. Book a Seat\n");
        printf("3. View Booking Summary\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nSeat Status\n");

            for (int i = 0; i < SEATS; i++) {
                if (seats[i] == 0)
                    printf("Seat %d : Available\n", i + 1);
                else
                    printf("Seat %d : Booked\n", i + 1);
            }
            break;

        case 2:
            printf("Enter seat number (1-%d): ", SEATS);
            scanf("%d", &seatNumber);

            if (seatNumber < 1 || seatNumber > SEATS) {
                printf("Invalid seat number.\n");
            } else if (seats[seatNumber - 1] == 1) {
                printf("Seat already booked.\n");
            } else {
                seats[seatNumber - 1] = 1;
                bookedTickets++;
                printf("Seat booked successfully.\n");
            }
            break;

        case 3:
            printf("\nBooked Tickets: %d\n", bookedTickets);
            printf("Total Amount: %.2f Taka\n", bookedTickets * ticketPrice);
            break;

        case 4:
            printf("Thank you for using the system.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
