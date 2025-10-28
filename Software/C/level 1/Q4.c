#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==1)
    {
        printf("Sunday");
        printf("\nIt is a holiday");
    }
    else if(a==2)
    {
        printf("Monday");
        printf("\nIt is a weekday");
    }
    else if(a==3)
    {
        printf("Tuesday");
        printf("\nIt is a weekday");
    }
    else if(a==4)
    {
        printf("Wednesday");
        printf("\nIt is a weekday");
    }
    else if(a==5)
    {
        printf("Thursday");
        printf("\nIt is a weekday");
    }
    else if(a==6)
    {
        printf("Friday");
        printf("\nIt is a weekday");
    }
    else if(a==7)
    {
        printf("Saturday");
        printf("\nIt is a holiday");
    }
    else
    {
        printf("\nInvalid input");
    }
    return 0;
}