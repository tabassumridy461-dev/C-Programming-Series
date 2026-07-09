#include <stdio.h>

int main() {
    int subjects, i;
    float mark, total = 0, average;

    printf("Student Grade Calculator\n");

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    for (i = 1; i <= subjects; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%f", &mark);
        total += mark;
    }

    average = total / subjects;

    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    if (average >= 80)
        printf("Grade: A+\n");
    else if (average >= 70)
        printf("Grade: A\n");
    else if (average >= 60)
        printf("Grade: A-\n");
    else if (average >= 50)
        printf("Grade: B\n");
    else if (average >= 40)
        printf("Grade: C\n");
    else
        printf("Grade: F\n");

    if (average >= 40)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");

    return 0;
}
