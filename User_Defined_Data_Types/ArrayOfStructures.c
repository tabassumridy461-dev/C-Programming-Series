
#include <stdio.h>

struct Student {
    int id;
    char name[30];
};

int main() {
    struct Student students[3] = {
        {101, "Rahim"},
        {102, "Karim"},
        {103, "Sakib"}
    };

    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s\n",
               students[i].id,
               students[i].name);
    }

    return 0;
}

/*
Expected Output:

ID: 101, Name: Rahim
ID: 102, Name: Karim
ID: 103, Name: Sakib
*/
