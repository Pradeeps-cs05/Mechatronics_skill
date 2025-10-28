#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
    {
        printf("The given number is divisible");
    }
    else
    {
        printf("The given number is not divisible");
    }
    return 0;
}