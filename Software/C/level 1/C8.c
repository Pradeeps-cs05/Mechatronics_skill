#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>18)
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("you are not eligible for voting");
    }
    return 0;
}