

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i, sum = 0;
    float average;

    for (i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    average = sum / 5.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

/*
Output:

Sum = 150
Average = 30.00
*/
