
#include <stdio.h>

int globalNum = 10;

void display()
{
    auto int a = 20;
    static int b = 0;
    register int c = 30;

    b++;

    printf("Auto = %d\n", a);
    printf("Static = %d\n", b);
    printf("Register = %d\n", c);
    printf("Global = %d\n", globalNum);
}

int main()
{
    display();
    printf("\n");
    display();

    return 0;
}

/*
Output:

Auto = 20
Static = 1
Register = 30
Global = 10

Auto = 20
Static = 2
Register = 30
Global = 10
*/
