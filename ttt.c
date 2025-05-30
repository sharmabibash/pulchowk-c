#include<stdio.h>
#include<string.h>

struct Booking {
    char passport[10];
    char name[20];
    char destination[30];
    char seat_num[5]; 
    char email[30];
};

void addBooking() {
    FILE *fp = fopen("bookings.txt", "ab"); 
    struct Booking b;
    
    if (fp == NULL) {
        printf("\n\t\t Error opening the file for writing!\n");
        return;
    }

    printf("\n\t\tEnter the following booking details:\n");
    printf("\t\tName: ");
    scanf("%s", b.name);
    printf("\t\tPassport Number: ");
    scanf("%s", b.passport);
    printf("\t\tEmail: ");
    scanf("%s", b.email);
    printf("\t\tDestination: ");
    scanf("%s", b.destination);
    printf("\t\tSeat Number: ");
    scanf("%s", b.seat_num);

    fwrite(&b, sizeof(struct Booking), 1, fp);
    fclose(fp);

    printf("\n\t\tBooking added successfully!\n");
}

void displayBookings() {
    FILE *fp = fopen("bookings.txt", "rb"); 
    struct Booking b;

    if (fp == NULL) {
        printf("\n\t\t No bookings found!\n");
        return;
    }

    printf("\n\t\t Booking details are: \n");
    printf("\n\t\t---------------------------------------------------------\n");
    printf("\t\tName | Passport | Email | Destination | Seat Number\n");
    printf("\n\t\t---------------------------------------------------------\n");

    while (fread(&b, sizeof(struct Booking), 1, fp)) {
        printf("\t\t%s\t %s\t %s\t %s\t %s\n", b.name, b.passport, b.email, b.destination, b.seat_num);
    }

    fclose(fp);
}

int main() {
    int choice;

    do {
        printf("\n\t\t***** Booking System *****\n");
        printf("\t\t1. Add Booking\n");
        printf("\t\t2. Display Bookings\n");
        printf("\t\t3. Exit\n");
        printf("\t\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBooking();
                break;
            case 2:
                displayBookings();
                break;
            case 3:
                printf("\n\t\tExiting the program. Goodbye!\n");
                break;
            default:
                printf("\n\t\tInvalid choice. Please try again!\n");
        }
    } while (choice != 3);

    return 0;
}
