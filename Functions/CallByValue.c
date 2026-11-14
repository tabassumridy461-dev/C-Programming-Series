
#include <stdio.h>

void change(int num)
{
    num = 100;
    printf("Inside function = %d\n", num);
}

int main()
{
    int num = 10;

    change(num);

    printf("Outside function = %d\n", num);

    return 0;
}

/*
Output:

Inside function = 100
Outside function = 10
*/
