
#include <stdio.h>

struct Student {
    int id;
    char name[30];
    float cgpa;
};

int main() {
    struct Student s1 = {461, "Tabassum", 3.83};

    printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.name);
    printf("CGPA: %.2f\n", s1.cgpa);

    return 0;
}

/*
Expected Output:

Student ID: 461
Student Name: Tabassum
CGPA: 3.83
*/
