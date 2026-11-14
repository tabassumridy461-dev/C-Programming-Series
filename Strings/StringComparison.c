
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";

    if (strcmp(str1, str2) == 0)
    {
        printf("Strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }

    return 0;
}

/*
Output:

Strings are equal.
*/
