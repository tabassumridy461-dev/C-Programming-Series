

#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Hello World";
    char destination[50];

    strcpy(destination, source);

    printf("Copied string = %s\n", destination);

    return 0;
}

/*
Output:

Copied string = Hello World
*/
