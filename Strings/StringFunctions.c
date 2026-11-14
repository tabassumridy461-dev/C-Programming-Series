
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";

    printf("Length = %d\n", (int)strlen(str1));

    printf("Comparison = %d\n", strcmp(str1, str2));

    printf("Concatenation = %s\n", strcat(str1, str2));

    return 0;
}

/*
Output:

Length = 5
Comparison = -15
Concatenation = HelloWorld
*/
