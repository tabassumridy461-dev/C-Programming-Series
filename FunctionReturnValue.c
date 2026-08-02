#include <stdio.h>

int findSquare(int number);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = findSquare(num);

    printf("Square = %d\n", result);

    return 0;
}

int findSquare(int number)
{
    return number * number;
}
