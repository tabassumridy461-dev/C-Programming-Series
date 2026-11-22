
#include <stdio.h>

struct Student {
    int id;
    char name[30];
};

int main() {
    struct Student s1 = {101, "Rahim"};

    struct Student *ptr = &s1;

    printf("Student ID: %d\n", ptr->id);
    printf("Student Name: %s\n", ptr->name);

    return 0;
}

/*
Expected Output:

Student ID: 101
Student Name: Rahim
*/
