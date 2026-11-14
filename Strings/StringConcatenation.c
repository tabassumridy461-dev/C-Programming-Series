
#include <stdio.h>
#include <string.h>

int main()
{
    char first[50] = "Hello ";
    char second[] = "World";

    strcat(first, second);

    printf("Combined string = %s\n", first);

    return 0;
}

/*
Output:

Combined string = Hello World
*/
