#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>1)
    {   
        printf("The given number is positive");
    }
    else if(a==0)
    {
        printf("The given number is neither positive nor negative");
    }
    else
    {
        printf("The given number is negative");
    }
    return 0;
}