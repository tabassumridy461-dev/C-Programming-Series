
#include <stdio.h>

int main()
{
    char names[3][20] = {
        "Rahim",
        "Karim",
        "Tabassum"
    };

    int i;

    printf("Names:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}

/*
Output:

Names:
Rahim
Karim
Tabassum
*/
