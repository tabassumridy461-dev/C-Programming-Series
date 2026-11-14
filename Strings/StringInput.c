
#include <stdio.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Your name is: %s", name);

    return 0;
}

/*
Input:

Tabassum Islam

Output:

Enter your name: Your name is: Tabassum Islam
*/
