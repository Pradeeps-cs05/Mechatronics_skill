#include<stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, m6;
    float total, avg;
    printf("Enter marks of 6 subjects: ");
    scanf("%d %d %d %d %d %d", &m1, &m2, &m3, &m4, &m5, &m6);
    total = m1 + m2 + m3 + m4 + m5 + m6;
    avg = total / 6;
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", avg);
    if (avg >= 95)
        printf("Grade: A\n");
    else if (avg >= 85)
        printf("Grade: B\n");
    else if (avg >= 75)
        printf("Grade: C\n");
    else if (avg >= 65)
        printf("Grade: D\n");
    else if (avg >= 45)
        printf("Grade: E\n");
    else
        printf("Grade: F\n");
    return 0;
}