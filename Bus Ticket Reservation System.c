#include <stdio.h>

#define TOTAL_SEATS 20

int main() {
    int seats[TOTAL_SEATS] = {0};
    int choice;
    int seatNumber;
    int bookedSeats = 0;
    float ticketPrice = 500.0;

    do {
        printf("\nBus Ticket Reservation System\n");
        printf("1. View Seat Status\n");
        printf("2. Book a Seat\n");
        printf("3. Cancel Booking\n");
        printf("4. Booking Summary\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nSeat Status\n");

            for (int i = 0; i < TOTAL_SEATS; i++) {
                if (seats[i] == 0)
                    printf("Seat %2d : Available\n", i + 1);
                else
                    printf("Seat %2d : Booked\n", i + 1);
            }
            break;

        case 2:
            printf("Enter seat number (1-%d): ", TOTAL_SEATS);
            scanf("%d", &seatNumber);

            if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
                printf("Invalid seat number.\n");
            } else if (seats[seatNumber - 1] == 1) {
                printf("Seat already booked.\n");
            } else {
                seats[seatNumber - 1] = 1;
                bookedSeats++;
                printf("Seat booked successfully.\n");
            }
            break;

        case 3:
            printf("Enter seat number to cancel: ");
            scanf("%d", &seatNumber);

            if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
                printf("Invalid seat number.\n");
            } else if (seats[seatNumber - 1] == 0) {
                printf("Seat is not booked.\n");
            } else {
                seats[seatNumber - 1] = 0;
                bookedSeats--;
                printf("Booking cancelled successfully.\n");
            }
            break;

        case 4:
            printf("\nBooked Seats : %d\n", bookedSeats);
            printf("Available Seats : %d\n", TOTAL_SEATS - bookedSeats);
            printf("Total Ticket Value : %.2f Taka\n", bookedSeats * ticketPrice);
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
