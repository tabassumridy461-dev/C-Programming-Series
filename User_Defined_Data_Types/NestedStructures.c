
#include <stdio.h>

struct Address {
    char city[30];
    int zipCode;
};

struct Student {
    int id;
    char name[30];
    struct Address address;
};

int main() {
    struct Student s1 = {
        101,
        "Rahim",
        {"Dhaka", 1207}
    };

    printf("Student ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("City: %s\n", s1.address.city);
    printf("Zip Code: %d\n", s1.address.zipCode);

    return 0;
}

/*
Expected Output:

Student ID: 101
Name: Rahim
City: Dhaka
Zip Code: 1207
*/
